#include "Producer.h"
#include <iostream>
#include <random>
#include <thread>
#include <unistd.h>

using namespace std;

Producer::Producer(MessageBroker& messageBroker) {
    thread_obj = std::thread([this, &messageBroker]() {
        random_device rd;
        mt19937 engine(rd());
        uniform_int_distribution<int> distribution(1, 10);

        while (true) {
            int id = distribution(engine);
            sleep(id);

            messageBroker.add_to_list(Data(id, "The id is " + to_string(id)));

            cout << "Have slept " << id << endl;
        }
    });
}

Producer::~Producer() {
    if (thread_obj.joinable()) {
        thread_obj.join();
    }
}