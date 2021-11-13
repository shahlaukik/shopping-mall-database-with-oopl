#include "main.hpp"
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // loading Database
    
    vector<recognisedPerson> recognisedPersons;
    char choice;
    cout << "Choices" << endl;
    cin >> choice;
    switch (choice)
    {
    case '1':
        optionPerson(recognisedPersons);
        break;
    }
    return 0;

    //store
}

