
// 1 add window// remove
// display



// 1. add - setter class window
// 2. remove - id input, match with vector list, removdelete
// 3. display - display all
#include "../include/recognisedPerson.hpp"
#include <vector>
#include <iostream>
using namespace std;

void optionPerson(vector<recognisedPerson>& recognisedPersons) {
    cout << "Choices: 1. add 2. Remove 3. delete" << endl;
    recognisedPerson newPerson;
    newPerson.setDetails();
    recognisedPersons.push_back(newPerson);
    
}