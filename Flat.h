#ifndef INC_0212CLASS2_FLAT_H
#define INC_0212CLASS2_FLAT_H
#include "Owner.h"
#include <vector>
#include <map>

struct Flat {

    Owner owner;
    int flat_number;


    void Init(int flat_number, Owner owner) {

        this->flat_number = flat_number;
        this->owner = owner;

    };

};
#endif //INC_0212CLASS2_FLAT_H
