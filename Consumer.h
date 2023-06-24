//
// Created by KATCO on 6/22/2023.
//

#ifndef IONDEV_CONSUMER_H
#define IONDEV_CONSUMER_H
#include <thread>
#include "MessageBroker.h"


class Consumer {
private:
    thread thread_obj;
    Data temp_data;
public:
    Consumer(MessageBroker &messageBroker);
    ~Consumer();
};


#endif //IONDEV_CONSUMER_H
