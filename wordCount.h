#include <iostream>
using namespace std;

int wordCount(char *str) {
  int numWords = 0;

  while(*str) {
    if (*str == ' ') {
        numWords++;
    }
    str++;
  }
return numWords + 1;
}
