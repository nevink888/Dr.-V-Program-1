//
//  Dogs.cpp
//   Program 5
//
//  Created by Nevin K on 12/5/22.
//

#include "Dogs.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

Dogs::Dogs()
{
    numFields = 0;
}

void Dogs::getLine(ifstream& fin)
{
    string line, field;
    getline(fin, line);

    stringstream str(line);
    fields.clear();
    numFields =0;
    while (getline(str,field,',') ) {
        numFields++;
        fields.push_back(field);
    }
}

int Dogs::getNumFields()
{
    return numFields;
}

string Dogs::getField(int i)
{
    return fields[i];
}
