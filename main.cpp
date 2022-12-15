//  Nevin Kuruvilla
//  Dr. Vermilyer
//  Program 6 - Recursion
//
//  A recursive algorithm that allows a user to enter a string consisting solely of letters and determines if it is a palindrome.
//  Date: December 14, 2022


#include <iostream>
#include <string>

using namespace std;


int FirstPosition(string str, int start, int end)
{
   long int first_char = -1;
 
    for (int i = start; i <= end; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            first_char = i;
            break;
        }
    }
    return first_char;
}
 

int LastPosition(string str, int start, int end)
{
    int Lastchar = -1;
 
   
    for (int i = start; i >= end; i--) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            Lastchar = i;
            break;
        }
    }
    return Lastchar;
}
 

bool isPalindrome(string str)
{
   long int first_char = 0, Lastchar = str.length() -1;
    bool ch = true;
 
    for (int i = 0; i < str.length(); i++) {
        first_char = FirstPosition(str, first_char, Lastchar);
        Lastchar = LastPosition(str, Lastchar, first_char);
 
        // break, when all letters are checked
        if (Lastchar < 0 || first_char < 0)
            break;
        if (str[first_char] == str[Lastchar]) {
            first_char++;
            Lastchar--;
            continue;
        }
 
        ch = false;
        break;
    }
 
    return (ch);
}
 

int main()
{

    cout << " Change the value within string str below to determine if a certain word, phrase, or expresssion is a palindrome. Enter as individual characters." << endl;
    cout << endl;

    string str = "A M A N A P L A N A C A N A L P A N A M A";
    
    if (isPalindrome(str))
        cout << "Yes, the word you entered is a palindrome";
    else
        cout << "No, the word you entered is not a palindrome";
 
    return 0;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
