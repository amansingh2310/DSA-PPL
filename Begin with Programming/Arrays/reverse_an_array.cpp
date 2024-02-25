#include <iostream>
using namespace std;

int main() 
{
    int n, A[n];
    cin>>n;
    
    for(int i=0; i<n; i++) {
      cin>>A[i];
    }
    
    // condition -> (i<=j) will also work
    for(int i=0,j=n-1; i<n/2; i++, j--){
      int temp = A[i];
      A[i] = A[j];
      A[j] = temp;  
    }
    
    for(int i=0; i<n; i++) {
      cout<<A[i]<<" ";
    }
    
    return 0;
}