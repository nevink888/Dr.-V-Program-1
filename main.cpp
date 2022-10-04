//  Nevin Kuruvilla
//  Program 1: A program that shows a population growth/decline using Functions.
//  Date: 9/19/22.
//

#include <iostream>
using namespace std;

int EstPopulation(double, double, int);
double GRate (double , double);
const int MinPopulation = 2;
 


 int main()
 {
     double BRate, DRate, PopGrowthRt;
     int Population, BegPop;

     cout << "The formula for population growth/decline is displayed as the following: ";
     cout << " P + ( B * P ) / 100 – ( D * P ) / 100/n" << endl;


     cout << " Enter the birth rate as a non-negative value " << endl;
     cin >> BRate;
     
     
     cout << " Enter the death rate as a non-negative value " << endl;
     cin >> DRate;
     
     
     cout << " The beginning population must be atleast " << MinPopulation << ". Enter the Beginning population, " << endl;
     cin >> BegPop;

     
     PopGrowthRt = GRate(BRate, DRate);
     cout << " The growth rate of the population is " << PopGrowthRt << endl;

     return 0;
 }


double GRate(double BRate, double DRate)
{
    return BRate - DRate;
    
}


int EstPopulation(double BRate, double DRate, int Population)
{
    int PopulationNew;
    PopulationNew = Population + (BRate * Population / 100)  - (DRate * Population) / 100;
    return PopulationNew;
}
