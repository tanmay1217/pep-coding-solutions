#include <iostream>
#include <cmath>
using namespace std;
#here we first have to count the digits then, loop on divisors till 0(impo)/ or loop can also be of n
void fun(int n){
  int temp=n;
  int c=0;
  while(temp){
    temp/=10;
    c++;
  }
  int num = pow(10,c-1);  
  while(num){
    cout<<n/num<<" ";
    n=n%num;
    num/=10;
  }
} 
int main() 
{
    fun(10023);
    return 0;
}
