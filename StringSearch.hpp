//
//  StringSearch.hpp
//  P5: Concurrency
//
//  Created by Nevin K on 4/30/23.
//

#include <stdio.h>

#ifndef STRINGSEARCH_H
#define STRINGSEARCH_H
#include <string>
#include <thread>
using namespace std;

class StringSearch {
public:
    static string brute(const string& text, const string& pattern);
    static string boyerMoore(const string& text, const string& pattern);
    static string knuthMorrisPratt(const string& text, const string& pattern);

    static string bruteResult;
    static string boyerMooreResult;
    static string knuthMorrisPrattResult;

private:
    static void bruteHelper(const string& text, const string& pattern);
    static void boyerMooreHelper(const string& text, const string& pattern);
    static void knuthMorrisPratt(const string& text, const string& pattern);
};


#endif /* StringSearch_hpp */
