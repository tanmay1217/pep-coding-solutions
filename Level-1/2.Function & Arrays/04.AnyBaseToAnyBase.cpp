#include <bits/stdc++.h>
using namespace std;

void AnyBaseToAnyBase(int n,int b1,int b2){
  //approach: samne wale se lagatar divide,rem ko apn ki pow se multiply
  int sum=0,pow_count=0;
  while(n){
    int rem= n% b2;
    sum+=rem*pow(b1,pow_count);
    pow_count++;
    n/=b2;
  }
  cout<<sum;
}
int main() 
{
    //ip n,b1,b2;
    AnyBaseToAnyBase(694,10,2);
    return 0;
}
