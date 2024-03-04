#include <iostream>
using namespace std;

int main() 
{
    int m, n;
    cin>>m>>n;
    
    int arr[m][n];
    
    for(int i=0; i<m; i++) {
      for(int j=0; j<n; j++) {
        cin>>arr[i][j];
      }
    }
    
    int sum = 0;
    for(int i=0; i<m; i++) {
      for(int j=0; j<n; j++) {
        if(i==j || i+j == n-1) {
          sum += arr[i][j];
        }
      }
    }
    
    cout<<sum;
    
    return 0;
}