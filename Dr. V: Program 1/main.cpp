//
//  main.cpp
//  Dr. V: Program 1: Functions on populations
//
//  Created by Nevin K on 9/19/22.
//

#include <iostream>
using namespace std;
int main()
{
    char deathrate = 'D';
    char BegPopulation = 'P';
    char birthrate = 'B';
    
    cout << "The formula for population growth/decline is displayed as the following: ";
    cout << " P + ( B * P ) / 100 – ( D * P ) / 100/n" << endl; 
    
    
    
    
    cout << " Enter the deathrate, beginnning population and the birth rate all as non-neg values " << endl;
    cin >> deathrate;
    cin >> BegPopulation;
    cin >> birthrate;
    
    cout << deathrate + (birthrate * BegPopulation)/ 100 - (deathrate * BegPopulation)/ 100 << endl;
    
    return 0;
}

