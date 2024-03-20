#include <iostream>
#include <cstdlib>

using namespace std;

//Function Prototype
void printAddress(void*);
void accessingArray(int[], int*, int);

int main() {

    int vals[] = {23, 15, 6, 3, 23};

    cout << "Address of vals: ";
    printAddress(vals);
    cout << endl;    //Address of this array is 0x7ffef5ec2360
    cout << "Size of vals: " << sizeof(vals) << endl; //Size of float data type is 20 Bytes
    
    cout << "Address of val[0]: "; printAddress(&vals[0]); cout << endl; //Address of first element is 0x7ffef5ec2360
    

    //Finding the SIZE of an array
    int numElms = sizeof(vals) / sizeof(int);
    cout << "The number of elements in the array is: " << numElms << endl;
    
    //Accessing Arrays
    //Create a pointer
    int *vals_ptr = vals;
    accessingArray(vals, vals_ptr, numElms);

    //Exit
    return 0;
}

void printAddress(void* address){
    //Void is a 64 bit type. 

    cout << address << " decimal: " << (long int)address << endl;
}

void accessingArray(int arr[], int *ptr,int subnum){

    for(int index = 0; index < subnum; index++){

        //array name and []
        cout<< "vals[" << index << "] = " << arr[index] << endl;

        //ptr to array and []
        cout << "vals_ptr[" << index << "] = " << ptr[index] << endl;

        //array name and subscript via ptr arithmetic
        cout << "*(vals + " << index << ") = " << *(arr + index) << endl;

        //ptr to array and subscript via ptr arithmetic
        cout << "*(vals_ptr + " << index << ") = " << *(ptr + index) << endl;
    }
}