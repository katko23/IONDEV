cmake_minimum_required(VERSION 3.24)
project(IonDev)

set(CMAKE_CXX_STANDARD 23)

add_executable(IonDev main.cpp MessageBroker.cpp MessageBroker.h Consumer.cpp Consumer.h Producer.cpp Producer.h Data.cpp Data.h)
