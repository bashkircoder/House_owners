#include <iostream>
#include "House.h"
#include "Owner.h"
#include <vector>
#include <map>



int main() {

    House house;
     do {
         int flat_number;
         cout << "Enter number of flat";
         cin >> flat_number;

         string last_name;
         string first_name;
         string surname;

         cout << "Enter the last name of the owner";
         cin >> last_name;
         cout << "Enter the first name of the owner";
         cin >> first_name;
         cout << "Enter surname of the owner";
         cin >> surname;

         double share;
         cout << "Enter the share of the owner";
         cin >> share;

         Owner owner;
         owner.Init(last_name, first_name, surname, share);

         Flat flat;
         flat.Init(flat_number, owner);


         house.Init(flat);

         cout << "\nRepeat? (y/n)" << endl;
         char answer;
         cin >> answer;
         if (answer != 'y' && answer!= 'Y') break;

     } while (true);

     do{
         cout << "Choose: " << endl;
         cout << "1. Print owners by flat number" << endl;
         cout << "2. Print all owners" << endl;
         int choice; cin >> choice;

         switch (choice) {
             case 1:{
                 cout << "Enter flat number" << endl;
                 int number; cin >> number;
                 house.PrintFlatOwners(number);
                 break;
             }
             case 2:{
                 house.PrintAllOwners();
                 break;
             }
             default:{
                 break;
             }
         }
         cout << "\nRepeat? (y/n)" << endl;
         char answer;
         cin >> answer;
         if (answer != 'y' && answer!= 'Y') break;

     } while (true);


    return 0;
}


