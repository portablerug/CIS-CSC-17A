
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

//Structres
struct WeatherStats{
    double Ttl_rnfl;
    double Ttl_snwfl;
    double Hi_temp;
    double Lw_temp;
    double Avg_temp;
};

//Function Prototypes

//Size of Array
const int MONTHS = 12;

int main(){
    //Declare Variables
    WeatherStats month[MONTHS];  //Variable for Weather stats

    //Initialize Varaibles
    double totalrainfall = 0;
    double totalsnowfall = 0;
    double hightemp = 0;
    double lowtemp = 0;
    double avgtemp = 0;

    //Initialize Varaibles
    for (int i = 0; i< MONTHS; i++){
        cout << "Enter data for month " << i+1 << endl;

        do{
        //Rainfall
        cout << "Total Rainfall (in inches): ";
        cin >> month[i].Ttl_rnfl;
        totalrainfall += month[i].Ttl_rnfl;
        }while (month[i].Ttl_rnfl <= 0);

        do{
        //Snowfall
        cout << "Total Snowfall: ";
        cin >> month[i].Ttl_snwfl;
        totalsnowfall += month[i].Ttl_snwfl;
        }while (month[i].Ttl_snwfl <= 0);


        //High Temperature with User validation
        do{
              //High Temperature
            cout << "High Temperature: ";
            cin >> month[i].Hi_temp;
        }while (month[i].Hi_temp < -150 || month[i].Lw_temp> 150);
       

        //Low Temperature with User validation
        do{
            cout << "Low Temperature: ";
            cin >> month[i].Lw_temp;
            cout << endl;
        }while(month[i].Hi_temp < -150 || month[i].Lw_temp> 150);

        //Average Temp
        month[i].Avg_temp = (month[i].Hi_temp + month[i].Lw_temp) / 2.0;
    }

    double sumAvgTemp = 0;

    //Display output
    cout << "Average monthly rainfall: " << totalrainfall / 12.0 << " inches" << endl;
    cout << "Total rainfall for the year: " << totalrainfall << " inches" << endl;
    cout << "Average monthly snowfall: " << totalsnowfall / 12.0 << " inches" << endl;
    cout << "Total snowfall for the year: " << totalsnowfall << " inches" << endl;
    cout << "Highest temperature for the year: " << hightemp << " Fahrenheit" << endl;
    cout << "Lowest temperature for the year: " << lowtemp << " Fahrenheit" << endl;

    // Display average of all the monthly average temperatures
    cout << "Average of all monthly average temperatures: " << sumAvgTemp / 12.0 << " Fahrenheit" << endl;


    
    //Exit
    return 0;
}