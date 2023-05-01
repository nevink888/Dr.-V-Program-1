//  Nevin Kuruvilla 
//  StringSearch.cpp
//  P5: Concurrency
//
//  Created by Nevin K on 4/30/23.
//
#include "StringSearch.hpp"
#include <algorithm>
#include <thread>

using namespace std;

string StringSearch::bruteResult;
string StringSearch::boyerMooreResult;
string StringSearch::knuthMorrisPrattResult;

void StringSearch::bruteHelper(const string& text, const string& pattern) {
    size_t n = text.length();
    size_t m = pattern.length();
    for (size_t i = 0; i <= n - m; ++i) {
        size_t j = 0;
        while (j < m && text[i+j] == pattern[j]) {
            ++j;
        }
        if (j == m) {
            bruteResult = "Match found at position " + to_string(i);
            return;
        }
    }
    bruteResult = "Match not found";
}

string StringSearch::brute(const string& text, const string& pattern) {
    thread t(&StringSearch::bruteHelper, text, pattern);
    t.join();
    return bruteResult;
}

void StringSearch::boyerMooreHelper(const string& text, const string& pattern) {
    size_t n = text.length();
    size_t m = pattern.length();

    // Compute the Bad Character Shift array
    int shift[256];
    fill_n(shift, 256, -1);
    for (size_t i = 0; i < m; ++i) {
        shift[pattern[i]] = i;
    }

    // Search for pattern
    size_t i = 0;
    while (i <= n - m) {
        int j = m - 1;
        while (j >= 0 && pattern[j] == text[i+j]) {
            --j;
        }
        if (j < 0) {
            boyerMooreResult = "Match found at position " + to_string(i);
            return;
        }
        i += max(1, static_cast<int>(j - shift[text[i+j]]));
    }
    boyerMooreResult = "Match not found";
}

string StringSearch::boyerMoore(const string& text, const string& pattern) {
    thread t(&StringSearch::boyerMooreHelper, text, pattern);
    t.join();
    return boyerMooreResult;
}

void StringSearch::knuthMorrisPratt(const string& text, const string& pattern) {
    size_t n = text.length();
    size_t m = pattern.length();
    
    // Compute the Failure function
    int failure[m];
    failure[0] = -1;
}
