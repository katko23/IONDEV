//
// Created by KATCO on 6/22/2023.
//

#ifndef IONDEV_PRODUCER_H
#define IONDEV_PRODUCER_H
#include "thread"
#include "MessageBroker.h"


class Producer {
public:
    Producer(MessageBroker &messageBroker);
    ~Producer();
private:
    static int nr_of_producers;
    std::thread thread_obj;
    MessageBroker messagebroker;
    void do_actions();

};


#endif //IONDEV_PRODUCER_H
