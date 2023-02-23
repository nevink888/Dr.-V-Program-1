#ifndef WordNode_h
#define WordNode_h

#include <string>
#include <vector>

using namespace std;

class WordNode {
public:
    string word;                    // The word taken from the file
    vector<int> line_numbers;       // Line numbers where the word appears
    int count;                      // Number of times the word appears

    WordNode(const string& word, int line_number);
    void add_line_number(int line_number);
    
    
protected:
    
private:
    
};

#endif

