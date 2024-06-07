#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Idea of Encapsulation is to make the "private" propreties hidden and can only be accessed through the methods of get and set.

//Classes 
//In this scenerio, the employee wants a payraise and this class will act as their contract
class AbstractEmployee{
    //Will make it obligatory to implement this "contract"
    virtual void AskForPromotion() = 0;
};


//Allowing for employee to "sign" contract
class Employee:AbstractEmployee {
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

    //Implemnting the "promotion"
    virtual void AskForPromotion(){
        if(Age > 30){
            cout<< Name << " got promoted!" << endl;
        }else{
            cout<< Name << " sorry, no promotion." << endl;
        }
    }
};

int main(){
    //Decalre variable
  
    //Using user defined variable
    Employee employee1 = Employee("Miguel", "Microsoft", 20); //Construtor is called and its arguments passed in are the values set to the variables.
    cout << endl;
    //Creating another employee profile
    Employee employee2 = Employee("Andrea", "Google", 19); //Constructor passed in

    employee1.AskForPromotion();
    employee2.AskForPromotion();

    //Exit
    return 0;
}