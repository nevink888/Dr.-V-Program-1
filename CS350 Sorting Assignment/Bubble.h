//
//  Bubble.h
//  CS350 Sorting Assignment
//
//  Created by Nevin K on 3/7/23.
//

#ifndef Bubble_h
#define Bubble_h
#include <iostream>
#include <chrono>
#include <ctime>
#include <algorithm>
#include "Heap.h"

const int SMALL_SIZE = 100;

using namespace std;

// Bubble sort function
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

// sort functions


#endif /* Bubble_h */
