//  Nevin Kuruvilla
//  Dr. Vermilyer
//
//  Program 5: Hashing Tables
//  Date: 12/4/2022


#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class Dogs{
    
public:
    int Tot_numDogs;
    
    // 2nd class member is the dog data file .txt provided.
};

int main() {
    
    Dogs myDogs;
    int numDogs = 0;
    
    
    fstream myFile;
    myFile.open("Dogs.txt",ios::in);   // Reading from the dogs.txt file
    if (myFile.is_open()) {
        string line;
        while (getline(myFile, line)) {
            cout << line << endl;
        }
        myFile.close();
    }
    
    // while (!file.eof())
    
    return 0;
}
