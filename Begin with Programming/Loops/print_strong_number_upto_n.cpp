#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    
    int k = 1;
    while(k <= n) {
      int temp = k;
      
      int sum=0, temp2=temp;
      while(temp) {
      int p = temp %10;
      int fact = 1, i = 1;
      while(i<=p) {
          fact *= i;
          i++;
      }
      sum += fact;
      temp = temp/10;
      }
      if(sum == temp2) {
        cout<<sum<<" ";
      }
      k++;
    }
    return 0;
}