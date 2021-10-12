#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "What is your name?" << std::endl;
    std::cin >> name;
    std::cout << "Hello " << name << "!" << std::endl;

    return 0;
}


/*
 *
 * #include <iostream>
#include "c-count.h"
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
*/
