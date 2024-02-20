#include <iostream>
#include <cmath>
using namespace std;

void fun(int n1,int n2,int n3){
  int flag=0;
  if(pow(n1,2) == pow(n2,2)+ pow(n3,2)) flag =1;
  else if(pow(n2,2) == pow(n1,2)+ pow(n3,2)) flag =1;
  else if(pow(n3,2) == pow(n1,2)+ pow(n2,2)) flag =1;
  
  if(flag){
    cout<<"yes";
  }
  else{
    cout<<"NO";
  }
}
int main() 
{
  fun(13,12,5);
  return 0;
}
