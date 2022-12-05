//
//  Dogs.hpp
//   Program 5
//
//  Created by Nevin K on 12/5/22.
//

#ifndef Dogs_hpp
#define Dogs_hpp

#include <stdio.h>

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Dogs
{
    public:
        Dogs();
        void getLine(ifstream&);
        string getField(int);
        int getNumFields();

    private:
        vector<string> fields;
        int numFields;
};
#endif /* Dogs_hpp */
