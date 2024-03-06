#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    
    char word[n+1] = "Aman's gaming name is Ninja";
    // cin>>word;
    cout<<word<<endl;
    
    int count_word = 0;
    for(int i=0; word[i] !='\0'; i++) {
      count_word++;
    }
    cout<<count_word;
    
    return 0;
}