# Tutorial
Link: http://zguide.zeromq.org/page:all#Identities-and-Addresses

# Steps:
* Build identity.c: 
```
gcc identity.c -o identity.out -lzmq -I ..
```
* Run identity.out: 
```
./identity.out
```
* Result:
```
----------------------------------------
[005] 006B8B4567
[000] 
[028] ROUTER uses a generated UUID
----------------------------------------
[005] PEER2
[000] 
[040] ROUTER socket uses REQ's socket identity
```