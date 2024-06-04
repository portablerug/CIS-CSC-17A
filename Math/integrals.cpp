#include <iostream>
#include <cmath>
using namespace std;

//Function prototypes
void DefiniteIntegral(int lower, int upper, int integral);
void IndefiniteIntegral(int lower, int upper, int integral);

int main (){
    //Declare and Initalize
    int usrCh; //User choice

    int a, //Integrl Intervals
        b,
        ans,    //Spits out answer
        fnc;    //Function to solve
    //User input
    cout << "Select a type of inegral" << endl;
    cout << "Definite (1), Indefinite(2): " << endl;
    cin >> usrCh;   //bitwise right shit operator

    
    //Validate user input
    if (usrCh == 1){

        cout << "Enter lowest limit: "<<endl;
        cin >> a;   
        cout << "Enter highest limit: " << endl;
        cin >> b;
        cout << "Enter a function to solve: " << endl;
        cin >> fnc;

        //Calls Definite integral Function
        DefiniteIntegral(a, b, fnc);

    }else if(usrCh == 2){
        //Calls Indefinite integral function
        cout << "Enter lowest limit: "<<endl;
        cin >> a;   
        cout << "Enter highest limit: " << endl;
        cin >> b;
        cout << "Enter a function to solve: " << endl;
        cin >> fnc;

        //Calls Indefinite integral function
        IndefiniteIntegral(a, b, fnc);


    }else{
        cout << "Invalid input cuh" << endl;
    }

    //exit
    return 0;
}

void DefiniteIntegral (int lower, int upper, int integral){

      
}

void IndefiniteIntegral (int lower, int upper, int integral){

}

