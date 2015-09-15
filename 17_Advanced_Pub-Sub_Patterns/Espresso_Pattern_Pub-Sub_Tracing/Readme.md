# Tutorial: http://zguide.zeromq.org/page:all#Pub-Sub-Tracing-Espresso-Pattern

# Installation:
* High-level C Binding: http://czmq.zeromq.org/page:get-the-software

# Information:

Espresso works by creating a listener thread that reads a PAIR socket and prints anything it gets. That PAIR socket is one end of a pipe; the other end (another PAIR) is the socket we pass to zmq_proxy(). In practice, you'd filter interesting messages to get the essence of what you want to track (hence the name of the pattern).

The subscriber thread subscribes to "A" and "B", receives five messages, and then destroys its socket. When you run the example, the listener prints two subscription messages, five data messages, two unsubscribe messages, and then silence:
```
[002] 0141
[002] 0142
[007] B-91164
[007] B-12979
[007] A-52599
[007] A-06417
[007] A-45770
[002] 0041
[002] 0042
```
This shows neatly how the publisher socket stops sending data when there are no subscribers for it. The publisher thread is still sending messages. The socket just drops them silently.


# Steps:
* Build espresso.c
```
gcc espresso.c -o espresso.out -lzmq -lczmq
```

