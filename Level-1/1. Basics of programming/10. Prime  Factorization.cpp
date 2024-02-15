//M1(by me)
#include <iostream>
using namespace std;
//func to chk if next generated prime no. or not 
int chkprime(int num){
  int flag=1;
  for(int i=2;i<num*num;i++){
    if(num%i == i){
      flag =0;
      break;
    }
  }
  return flag;
}

//func to generate next prime no.
int get_next_prime(int num){
  for(int i=num+1;i<num*num;i++){
    if(chkprime(i)) return i;
  }
}
void fun(int n){
  int divisor=2;
  while(n!=1){
    if(n%divisor == 0){
      cout<<divisor<<" ";
      n=n/divisor;
    }
    else{
      divisor = get_next_prime(divisor);

    }
  }
}
int main() 
{
    fun(1440);
}
