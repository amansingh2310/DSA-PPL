#include <iostream>
using namespace std;

int main() 
{
    char word[100] = "fsNHFOnlndFfS";
    
    // int w_len=0;
    // for(int i=0; word[i] != '\0'; i++) {
    //   w_len++;
    // }
    
    // cout<<w_len<<endl;
    
    for(int i=1; word[i] != '\0'; i++)  {
      for(int j=i; j>=0; j--) {
        if(word[j] < word[j-1]) {
          char temp = word[j];
          word[j] = word[j-1];
          word[j-1] = temp;
        }
      }
    }
    
    cout<<word;
    
    return 0;
}