#include <iostream>
using namespace std;

int main() 
{
    char word[101] = "My name is Aman.";
    char vowel[101] = "AEIOUaeiou";
    int v_count = 0;
    
    for(int i=0; word[i] != '\0'; i++) {
      for(int j=0; vowel[j] != '\0'; j++) {
        if(word[i] == vowel[j]) {
          v_count++;
        }
      }
    }
    
    // for(int i=0; word[i] != '\0'; i++) {
    //   if(word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U' || word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
    //     v_count++;
    //   }
    // }
    
    cout<<v_count;
    
    return 0;
}