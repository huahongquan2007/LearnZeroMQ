# Tutorial
Link: http://zguide.zeromq.org/page:all#Pub-Sub-Message-Envelopes

# Information

<img src=https://github.com/imatix/zguide/raw/master/images/fig23.png/>


# Steps:
* Build psenvpub.c: 
```
gcc psenvpub.c -o psenvpub.out -lzmq -I ..
```
* Build psenvsub.c: 
```
gcc psenvsub.c -o psenvsub.out -lzmq -I ..
```
* Run psenvpub.out: 
```
./psenvpub.out
```
* Run psenvsub.out 3 times:
```
./psenvsub.out
```
* Result in subscribers:
```
[B] We would like to see this
[B] We would like to see this
[B] We would like to see this
[B] We would like to see this
[B] We would like to see this
```