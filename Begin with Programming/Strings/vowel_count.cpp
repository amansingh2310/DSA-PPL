#include <iostream>
using namespace std;

int main() 
{
    char word[101] = "My name is Aman.";
    
    int v_count = 0;
    for(int i=0; word[i] != '\0'; i++) {
      if(word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U' || word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
        v_count++;
      }
    }
    cout<<v_count;
    
    return 0;
}