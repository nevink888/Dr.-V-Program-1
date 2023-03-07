//  Nevin Kuruvilla
//  Dr. Vermilyer
//
//  Sorting assignment program to see the execution time of different sorting algorithms factored in with a large and small data sets.
//
//  Date: 03/05/2023

#include <iostream>
#include <chrono>
#include <ctime>
#include <algorithm>
#include "Heap.h"
#include "Bubble.h"

#define SIZE_SMALL 100

using namespace std;
void timeSystemSort(int theArray[])
{
    // Get start time
    auto start = chrono::steady_clock::now();

    // Sorting using system sort

    // Get end time
    auto end = chrono::steady_clock::now();

    // Calculate & print the amount of time taken
    cout << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << endl;
}


  


int main() {
    
    int small[SIZE_SMALL];
    
    timeSystemSort(small);
    
    const int SMALL_SIZE = 100;
    const int LARGE_SIZE = 100000;
    
    int smallArray[SMALL_SIZE];
    int largeArray[LARGE_SIZE];
    
    // Poulate small array with random integers
    for (int i = 0; i < SMALL_SIZE; i++) {
        smallArray[i] = rand() % SMALL_SIZE;
    }
    
    // Populate large array with random integers
    for (int i = 0; i < LARGE_SIZE; i++) {
        largeArray[i] = rand() % LARGE_SIZE;
    }
    
    // Measure bubble sort time on small array
    auto start = chrono::high_resolution_clock::now();
    bubbleSort(smallArray, SMALL_SIZE);
    auto end = chrono::high_resolution_clock::now();
    auto bubbleSmallTime = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    
    // Measure heap sort time on small array
    start = chrono::high_resolution_clock::now();
    heapSort(smallArray, SMALL_SIZE);
    end = chrono::high_resolution_clock::now();
    auto heapSmallTime = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    
    
    
    // Measure C++ sort time on small array
    start = chrono::high_resolution_clock::now();
    
    sort(smallArray, smallArray + SMALL_SIZE);
    end = chrono::high_resolution_clock::now();
    auto cppSmallTime = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    
    // Measure bubble sort time on large array
    start = chrono::high_resolution_clock::now();
    bubbleSort(largeArray, LARGE_SIZE);
    end = chrono::high_resolution_clock::now();
    auto bubbleLargeTime = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    
    // Measure heap sort time on large array
    start = chrono::high_resolution_clock::now();
    heapSort(largeArray, LARGE_SIZE);
    end = chrono::high_resolution_clock::now();
    auto heapLargeTime = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    
    // Measure system sort time on large array
    start = chrono::high_resolution_clock::now();
    sort (largeArray, largeArray + LARGE_SIZE);
    end = chrono::high_resolution_clock::now();
    auto cppLargeTime = chrono::duration_cast<chrono::nanoseconds>(end - start).count();

    
    
    cout << "Using system sort " << endl;
    cout << "Elapsed time in nanoseconds for 100 elements: " <<  cppSmallTime << " ns";
    cout << "Elapsed time in nanoseconds for 100,000 elements: " << cppLargeTime << " ns";
   
    
    
    cout << "Using bubble sort " << endl;
    cout << "Elapsed time in nanoseconds for 100 elements: " <<  bubbleSmallTime << " ns";
    cout << "Elapsed time in nanoseconds for 100,000 elements: " << bubbleLargeTime << " ns";
    
    
    cout << "Using heap sort " << endl;
    cout << "Elapsed time in nanoseconds for 100 elements: " <<  heapSmallTime << " ns";
    cout << "Elapsed time in nanoseconds for 100,000 elements: " << " ns";
   
    
    return 0;
    }
