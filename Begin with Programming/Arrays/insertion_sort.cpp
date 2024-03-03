#include <iostream>
using namespace std;

int main() 
{
    int size;
    cin>>size;
    
    int arr[size];
    
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++) {
      cin>>arr[i];
    }
    
    int element;
    cin>>element;
    
    for(int i=0; i<size; i++) {
      if(element < arr[i]) {
        for(int j=n-1; j>=i; j--) {
          arr[j+1] = arr[j];
        }
        arr[i] = element;
        break;
      }
    }
    
    for(int i=0; i<size; i++) {
      cout<<arr[i]<<" ";
    }
    
    return 0;
}