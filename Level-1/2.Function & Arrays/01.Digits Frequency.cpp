#include <iostream>
#include <cmath>
#include <vector> 
using namespace std;
void fun(int n,int k){
  int k_count=0;
  while(n){
    int last=n%10;
    if(last == k) k_count++;
    n/=10;
  }
  cout<<k_count;
}
int main(){
  fun(994543234,9);
}
