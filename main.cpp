#include <iostream>
#include <list>
#include <unistd.h>
#include "Data.h"
#include "Producer.h"
#include "Consumer.h"
#include "MessageBroker.h"
using namespace std;

int main()
{
//    srand (time(NULL));

    list<Data> parameter = { Data(1,"Data"), Data(2, "data2"), Data(3,"data3") };

    MessageBroker mb{parameter};



    Producer p1(mb);
    Producer p2(mb);
    Producer p3(mb);

    Consumer c1(mb);
    Consumer c2(mb);
    Consumer c3(mb);

//    sleep(10);

//    mb.print_array();

    return 0;
}
