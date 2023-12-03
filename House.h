#ifndef INC_0212CLASS2_HOUSE_H
#define INC_0212CLASS2_HOUSE_H
#include "Owner.h"
#include <vector>
#include <map>
#include "Flat.h"

struct House {

vector<Flat> house;

void Init (Flat flat){
    house.push_back(flat);
}
    void PrintFlatOwners (int Flat_number){
        for (int i = 0; i < house.size(); ++i) {
        if (house[i].flat_number == Flat_number){
            cout << "\nFlat number: " << Flat_number << endl;
            cout << "Owner: " << endl;
            house[i].owner.PrintOwner(house[i].owner);
        }
        }
    }

    void PrintAllOwners(){
        for (int i = 0; i < house.size(); ++i) {
            cout << "\nFlat number: " << house[i].flat_number << endl;
            cout << "Owner: " << endl;
            house[i].owner.PrintOwner(house[i].owner);
        }
}

};

#endif //INC_0212CLASS2_HOUSE_H
