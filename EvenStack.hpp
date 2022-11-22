//
//  EvenStack.hpp
//  Dr. V - Program 4
//
//  Created by Nevin K on 11/21/22.
//

#ifndef EvenStack_hpp
#define EvenStack_hpp

#include <stdio.h>
#include <string>
using namespace std;


class EvenStack {
public:
    EvenStack(int);
    
    string getEvenNums();
    void setEvenNums(int);
    void emptyStack();
    
private:
    int m_EvenNums;
    int m_numbers;
    
};
#endif /* EvenStack_hpp */
