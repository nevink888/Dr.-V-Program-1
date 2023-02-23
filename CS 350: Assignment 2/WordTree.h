#ifndef WordTree_h
#define WordTree_h

#include <string>
#include <fstream>
#include <iostream>
#include <unordered_map>
#include "WordNode.h"
using namespace std;

class WordTree {
public:
    void insert_word(const string& word, int line_number);
    void print_words() const;

public:
    unordered_map<string, WordNode> tree;
    static void normalize_word(string& word);
};

#endif

