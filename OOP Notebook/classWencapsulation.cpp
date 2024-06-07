#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Idea of Encapsulation is to make the "private" propreties hidden and can only be accessed through the methods of get and set.

//Classes 
class Employee{
//Access modifier, Setting to public lets us see and use the properties
//Ecapsulating these three properties
private: 
    //Members are attributes and behaviors
    //Will not be able to access these properties outside of our class now that they are private (encapusalted)
    string Name;
    string Company; 
    int Age;

public:
    //Setter method (recieves one parameter, name)
    void setName(string name){
        //Sets encapusalted value Name to the setter value
        Name = name;
    }
    //Getter method
    string getName(){
        //Returns the Name property to whoever envokes this [getter] method
        return Name;
    }

    void setComany(string company){
        Company = company;    
    }
    string getCompany(){
        return Company;
    }

    void setAge(int age){
        //Adding  validation Rule (checking if age is > 18 in order to work for the company)
        //If condition is not met, seter function will not run
        if(age >= 18){
            Age = age;
        }
    }
    int getAge(){
        return Age;
    }

    //Class method allows for object to be described using a function
    void Introduction(){
        cout<< "Name: "<< Name << endl;
        cout<< "Company: "<< Company << endl;
        cout<< "Age: " << Age << endl;
    }
    //Creating constructor of Class Employee
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
    Employee employee1 = Employee("Miguel", "Microsoft", 20); //Construtor is called and its arguments passed in are the values set to the variables.
    cout << endl;
    employee1.Introduction();


    //Creating another employee profile
    Employee employee2 = Employee("Andrea", "Googel", 19); //Constructor passed in
    cout << endl;
    employee2.Introduction();

    //Testing Getter and Setter functions
    employee1.setAge(17); //Age is less than 18 so it age will not be set.
    cout<< employee1.getName() << " is " << employee1.getAge() << " years old" << endl;

    //Exit
    return 0;
}