# Tutorial: http://zguide.zeromq.org/page:all#The-Dynamic-Discovery-Problem

# Information

<img src=https://github.com/imatix/zguide/raw/master/images/fig13.png />

# Steps:
* Build wuproxy.c
```
gcc wuproxy.c -o wuproxy.out -lzmq -I ..
```
* Build client.c
```
gcc client.c -o client.out -lzmq -I ..
```
* Build server.c
```
gcc server.c -o server.out -lzmq -I ..
```