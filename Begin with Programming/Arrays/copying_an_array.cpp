#include <iostream>
using namespace std;

int main() 
{
    int n, A[n], B[n];
    cin>>n;
    
    for(int i=0; i<n; i++) {
      cin>>A[i];
      B[i] = A[i];
    }
    
    for(int i=0; i<n; i++){
      cout<<B[i]<<" ";
    }
    
    return 0;
}