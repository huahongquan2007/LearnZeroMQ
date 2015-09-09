# Tutorial
Link: http://zguide.zeromq.org/page:all#Signaling-Between-Threads-PAIR-Sockets

# Information

<img src=https://github.com/imatix/zguide/raw/master/images/fig21.png/>

This is a classic pattern for multithreading with ZeroMQ:

* Two threads communicate over inproc, using a shared context.
* The parent thread creates one socket, binds it to an inproc:// endpoint, and then starts the child thread, passing the context to it.
* The child thread creates the second socket, connects it to that inproc:// endpoint, and then signals to the parent thread that it's ready.

Note that multithreading code using this pattern is not scalable out to processes. If you use inproc and socket pairs, you are building a tightly-bound application, i.e., one where your threads are structurally interdependent. Do this when low latency is really vital. The other design pattern is a loosely bound application, where threads have their own context and communicate over ipc or tcp. You can easily break loosely bound threads into separate processes.


# Steps:
* Build mtrelay.c: 
```
gcc mtrelay.c -o mtrelay.out -lzmq -lpthread -I ..
```
* Run mtrelay.out: 
```
./mtrelay.out
```

* Result:
```
Step 1 ready, signaling step 2
Step 2 ready, signaling step 3
Test successful!
```