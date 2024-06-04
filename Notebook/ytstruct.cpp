#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//Structure
//Put in all the variables (members) that describe a smart phone or the name of the Data type you make
//DO NOT INITIALIZE IN THE STRUCUTRE (serves as a model when making a variable for this type (Smartphone))
struct SmartPhone{
    string name;
    int storageSpace;
    string color;
    float price;
};

//Will hold the type of Smartphone this person has
struct Person{
    string name;
    int age;
    SmartPhone smartphone;
};

//Function Prototype
void printSmartPhoneInfo(SmartPhone phone1);
void printPersonInfo(Person boy);

int main(){
    //Using structure
    //Begin by specifying the type of variable and name the variable
    SmartPhone phone1;
    phone1.name = "iPhone 12";
    phone1.storageSpace = 64;
    phone1.color = "Red";
    phone1.price = 1290.99;

    //Declare and Initialize new variable
    SmartPhone phone2;
    phone2.name = "Samsung Zflip";
    phone2.storageSpace = 64;
    phone2.color = "Grey";
    phone2.price = 1005.92;

    //Display

    //Makeing our code reusable using functions
    /*
    printSmartPhoneInfo(phone1);
    printSmartPhoneInfo(phone2);
    */

    //Declare and Initialize a Person
    Person boy;
    boy.name = "Jiang";
    boy.age = 20;
    //Assign a variable of type ||SmartPhone!||
    boy.smartphone = phone1;

    //Display
    printPersonInfo(boy);

    //Exit
    return 0;
}

//Pass in structure as a parameter with the variable name
void printSmartPhoneInfo(SmartPhone phone1){
    cout << "Phone Name: " << phone1.name << endl;
    cout << "Storage Space: " << phone1.storageSpace << endl;
    cout << "Color: " << phone1.color << endl;
    cout << "Price: " << phone1.price << endl;
}

//Print Information about a person
void printPersonInfo(Person boy){
    cout << "Name: " << boy.name << endl;
    cout << "Age: " << boy.age << endl;
    
    //Call in previous function to print Smartphone Information
    printSmartPhoneInfo(boy.smartphone);
}
