#include <iostream>
using namespace std;

int main() 
{
    char sen1[100] = "Read inputs from stdin";
    char sen2[100];
    
    int i;
    for(i=0; sen1[i] != '\0'; i++) {
      sen2[i] = sen1[i]; 
    }
    sen2[i] = '\0';
    
    cout<<sen2;
    
    return 0;
}