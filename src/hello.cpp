#include <iostream>
#include "name.hpp"
#include <string>

using namespace std;

int main() {
    string name = getNameFromUser();
    cout << "Hello " << name << "!" << endl;
    
}