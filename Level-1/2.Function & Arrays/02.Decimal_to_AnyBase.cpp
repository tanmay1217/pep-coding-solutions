#include <bits/stdc++.h>
using namespace std;

void decimal_to_given_base(int n,int base){
  int pow_count=0;
  int sum=0;
  while(n){
    int reminder = n % base;
    sum+=reminder*pow(10,pow_count);
    n/=base;
    pow_count++;
  }
  cout<<sum; 
}
int main() 
{
    decimal_to_given_base(634,8);
    return 0;
}
