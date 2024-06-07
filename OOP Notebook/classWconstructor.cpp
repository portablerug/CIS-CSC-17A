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

    //Creating constructor of Class Employee
    //It job will be to construct the objects of [class] Employee
    //Pass values decalred in main function, into the Employee Constructor
    Employee(string name, string company, int age){
        //Assigning to the three properties above (Declaring the variables to be passed)
        Name = name;
        Company = company;
        Age = age;
    }

};

int main(){
    //Decalre variable
  
    //Using user defined variable
    //employee1 is the object of the class Employee
    Employee employee1 = Employee("Miguel", "Microsoft", 20); //Construtor is called and its arguments passed in are the values set to the variables.
    /*cout << "Employee 1:";
    employee1.Name = "Miguel ";
    employee1.Company = "Microsoft";
    employee1.Age = 20;*/
    cout << endl;
    //Copy function as many times you want to introduce yourself (Function allows for repetition)
    employee1.Introduction();


    //Creating another employee profile
    //This allows to reduce number of lines in our main function, First line Constructs the Object, Second line introduces the employee
    Employee employee2 = Employee("Andrea", "Googel", 19); //Constructor passed in and arguments are set to variables
    cout << endl;
    employee2.Introduction();

    //Exit
    return 0;
}