#include <iostream>
#include "wordCount.h"
#include <string>

int SIZE = 100;

int main()
{
    string name;
    char input[SIZE];
    cout << "What is your name?" << endl;
    cin >> name;
    cin.getline(input, SIZE);
    cout << "Hello " << name << "!" << endl;
    cout << "Word count: " << wordCount(input);
    return 0;
}

