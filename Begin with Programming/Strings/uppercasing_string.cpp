#include <iostream>
using namespace std;

int main() 
{
    char word[100] = "AabbCcDDEf";
    
    for(int i=0; word[i] != '\0'; i++) {
      if(word[i] >= 97 && word[i] <= 122) {
        word[i] -= 32;
      }
    }
    
    cout<<word;
    return 0;
}