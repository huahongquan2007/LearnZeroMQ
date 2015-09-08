# Tutorial
Link: http://zguide.zeromq.org/page:all#ZeroMQ-s-Built-In-Proxy-Function

# Steps:
* Build msgqueue.c: 
```
gcc msgqueue.c -lzmq -o msgqueue.out -I ..
```
* Build rrclient.c: 
```
gcc rrclient.c -lzmq -o rrclient.out -I ..
```
* Build rrworker.c: 
```
gcc rrworker.c -lzmq -o rrworker.out -I ..
```
* Run msgqueue.out:
```
./msgqueue.out
```
* Run rrclient.out:
```
./rrclient.out
```
* Run rrworker.out:
```
./rrworker.out
```