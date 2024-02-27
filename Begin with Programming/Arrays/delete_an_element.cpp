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
    
    int index;
    cin>>index;
    
    for(int i=index+1; i<n; i++) {
      arr[i-1] = arr[i];
    }
    
    // different condition
    // for(int i=index; i<n; i++) {
    //   arr[i] = arr[i+1];
    // }
    
    for(int i=0; i<size; i++) {
      cout<<arr[i]<<" ";
    }
    
    return 0;
}