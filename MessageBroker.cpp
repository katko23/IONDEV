#include "MessageBroker.h"
#include <list>
#include <mutex>

using namespace std;

MessageBroker::MessageBroker() {}

MessageBroker::MessageBroker(list<Data> params) {
    this->array.splice(this->array.end(), params);
}

void MessageBroker::add_to_list(Data param) {
    lock_guard<mutex> lock(mtx); // Lock the mutex before modifying the array
    array.push_back(param);
}

Data MessageBroker::get_latest() {
    lock_guard<mutex> lock(mtx);
    Data ans;
    if (!array.empty()) {
        ans = array.front();
        array.pop_front();
    }
    return ans;
}

void MessageBroker::print_array() {
    lock_guard<mutex> lock(mtx); // Lock the mutex before accessing the array
    for (const auto& i : array) {
        cout << i.id << endl;
        cout << i.info << endl << endl;
    }
    cout << endl;
}
