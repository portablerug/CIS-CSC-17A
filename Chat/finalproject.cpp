#include <iostream>
#include <iomanip>
#include <stdexcept> // For std::invalid_argument and std::out_of_range
#include <limits>    // For std::numeric_limits
#include "JapaneseCars.h"
#include "AmericanCars.h"
using namespace std;

int main() {
    try {
        int choice;
        int carChoice;

        // Japanese car objects
        Toyota toyotaCar("Supra", 2022, 37800); 
        Honda hondaCar("Civic Type R", 2023, 60400); 
        Nissan nissanCar("370z", 2021, 30999); 

        // American car objects
        Ford fordCar("Mustang Shelby", 2021, 55000); 
        Chevrolet chevroletCar("Silverado", 2024, 70000); 
        Tesla teslaCar("Model 3", 2023, 40999); 
        Tesla cyberTruck("Cybertruck", 2023, 69900); //New car to the dealership by object

        do {
            cout << "|----------------------------------|" << endl;
            cout << "|  Welcome to Miguel's Dealership! |" << endl;
            cout << "|  Please select a car type that   |" << endl;
            cout << "|  interests you the most!         |" << endl;
            cout << "|Press 1, 2, or 3:                  |" << endl;
            cout << "|  1. Japanese Gasoline Cars      |" << endl;
            cout << "|  2. American Gasoline Cars      |" << endl;
            cout << "|  3. Electric Cars                |" << endl;
            cout << "|__________________________________|" << endl;
            cin >> choice;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                throw invalid_argument("Invalid input! Please enter a number.");
            }

            if (choice < 1 || choice > 3) {
                throw out_of_range("Invalid choice! Please select a number between 1 and 3.");
            }

            if (choice == 1) {
                do {
                    cout << "|----------------------------------|" << endl;
                    cout << "|  You chose Japanese gasoline cars. |" << endl;
                    cout << "|  These are our current models    |" << endl;
                    cout << "|Please select a car for more info |" << endl;
                    cout << "|  1. "; toyotaCar.display(); cout << setw(18) << "|" << endl;
                    cout << "|  2. "; hondaCar.display(); cout << setw(18) << "|" << endl;
                    cout << "|  3. "; nissanCar.display(); cout << setw(18) << "|" << endl;
                    cout << "|__________________________________|" << endl;
                    cin >> carChoice;

                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        throw invalid_argument("Invalid input! Please enter a number.");
                    }

                    if (carChoice < 1 || carChoice > 3) {
                        throw out_of_range("Invalid choice! Please select a number between 1 and 3.");
                    }

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

                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        throw invalid_argument("Invalid input! Please enter a number.");
                    }

                    if (carChoice < 1 || carChoice > 3) {
                        throw out_of_range("Invalid choice! Please select a number between 1 and 3.");
                    }

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
            } else if (choice == 3) {
                do {
                    cout << "|----------------------------------|" << endl;
                    cout << "|  You chose Electric cars.        |" << endl;
                    cout << "|  These are our current models:   |" << endl;
                    cout << "|Please select a car for more info |" << endl;
                    cout << "|  1. "; teslaCar.display(); cout << setw(16) << "|" << endl;
                    cout << "|  2. "; cyberTruck.display(); cout << setw(16) << "|" << endl; // Display Cybertruck
                    cout << "|__________________________________|" << endl;
                    cin >> carChoice;

                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        throw invalid_argument("Invalid input! Please enter a number.");
                    }

                    //Range
                    if (carChoice <= 1 || carChoice > 2) {
                        throw out_of_range("Invalid choice! Please select a number between 1 and 2.");
                    }

                    if (carChoice == 1) {
                        teslaCar.displayDetails();
                    } else if (carChoice == 2) {
                        cyberTruck.displayDetails(); // Display details of Cybertruck
                    } else {
                        cout << "Invalid choice! Please select a valid car number." << endl;
                    }
                } while (carChoice < 1 || carChoice > 2); // Update condition for 2 options
            }

        } while (choice < 1 || choice > 3);
    } catch (const exception& e) {
        cerr << "Exception: " << e.what() << endl;
    }

    return 0;
}
