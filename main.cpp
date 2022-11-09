//  Nevin Kuruvilla
//  Dr. Vermilyer

//  Program 3: A program to determine what percentage of the U.S.'s land area will be needed to be devoted to solar panels to achieve the goal of meeting the energy consumption of the entire country, which is 97.78 quadrillion BTUs.
//  Date: 11/6/2022



#include <iostream>
#include <list>
#include <string>

using namespace std;


class State{
public:
    string name;
    State* Next;
    long int Energy_consumed;
    long int State_size;
};


void printList(State*n){                //Function to print names of states.
    while (n!=NULL) {
        cout << n->name << endl;
        n = n->Next;
    }
}



int main()
{
    State* head = new State();
    State* second = new State();
    State* third = new State();
    State* fourth = new State();
    State* fifth = new State();
    State* sixth = new State();
    State* seventh = new State();
    State* eighth = new State();
    State* ninth = new State();
    State* tenth = new State();

    head->name = "Texas";
    head->Next = second;
    second->name = "California";
    second->Next = third;
    third->name = "Louisiana";
    third->Next = fourth;
    fourth->name = "Florida";
    fourth->Next =fifth;
    fifth->name ="Illionis";
    fifth->Next =sixth;
    sixth->name = "Penn";
    sixth->Next = seventh;
    seventh->name ="Ohio";
    seventh->Next = eighth;
    eighth->name = "New York";
    eighth->Next = ninth;
    ninth->name = "Georgia";
    ninth->Next = tenth;
    tenth->name = "Michigan";
    tenth->Next = NULL;
    
    printList(head); //Fuction call to print List
    
    long int energyConsumpUS = 97780000000000000;
    long int SolarPanEff = 51;
    long int SolarPansize = 18;
    long int NumPanelsNeeded;
    long int SolPanArea;
    long int Land_AreaSqft = 103646092492800;
    
    
    cout << " A single, modern solar panel provides us with " << SolarPanEff << " BTUs of energy. So we get total amount of panels needed by taking net US energy consumption and dividing it by 51." << endl;
    
    (energyConsumpUS/SolarPanEff) == NumPanelsNeeded;
    
    cout << " The total Solar panels needed multiplied by 18 will give the total area the solar panels take up.";
    cout << endl;
    
    (18 * NumPanelsNeeded) == SolPanArea;
    
    cout << " The percentage of the U.S.'s land area that will need to be devoted to solar panels to achieve the stated goal is the following: ";
    cout << (SolPanArea/Land_AreaSqft);
    
    return 0;
}

