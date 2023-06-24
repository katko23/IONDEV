//
// Created by KATCO on 6/22/2023.
//

#include "Consumer.h"
#include "MessageBroker.h"
#include <iostream>
#include <unistd.h>

using namespace std;

Consumer::Consumer(MessageBroker &messageBroker) {

    thread_obj = std::thread([this, &messageBroker]() {
        while (true) {
             temp_data = messageBroker.get_latest();

            if(temp_data.id != 0) {
                cout << temp_data.info << endl;

                sleep(temp_data.id);

//            cout << "Message broker now :" << endl;

//            messageBroker.print_array();

//            cout << "Have slept " << id << endl;
            }
        }
    });
}

Consumer::~Consumer() {
    if (thread_obj.joinable()) {
        thread_obj.join();
    }
}




