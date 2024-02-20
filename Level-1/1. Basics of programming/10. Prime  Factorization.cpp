//M1(by me)
#include <iostream>
using namespace std;
//methodology-print krte jao divisor se jb tk rem 0 aa rha hai, vrna next divisor dhundho jo agla prime no. ho
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




*****************************************************************************************************************************************************************

  
M2)
#include <iostream>
using namespace std;

void printPrimeFactors(int n){
  for(int i=2;i*i<=n;i++){
    while(n%i == 0){
      cout<<"factors is "<<i<<", ";
      n/=i;
      //cout<<"n= "<<n<<" ";
    }
  }
  //kyoki agar koi no. root n tk divide hi divide ho skta hai, if at all wo pura divide hoga 1 nahi bna to wah no. wo khud hai
  if(n!=1){
    cout<<n;
  }
}
int main() 
{
  printPrimeFactors(46);
  return 0;
}


