#include <iostream> 
#include <string> 
  
using namespace std; 
  
// Definingstructure 
struct Student { 
    string name; 
    int grades[5]; // Array to store grades for 5 subjects 
}; 
  
int main() 
{ 
    // Creating an instance of Student 
    Student student1; 
  
    // Initializing the student's name 
    student1.name = "Jack"; 
  
    // Initializing the student's grades 
    student1.grades[0] = 85; 
    student1.grades[1] = 92; 
    student1.grades[2] = 76; 
    student1.grades[3] = 81; 
    student1.grades[4] = 90; 
  
    // Output the student's information 
    cout << "Student Name: " << student1.name << endl; 
    cout << "Grades: "; 
    for (int i = 0; i < 5; ++i) {
        cout << student1.grades[i] << " ";
    }
    cout << endl;
  
    return 0; 
}