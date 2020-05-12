FROM ubuntu:20.04

ENV DEBIAN_FRONTEND=noninteractive
RUN apt-get update -y
RUN apt-get install -y nano vim gdb g++ gcovr lcov make cmake libgtest-dev

COPY README.txt /home/root/
COPY IgnoreMe.sh /home/root/
COPY zadania /home/root/exercises/

RUN /home/root/IgnoreMe.sh

WORKDIR home/root
