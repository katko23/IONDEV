//
// Created by KATCO on 6/22/2023.
//

#ifndef IONDEV_MESSAGEBROKER_H
#define IONDEV_MESSAGEBROKER_H


#include <list>
#include <iterator>
#include "Data.h"
#include <mutex>
#include <iostream>
using namespace std;

class MessageBroker
{
private:
    list<Data> array;

    mutex mtx;

public:
    MessageBroker();

    MessageBroker(list<Data> params);

    void add_to_list(Data param);

    Data get_latest();

    void print_array();
};

#endif //IONDEV_MESSAGEBROKER_H
