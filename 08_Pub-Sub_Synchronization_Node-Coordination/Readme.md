# Tutorial
Link: http://zguide.zeromq.org/page:all#Node-Coordination

# Information

<img src=https://github.com/imatix/zguide/raw/master/images/fig22.png/>

This is how the application will work:

* The publisher knows in advance how many subscribers it expects. This is just a magic number it gets from somewhere.
* The publisher starts up and waits for all subscribers to connect. This is the node coordination part. Each subscriber subscribes and then tells the publisher it's ready via another socket.
* When the publisher has all subscribers connected, it starts to publish data.


# Steps:
* Build syncpub.c: 
```
gcc syncpub.c -o syncpub.out -lzmq -I ..
```
* Build syncsub.c: 
```
gcc syncsub.c -o syncsub.out -lzmq -I ..
```
* Run syncpub.out: 
```
./syncpub.out
```
* Run syncsub.out 3 times:
```
./syncsub.out
```
* Result in publisher:
```
Waiting for subscribers
Connected subscribers: 1
Connected subscribers: 2
Connected subscribers: 3
Broadcasting messages
```