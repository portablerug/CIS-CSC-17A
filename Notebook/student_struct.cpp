#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

//Function prototype

//Strucutres
struct Student{ //Student is the User defined Data type in this case as ti defines thes aspects of a student

    //members
    unsigned int id_num;
    string first_name, last_name;
    float GPA;
};

//Main
int main(void) {

    //Defining a Student structure variable 
    Student student1;

    //Using the structure members with "."
    student1.id_num = 123456;
    student1.first_name = "Jiang";
    student1.last_name = "Wu";
    student1.GPA = 3.8;

    cout << "ID: " << student1.id_num << endl;
    cout << "First Name: " << student1.first_name << endl;
    cout << "Last Name: " << student1.last_name << endl;
    cout << "GPA: " << student1.GPA << endl;

    //Exit
    return 0;
}