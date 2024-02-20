#include <iostream>
using namespace std;
int cal_gcd(int n1,int n2){
  int rem=n1;
  while(rem!=0){
    rem = n2%n1;
    n2=n1;
    n1=rem;
  }
  return n2;
  
  
}
int main() 
{
  int n1=36,n2=24;
  int gcd = cal_gcd(n1,n2);
  int lcm=(n1*n2)/gcd;
  cout<<"GCD is "<<gcd<<" and "<<"lcm is "<<lcm;
  return 0;
}

Output:

GCD is 12 and lcm is 72
