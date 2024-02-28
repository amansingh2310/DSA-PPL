#include <iostream>
#include <climits>
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
        // for finding min element in (i...N-1) & swap it with arr[i]
      int min = INT_MAX, idx;
      for(int j=i; j<size; j++) {
        if(arr[j]<min) {
          min = arr[j];
          idx = j;
        }
      }
      int temp = arr[i];
      arr[i] = arr[idx];
      arr[idx] = temp;
    }
    
    for(int i=0; i<size; i++) {
      cout<<arr[i]<<" ";
    }
    
    return 0;
}