#include <iostream>
using namespace std;

int main() 
{
    char word[100] = "fsNHFOnlndFf";
    
    int w_len=0;
    for(int i=0; word[i] != '\0'; i++) {
      w_len++;
    }
    
    // cout<<w_len<<endl;
    
    for(int j=0; j<w_len-1; j++) {
      for(int i=0; i<w_len-j-1; i++) {
        if(word[i] > word[i+1]) {
          char temp = word[i];
          word[i] = word[i+1];
          word[i+1] = temp;
        }
      }
    }
    
    cout<<word;
    
    return 0;
}