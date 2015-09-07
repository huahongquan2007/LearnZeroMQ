gcc sink.c -lzmq -o sink.out
gcc ventilator.c -lzmq -o ventilator.out
gcc worker.c -lzmq -o worker.out