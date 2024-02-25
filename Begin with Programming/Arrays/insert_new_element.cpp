#include <iostream>
using namespace std;

int main() 
{
    int size, n;
    cin>>size>>n;
    int arr[size];
    
    int pos, element;
    cin>>pos>>element;
    
    for(int i=0; i<n; i++) {
      cin>>arr[i];
    }
    
    for(int i=n-1; i>=pos; i--) {
      arr[i+1] = arr[i];
    }
    arr[pos] = element;

    for(int i=0; i<size-1; i++) {
      cout<<arr[i]<<" ";
    }
    
    return 0;
}