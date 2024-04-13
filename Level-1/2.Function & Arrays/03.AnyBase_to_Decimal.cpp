#include <bits/stdc++.h>
using namespace std;

void givenBase_to_decimal(int n,int base){
  int pow_count=0;
  int sum=0;
  while(n){
    int rem = n%10;
    sum+= rem* pow(base,pow_count);
    pow_count++;
    n/=10;
  } 
  cout<<sum;
}
int main() 
{
    givenBase_to_decimal(1266,8);
    return 0;
}
