# Steps:
* Download zmq.hpp from https://github.com/zeromq/cppzmq/blob/master/zmq.hpp
* Copy zmq.hpp to **/usr/local/include**
* Build:
```
mkdir build
cd build
cmake ..
make
```
* Run publisher and subscriber
```
./publisher
./subscriber
```