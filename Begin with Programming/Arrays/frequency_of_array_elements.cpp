#include <iostream>
using namespace std;

int main() 
{
    int size;
    cin>>size;
    
    int arr[size];
    
    for(int i=0; i<size; i++) {
      cin>>arr[i];
    }
    
    for(int i=0; i<size; i++) {
      int count = 0;
      for(int j=0; j<size; j++) {
        if(arr[i] == arr[j]) {
          count++;
        }
      }
      cout<<"Frequency of "<<arr[i]<<" = "<<count<<endl;
    }
  
    return 0;
}