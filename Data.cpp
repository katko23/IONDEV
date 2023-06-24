//
// Created by KATCO on 6/23/2023.
//

#include "Data.h"

Data::Data(int i_temp, string if_temp) {
    id = i_temp;
    info = if_temp;
}

Data::Data() {
    id = 0;
    info = "NULL";
}
