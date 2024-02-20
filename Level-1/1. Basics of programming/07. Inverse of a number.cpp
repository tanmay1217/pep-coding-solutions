#include <bits/stdc++.h>
#include<cmath>
using namespace std;

#function to check the provided constraints
int chk_constraints(int n,int num){
  int flag=1;
  int temp=num;
  while(temp){
    int last = temp%10;
    temp/=10;
    if(last>n){ 
      flag = 0;
    }
  }
  return flag;
}

#
void fun(int n,int num){
  if(!chk_constraints(n,num)){
    return;
  }
  int temp=num;
  int idx=1;
  int sum=0;
  while(temp){
    int last = temp%10;
    temp/=10;
    sum+=idx*pow(10,last-1);
    idx++;
  }
  cout<<sum;
} 
int main() 
{
    fun(5,21453);
    return 0;
}
