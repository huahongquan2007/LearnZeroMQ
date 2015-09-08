# Tutorial
Link: http://zguide.zeromq.org/page:all#Handling-Multiple-Sockets

# Steps:
* Build msreader.c: 
```
gcc msreader.c -lzmq -o msreader.out -I ..
```
* Build mspoller.c: 
```
gcc mspoller.c -lzmq -o mspoller.out -I ..
```
* Run msreader.out:
```
./msreader.out
```
* Run mspoller.out:
```
./mspoller.out
```