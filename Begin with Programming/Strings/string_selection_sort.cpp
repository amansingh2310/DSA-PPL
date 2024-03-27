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
    
    for(int i=0; i<w_len; i++) {
      int min_value = 300, min_index = -1;
      for(int j=i; j<w_len; j++) {
        if(word[j] < min_value) {
          min_value = word[j];
          min_index = j;
        }
      }
      char temp = word[i];
      word[i] = word[min_index];
      word[min_index] = temp;
    }
    
    cout<<word;
    
    return 0;
}