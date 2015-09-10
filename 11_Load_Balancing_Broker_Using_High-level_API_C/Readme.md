# Tutorial: http://zguide.zeromq.org/page:all#The-CZMQ-High-Level-API

# Installation:
* High-level C Binding: http://czmq.zeromq.org/page:get-the-software

# Steps:
* Build lbbroker2-zmq_poll.c
```
gcc lbbroker2-zmq_poll.c -o lbbroker2-zmq_poll.out -lczmq -lczmq
```
* Run lbbroker2-zmq_poll.out
```
./lbbroker2-zmq_poll.out
```
* Result:
```
Client: OK
Client: OK
Client: OK
Client: OK
Client: OK
Client: OK
Client: OK
Client: OK
...
```
* Build lbbroker3-zloop.c
```
gcc lbbroker3-zloop.c -o lbbroker3-zloop.out -lczmq -lczmq
```
* Run lbbroker3-zloop.out
```
./lbbroker3-zloop.out
```
* Result:
```
Client: OK
Client: OK
Client: OK
Client: OK
Client: OK
Client: OK
Client: OK
Client: OK
...
```