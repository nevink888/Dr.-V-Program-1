//  Nevin Kuruvilla
//  Dr. Vermilyer 
//  P5: Concurrency
//
//  4/30/2023

#include <iostream>
#include <thread>
#include "StringSearch.hpp"

using namespace std;

int main()
{
    thread t1( &StringSearch::brute, "Hello world!", "world" );
    thread t2( &StringSearch::boyerMoore, "Hello world!", "foo" );
    thread t3( &StringSearch::knuthMorrisPratt, "Hello world!", "!" );

    t1.join();
    t2.join();
    t3.join();

    cout << "Brute Force Algorithm (Hello world!, world) :  " << StringSearch::bruteResult << endl;
    cout << "Boyer Moore Algorithm (Hello world!, foo) :  " << StringSearch::boyerMooreResult << endl;
    cout << "Knuth, Morris, Pratt Algorithm (Hello world!, !) :  " << StringSearch::knuthMorrisPrattResult << endl;

    return 0;
}
