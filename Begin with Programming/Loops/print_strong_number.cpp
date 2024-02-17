#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    if(n == 0) {
      cout<<"Not a strong number";
    }else {
        int sum=0, temp=n;
        while(n) {
        int p = n %10;
        int fact = 1, i = 1;
        while(i<=p) {
            fact *= i;
            i++;
        }
        sum += fact;
        n = n/10;
        }
        cout<<sum<<endl;
        
        if(sum == temp) {
        cout<<"Strong Number";
        }else {
        cout<<"Not a Strong Number";
        }
    }
    
    return 0;
}