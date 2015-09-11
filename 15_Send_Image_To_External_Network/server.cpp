#include <iostream>

#include "zhelpers.hpp"
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

int main() {
    cout << "Camera server!" << endl;

    Mat frame(240, 320, CV_8UC3);

    zmq::context_t context(1);
    zmq::socket_t publisher(context, ZMQ_PUB);
    publisher.bind("tcp://*:6363");

    zmq::socket_t receiver(context, ZMQ_PULL);
    receiver.connect("tcp://115.78.209.71:8887");
//    receiver.connect("tcp://localhost:8887");

    while(1){
        zmq::message_t message;
        receiver.recv(&message);
        publisher.send(message);
    }

    return 0;
}