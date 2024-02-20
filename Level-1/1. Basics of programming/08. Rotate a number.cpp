#include <bits/stdc++.h>
#include<cmath>
using namespace std;
//M1) my method
void fun(int num,int k){
  int no_of_digits = ceil(log10(num));
  //to handle issue(1=6),(2=7)...for values of k
  k=k%no_of_digits;
  if(k>0){
    while(k){
      int last_digit = num%10;
      num/=10;
      num+=last_digit*pow(10,no_of_digits-1);
      k--;
    }
    cout<<num;
  }
  
  else{
    while(k){
      int divisor = pow(10,no_of_digits-1);
      int first_digit = num/divisor;
      int rem = num%divisor;
      num = rem*10;
      num+=first_digit;
      k++;
    }
    cout<<num;
  }
  
}
 
int main() 
{
    fun(25398,-2);
    return 0;
}








M2)sir nice 
#include <bits/stdc++.h>
#include<cmath>
using namespace std;

void fun(int num,int k){
  int no_of_digits = ceil(log10(num));
  
  k=k%no_of_digits;
  
  if(k<0){
    k=no_of_digits+k;
  }
  
  int divisor = pow(10,k);
  int quotient = num/divisor;
  int rem = num%divisor;
    
  int update_rem_with_multiplier = rem*pow(10,no_of_digits-k);
  cout<<update_rem_with_multiplier+quotient;
  
}
 
int main() 
{
    fun(273516,-8);
    return 0;
}

