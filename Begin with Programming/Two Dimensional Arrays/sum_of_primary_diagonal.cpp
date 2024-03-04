#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    
    int arr[n][n];
    
    for(int i=0; i<n; i++) {
      for(int j=0; j<n; j++) {
        cin>>arr[i][j];
      }
    }
    
    int sum = 0;
    
    int i=0, j=0;
    while(i<n) {
      sum += arr[i++][j++];
    }
    
    // for(int i=0; i<n; i++) {
    //   sum += arr[i][i];
    // }
    
    cout<<sum;
    
    return 0;
}