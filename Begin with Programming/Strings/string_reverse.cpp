#include <iostream>
using namespace std;

int main() 
{
    char word[101] = "My name is Aman.";
    
    int c_word = 0;
    for(int i=0; word[i] != '\0'; i++) {
      c_word++;
    }
    
    for(int i=c_word-1; i>=0; i-- ) {
      cout<<word[i];
    }
    
    return 0;
}