cd /usr/src/gtest
mkdir build
cd build
cmake ..
make
cp lib/libgtest* /usr/lib
cd /home/root/exercises/zad1
ulimit -c unlimited
g++ -g main.cpp -o prog
./prog
gdb -ex 'quit' -q prog core
./sprawdzSie 11
cd /home/root/exercises/zad2
ulimit -c unlimited
g++ -g main.cpp -o prog
./prog
gdb -ex 'quit' -q prog core
./sprawdzSie 8
cd /home/root/exercises/zad3
cat main_test.cpp
./tests
cd /home/root/exercises/zad3_wersja_dla_chetnych
cat main_test.cpp
./tests


