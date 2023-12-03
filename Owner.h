#ifndef INC_0212CLASS2_OWNER_H
#define INC_0212CLASS2_OWNER_H
#include <string>

using namespace std;

struct Owner {

    string last_name;
    string first_name;
    string surname;
    double share;

    void Init (string last_name, string first_name, string surname, double share){

        this -> last_name = last_name;
        this -> first_name = first_name;
        this -> surname = surname;
        this -> share = share;

    }

    void PrintOwner(Owner owner){
        cout << "Last name: " << last_name;
        cout << "\nFirst name: " << first_name;
        cout << "\nSurname: " << surname;
        cout << "\nShare: " << share;
    };

};


#endif //INC_0212CLASS2_OWNER_H
