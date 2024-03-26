#include <iostream>
using namespace std;

int main() 
{
    char word[100] = "C++ Online Complier Aman5";
    
    int word_len = 0;
    for(int i=0; word[i] != '\0'; i++) {
      word_len++;
    }
    // cout<<word_len<<endl;
    
    // for(int i=word_len-1; i>=0 ; i--) {
    //   cout<<word[i];
    // }
    
    int i=0, j=word_len-1;
    while(i<j) {
      char temp = word[i];
      word[i] = word[j];
      word[j] = temp;
      
      i++;
      j--;
    }
    
    cout<<word;
    return 0;
}