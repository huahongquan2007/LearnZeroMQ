# Tutorial
Link: http://zguide.zeromq.org/page:all#Divide-and-Conquer

# Information

We have:
* A ventilator that produces tasks that can be done in parallel
* A set of workers that process tasks
* A sink that collects results back from the worker processes

<img src=https://github.com/imatix/zguide/raw/master/images/fig5.png/>

# Steps:
* Download: zhelpers.h from: https://github.com/imatix/zguide/blob/master/examples/C/zhelpers.h
* Build:
```
sh build.sh
```
* Run:
```
./sink.out
```
```
./worker.out
```
```
./ventilator.out
```

* The average cost of a batch is 5 seconds. When we start 1, 2, or 4 workers we get results like this from the sink:
1 worker: total elapsed time: 5034 msecs.
2 workers: total elapsed time: 2421 msecs.
4 workers: total elapsed time: 1018 msecs.