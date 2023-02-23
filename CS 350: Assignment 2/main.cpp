#include <iostream>
#include <fstream>
#include <sstream>

#include "WordTree.h"

using namespace std;

int main() {
    int lineNumber = 1;
      fstream file;
      string line, word, filename;
      filename = "test.txt";
      file.open(filename.c_str());

    WordTree tree;


    if (!file) {
        cerr << "Error: Could not open file " << filename << endl;
        return 1;
    }

    int line_number = 1;

    while (getline(file, line)) {
        istringstream iss(line);

        while (iss >> word) {
            WordTree::normalize_word(word);
            tree.insert_word(word, line_number);
        }

        line_number++;
    }

    file.close();

    tree.print_words();

    return 0;
}

