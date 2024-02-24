#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int unit;
    cin>>unit;
    
    float bill = 0, final_bill = 0;
    
    if(unit>250) {
      bill = (50*0.5) + (100*0.75) + (100*1.20) + ((unit-250) * 1.50);
    }
    else if(unit>150 && unit<=250) {
      bill = (50*0.5) + (100*0.75) + ((unit-150) * 1.20);
    }
    else if(unit>50 && unit<=150) {
      bill = (50*0.5) + ((unit-50) * 0.75);
    }
    else {
      bill = unit*0.50;
    }
    
    final_bill = bill + (bill*0.20);
    cout<<fixed<<setprecision(2)<<final_bill;
    // your code goes here
    return 0;
}