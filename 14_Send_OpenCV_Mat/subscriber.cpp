#include <iostream>

#include "zhelpers.hpp"
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

int main() {
    cout << "Camera subscriber!" << endl;

    Mat frame(240, 320, CV_8UC3);

    zmq::context_t context(1);
    zmq::socket_t subscriber(context, ZMQ_SUB);
    subscriber.connect("tcp://localhost:5559");
    subscriber.setsockopt(ZMQ_SUBSCRIBE, "", 0);

    while(1){
        zmq::message_t message;
        subscriber.recv(&message);

        cout << "Receive: " << message.size() << endl;
        memcpy(frame.data, message.data(), message.size());

        imshow("SUBSCRIBER", frame);

        int k = waitKey(10);

        if(k == 'q'){
            break;
        }
    }

    return 0;
}