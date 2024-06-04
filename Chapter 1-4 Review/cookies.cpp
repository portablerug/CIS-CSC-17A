
/*
A cookie recipe calls for the following ingredients:
• 1.5 cups of sugar
• 1 cup of butter
• 2.75 cups of flour
The recipe produces 48 cookies with this amount of the ingredients. Write a program
that asks the user how many cookies he or she wants to make, and then displays the
number of cups of each ingredient needed for the specified number of cookies.
*/

//Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Const variables
const float SUGAR = 1.5;
const float BUTTER = 1;
const float FLOUR = 2.75;
 
int main() {
	//Initialize Variables
	int numCk = 0;	//Number of Cookies they want to make
	float sgrPrCk = 0;	//Sugar needed per cookie
	float btrPrCk = 0;	//Butter needed per bookie
	float flrPrCk = 0;	//Flour needed per cookie
	//Declare variables

	//Output
	cout << "How many cookies would you like to make?" << endl;
	cin >> numCk;

	//Map Outline
	sgrPrCk = (SUGAR * numCk) / 48;
	btrPrCk = (BUTTER * numCk) / 48;
	flrPrCk = (FLOUR * numCk) / 48;

	cout << "If you want to make " << numCk << " cookies, you will need the following ingredient: " << endl;
	cout << setprecision(2) << fixed << showpoint;
	cout << sgrPrCk << "cups of sugar." << endl;
	cout << btrPrCk << "cups of butter." << endl;
	cout << flrPrCk << "cups of flour." << endl;

	//Exit 
	return 0;
}
//End of File