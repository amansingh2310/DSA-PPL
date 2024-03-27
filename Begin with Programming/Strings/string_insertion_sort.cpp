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
    
    
    
    cout<<word;
    
    return 0;
}