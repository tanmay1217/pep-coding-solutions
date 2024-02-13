#include <iostream>
#include <cmath>
using namespace std;

void fun(int n){
  while(n){
    cout<<n%10<<" ";
    n/=10;
  }
} 
int main() 
{
    fun(101);
    return 0;
}
