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
    
    int x;
    cin>>x;
    
    for(int i=0; i<size; i++) {
      for(int j=i+1; j<size; j++) {
        if(arr[i] + arr[j] == x) {
          cout<<arr[i]<<" + "<<arr[j]<<" = "<<x<<endl;
        }
      }
    }
    return 0;
}