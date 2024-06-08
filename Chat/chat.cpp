// main.cpp

#include <iostream>
#include <iomanip>
#include "JapaneseCars.h"
#include "AmericanCars.h"
using namespace std;

int main() {
    //Define variables
    int choice;
    int carChoice;

    //Japanese car object
    Toyota toyotaCar("Supra", 2022, 37,800); //Month year and price
    Honda hondaCar("Civic Type R", 2023, 60,400);
    Nissan nissanCar("370z", 2021, 30,999);

    //American car objects
    Ford fordCar("Mustang Shelby", 2021, 55,000);
    Chevrolet chevroletCar("Silverado", 2024, 70,000);
    Tesla teslaCar("Model 3", 2023, 40,999);

    do {
        cout << "|----------------------------------|" << endl;
        cout << "|  Welcome to Miguel's Dealership! |" << endl;
        cout << "|  Please select a car type that   |" << endl;
        cout << "|  interests you the most!         |" << endl;
        cout << "|Press 1 or 2:                     |" << endl;
        cout << "|  1. Japanese Imports             |" << endl;
        cout << "|  2. American Made                |" << endl;
        cout << "|__________________________________|" << endl;
        cin >> choice;

        //Check for choices
        if (choice == 1) {
            //Loop for japanese cars ONLY
            do {
                cout << "|----------------------------------|" << endl;
                cout << "|  You chose Japanese cars.        |" << endl;
                cout << "|  These are our current models    |" << endl;
                cout << "|Please select a car for more info |" << endl;
                cout << "|  1. "; toyotaCar.display(); cout << setw(18) << "|" << endl; //Adjust the lines
                cout << "|  2. "; hondaCar.display(); cout << setw(18) << "|" << endl;
                cout << "|  3. "; nissanCar.display(); cout << setw(18) << "|" << endl; //Minus 1
                cout << "|__________________________________|" << endl;
                cin >> carChoice;

                if (carChoice == 1) {
                    toyotaCar.displayDetails();
                } else if (carChoice == 2) {
                    hondaCar.displayDetails();
                } else if (carChoice == 3) {
                    nissanCar.displayDetails();
                } else {
                    cout << "Invalid choice! Please select a valid car number." << endl;
                }
            } while (carChoice < 1 || carChoice > 3);
        } else if (choice == 2) {
            do {
                cout << "|----------------------------------|" << endl;
                cout << "|  You chose American cars.        |" << endl;
                cout << "|  These are our current models    |" << endl;
                cout << "|Please select a car for more info |" << endl;
                cout << "|  1. "; fordCar.display(); cout << setw(16) << "|" << endl;
                cout << "|  2. "; chevroletCar.display(); cout << setw(17) << "|" << endl;
                cout << "|  3. "; teslaCar.display(); cout << setw(16) << "|" << endl;
                cout << "|__________________________________|" << endl;
                cin >> carChoice;

                if (carChoice == 1) {
                    fordCar.displayDetails();
                } else if (carChoice == 2) {
                    chevroletCar.displayDetails();
                } else if (carChoice == 3) {
                    teslaCar.displayDetails();
                } else {
                    cout << "Invalid choice! Please select a valid car number." << endl;
                }
            } while (carChoice < 1 || carChoice > 3);
        } else {
            cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 1 && choice != 2);

    return 0;
}
