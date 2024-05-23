/*
* Program to read student structure data from a test file to an array of students.
* Our program will for the file name to read the data from.
*
* notes for file I/O:
* 1. Create ifstream object (ifstream = input file stream)
* 2. Open the file for input
* 3. Read the data from the file (see notes on file format below)
* 4. Close the file.
*
* notes on file format:
* <first line will hold the integer value of the number of student items in the
array>
* <data for student #0>
* <data for student #1>
* ....
* <data for student #(size of array - 1)
*
*/
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
// our structures

struct PersonInfo {
    string first_name, last_name;
    string address, city, state;
    unsigned int zipcode;

    // member function
    void printPersonInfo() {
        cout << "Name: " << first_name + " " + last_name << endl;
        cout << "Address: " << address << endl;
        cout << " City: " << city << ", " << state << endl;
        cout << "Zipcode: " << zipcode << endl;
    }

    // member function  
    void inputInfo() {
        cout << "Enter first name: ";
        cin.ignore();
        getline(cin, first_name, '\n');
        cout << "Enter last name: ";
        getline(cin, last_name, '\n');
        cout << "Enter address: ";
        getline(cin, address, '\n');
        cout << "Enter city: ";
        getline(cin, city, '\n');
        cout << "Enter state: ";
        getline(cin, state, '\n');
        cout << "Enter zipcode: ";
        cin >> zipcode;
    }
};


struct Student {
    unsigned int id_number;
    PersonInfo personData;
    double gpa;
    
    // member function
    void inputInfo() {
        cout << "Enter id number: ";
        cin >> id_number;

        // call the member function from PersonInfo struct
        personData.inputInfo();
        cout << "Enter GPA: ";
        cin >> gpa;

        if ( gpa < 0 )
            gpa = 0;
        if ( gpa > 4 )
            gpa = 4;
    }

    // member function
    void printInfo() {
        cout << " ID: " << id_number << endl;
        personData.printPersonInfo();
        cout << " GPA: " << gpa << endl;
    }
};

int main (int argc, char** argv) {

    int number_of_students;
    // prompt the user for the input file name
    string filename;
    cout << "Enter name of the file for input: ";
    getline(cin, filename, '\n');
    // read the data from the file
    // #1 Create ifstream object
    ifstream input_file;
    // #2 Open the file for input
    input_file.open(filename);
    // #3 Read data from the file
    // if the file is open
    if ( input_file )   {
        // read the data
        input_file >> number_of_students; // read in number of students from file
        (file's first line)
        // declare array of students
        Student student_list[number_of_students];

        for(int index=0; index < number_of_students; index++) {
            input_file >> student_list[index].id_number;
            getline(input_file, student_list[index].personData.first_name, '\t');
            getline(input_file, student_list[index].personData.last_name, '\t');
            getline(input_file, student_list[index].personData.address, '\t');
            getline(input_file, student_list[index].personData.city, '\t');
            getline(input_file, student_list[index].personData.state, '\t');
            input_file >> student_list[index].personData.zipcode;
            input_file >> student_list[index].gpa;
        }
            // #4 Close the data file
        input_file.close();
        cout << "Read " << number_of_students << " student records from " <<
        filename << endl;
        cout << endl << "The data:" << endl;
        // for loop to output the student information
    
        for(int index = 0; index < number_of_students; index++ ) {
            // output the individual student information to screen
            student_list[index].printInfo();
            cout << endl;
        }
    } else {
    cout << "ERROR: Could not open " << filename << " for input." << endl;
    }   

    //Exit
    return 0;
}