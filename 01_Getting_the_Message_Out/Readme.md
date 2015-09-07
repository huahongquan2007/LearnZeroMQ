# Tutorial
Link: http://zguide.zeromq.org/page:all#Getting-the-Message-Out

# Steps:
* Download: zhelpers.h from: https://github.com/imatix/zguide/blob/master/examples/C/zhelpers.h
* Build server.c: 
```
gcc server.c -lzmq -o server.out
```
* Build client.c: 
```
gcc client.c -lzmq -o client.out
```
* Run client.out:
```
./client.out
```
* Run server.out:
```
./server.out
```
* Expected result in "client.out" console:
```
Collecting updates from weather server…
Average temperature for zipcode '10001 ' was ...
```
