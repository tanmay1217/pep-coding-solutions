#include <bits/stdc++.h>
using namespace std;
int chk_constraints(int num){
  //now sort no in dec order and compare from original one 
  int temp = num;
  int flag =1;
  int sum=0;
  while(temp){
    int last_digit = temp%10;
    sum+=last_digit*pow(10,last_digit-1);
    temp/=10;
  }
  if(ceil(log10(sum)) != ceil(log10(num))){
    cout<<"Error in i/p...";
    flag=0;
  }
  //cout<<sum;
  return flag;
}
void fun(int n){
  cout<<"i/p:\t"<<n<<endl;
  if(!chk_constraints(n)){
    return;
  }
  //if passed from constraint_chk then,
  int temp=n;
  int idx_from_leftSide=1;
  int sum=0;
  while(temp){
    int last_digit = temp%10;
    sum+=idx_from_leftSide*pow(10,last_digit-1);
    idx_from_leftSide++;
    temp/=10;
  }
  cout<<"o/p:\t"<<sum;
}
int main() 
{
    fun(12234);
    return 0;
}
