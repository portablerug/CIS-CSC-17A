/* 
 * File:   main.cpp
 * Author: Miguel Juarez
 * Created on January 6, 2024, 6:31 PM
 * Purpose: Template for Projects
 */

#include <iostream> //Input output Library
using namespace std;
//User Libraries 

//Function Prototypes

//Program Execution begins here
int main() {
    //Set a random seed
    
    //Declare all variables
    int numMnth = 0;    //Number of months
    int  year = 0;  //Year chosen
    int numDys = 0; //Number of days
    //Initialize all variables
    
    //Process or Map solution
    cout << " Input a month (1-12): ";
    cin >> numMnth;
    if (numMnth > 12 || numMnth <= 0){
        return 0;
    }else{
        cout << "Enter a year: "<< endl;
        cin >> year;
    }

    switch (numMnth){
        case 1: numDys = 31;
        case 2: numDys = 28;
        case 3: numDys = 31;
        case 4: numDys = 30;
        case 5: numDys = 31;
        case 6: numDys = 30;
        case 7: numDys = 31;
        case 8: numDys = 31;
        case 9: numDys = 30;
        case 10: numDys = 31;
        case 11: numDys = 30;
        case 12: numDys = 31;
    }


    //Display the output
    cout << numDys << "days"<<endl;
    //Exit the program
    return 0;
}