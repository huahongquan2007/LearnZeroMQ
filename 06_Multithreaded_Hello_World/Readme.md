# Tutorial
Link: http://zguide.zeromq.org/page:all#Multithreading-with-ZeroMQ

# Steps:
* Build mtserver.c: 
```
gcc mtserver.c -o mtserver.out -lzmq -lpthread -I ..
```
* Build mtclient.c: 
```
gcc client.c -lzmq -o client.out -I ..
```