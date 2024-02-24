#include <iostream>
using namespace std;
int main() {
    int t, n;
    cin>>t;
    for(int i=1; i<=t; i++) {
      cin>>n;
      long long A[n];
      int sum = 0;
      for(int j=1; j<=n; j++) {
        cin>>A[j];
        int count = 0;
        if(A[j] == 0) {
            count++;
        }else {
            while(A[j]) {
          count++;
          A[j] /= 10;
            }
        }
        sum = sum + count;
      }
      
      int p_count=0;
      for(int k=2; k<sum; k++) {
        if(sum % k == 0) {
          p_count++;
        }
      }
      if(p_count == 0) {
        cout<<"Yes"<<endl;
      }else {
        cout<<"No"<<endl;
      }
    }
    // your code goes here
    return 0;
}