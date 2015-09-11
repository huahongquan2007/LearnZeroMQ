#include <iostream>

#include "zhelpers.hpp"
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

int main() {
    cout << "Camera publisher!" << endl;

    VideoCapture cap(0);
    cap.set(CV_CAP_PROP_FRAME_WIDTH, 320);
    cap.set(CV_CAP_PROP_FRAME_HEIGHT, 240);
    Mat frame;

    zmq::context_t context(1);
    zmq::socket_t publisher(context, ZMQ_PUB);
    publisher.bind("tcp://*:5559");

    while(cap.isOpened()){
        cap >> frame;

        imshow("PUBLISHER", frame);
        int len = frame.total() * frame.channels();
        zmq::message_t message(len);
        memcpy (message.data(), frame.data, len);
        bool rc = publisher.send (message);

        int k = waitKey(10);
        if(k == 'q'){
            break;
        }
    }

    return 0;
}