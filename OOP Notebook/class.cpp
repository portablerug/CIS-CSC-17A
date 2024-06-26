#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Classes (represent blueprint or model for (employee))
//Everything in class by default is private by DEFAULT (members are not accessable)
//Use Access Modifiers (public <can use ouside of the class>, private <not accessable outside of the class and is hidden> ,protected <in between public and private>)
class Employee{
//Access modifier, Setting to public lets us see and use the properties
public:
    //Members are attributes and behaviors
    string Name;
    string Company; 
    int Age;

    //Class method allows for object to be described using a function
    void Introduction(){
        cout<< "Name: "<< Name << endl;
        cout<< "Company: "<< Company << endl;
        cout<< "Age: " << Age << endl;
    }

};

int main(){
    //Decalre variable
  
    //Using user defined variable
    //employee1 is the object of the class Employee
    Employee employee1;
    cout << "Employee 1:";
    employee1.Name = "Miguel ";
    employee1.Company = "Microsoft";
    employee1.Age = 20;
    cout << endl;

    //Copy function as many times you want to introduce yourself (Function allows for repetition)
    employee1.Introduction();

    //Creating another employee profile
    Employee employee2;
    employee2.Name = "Andrea";
    employee2.Company = "Google";
    employee2.Age = 19; 
    cout<< endl;

    //Calling introduction for second employee
    employee2.Introduction();

    //Exit
    return 0;
}