#include <iostream>
#include <cstdlib>

using namespace std;

//Function Prototype
void printAddress(void*);

int main() {

    int vals[] = {23, 15, 6, 3, 23};

    cout << "Address of vals: ";
    printAddress(vals);
    cout << endl;    //Address of this array is 0x7ffef5ec2360
    cout << "Size of vals: " << sizeof(vals) << endl; //Size of float data type is 20 Bytes
    
    cout << "Address of val[0]: "; printAddress(&vals[0]); cout << endl; //Address of first element is 0x7ffef5ec2360
    
    //Exit
    return 0;
}

void printAddress(void* address){
    //Void is a 64 bit type. 

    cout << address << " decimal: " << (long int)address << endl;
}