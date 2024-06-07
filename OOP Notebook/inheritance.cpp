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
    string Company; 
    int Age;
//Setting members to a protected allows them to be accesssed by derived classes (Developer)
protected: 
    string Name;    //Moved from private

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

//Making this class inherit from class above
//addign ":Employee" allows for Developer class to have all properties of Employee
class Developer: public Employee{
    //Making specific properties for Developer
public: 
    string favLanguage; //favorite programming langauge

    //Create constructor for Developer class (has to be public, same name as class, and )
    Developer(string name, string company, int age, string Programminglangauge)
            :Employee(name, company, age) //Pass to Employee Constructor with ":"
    {
        favLanguage = Programminglangauge;
    }
    //New method about Developer
    void fixBug(){
        cout<< Name << " fixed bug using " << favLanguage << endl;
    }
};

class Teacher: public Employee{
public: 
    string subject; 
    void PrepareLesson(){
        cout << Name <<" is preparing a " << subject << " lesson" << endl;
    }
    //Constructor
    Teacher(string name, string company, int age, string teachSubject)
            :Employee(name, company, age){
                subject = teachSubject;
    }
};

int main(){

    //Creating Object of Class Developer
    Developer dev1=Developer("John", "Elite Mind", 24, "Python") ;
    Teacher teach1 = Teacher("Leah", "Novi", 28, "Calculus");
    teach1.PrepareLesson();
    teach1.AskForPromotion();
    //Exit
    return 0;
}

