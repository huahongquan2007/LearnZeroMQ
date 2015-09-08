gcc sink.c -lzmq -o sink.out -I ..
gcc ventilator.c -lzmq -o ventilator.out -I ..
gcc worker.c -lzmq -o worker.out -I ..