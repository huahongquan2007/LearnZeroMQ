# Tutorial
Link: http://zguide.zeromq.org/page:all#Shared-Queue-DEALER-and-ROUTER-sockets

# Steps:
* Build rrbroker.c: 
```
gcc rrbroker.c -lzmq -o rrbroker.out -I ..
```
* Build rrclient.c: 
```
gcc rrclient.c -lzmq -o rrclient.out -I ..
```
* Build rrworker.c: 
```
gcc rrworker.c -lzmq -o rrworker.out -I ..
```
* Run rrbroker.out:
```
./rrbroker.out
```
* Run rrclient.out:
```
./rrclient.out
```
* Run rrworker.out:
```
./rrworker.out
```