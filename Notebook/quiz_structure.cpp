#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

//Structures
struct QuizQuestions{
    string question;    
    string choice[3];
};

//Function Prototype
void printQuiz(QuizQuestions fnqstn);

int main(){
    //Declare & Initialize
    QuizQuestions ch1 ,ch2, ch3;

    //Question 1
    ch1.question = "What is the largest country?";
    ch1.choice[0] = "USA";
    ch1.choice[1] = "India"; 
    ch1.choice[2] = "Germany";
    ch1.choice[3] = "France";

    //Question 2
    ch2.qiestom = "What is the largest organ on the human body?";
    ch2.choice[0] = "Skin";
    ch2.choice[1] = "Heart"; 
    ch2.choice[2] = "Brain";
    ch2.choice[3] = "Nose";

    //Question 3
    ch3.question = "Which one of these do NOT make up an atom?";
    ch3.choice[0] = "Electron";
    ch3.choice[1] = "Ion";  
    ch3.choice[2] = "Proton";
    ch3.choice[3] = "Neutron";

    
    //Display
    cout<< "Testing out the code" << endl;
    cout << "Follows the function" << endl;
    printQuiz(qstn1);
    printQuiz(qstn2);
    printQuiz(qstn3);

    //Exit
    return 0;
}

void printQuiz(QuizQuestions fnqstn){
    cout << fnqstn.question << endl;
    cout << fnqstn.choice << endl;
}
