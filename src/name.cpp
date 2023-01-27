#include <string>
#include <iostream>
#include "name.hpp"

using namespace std;

string getNameFromUser() {
    cout << "Please enter your name: ";
    string name;
    cin >> name;
    return name;
}