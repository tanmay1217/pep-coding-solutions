M1)by me
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int converting_to_required_base(int n,int b,int reqBase){
    int sum=0,pow_count=0;
    while(n){
        int rem = n%reqBase;
        sum+=rem*pow(b,pow_count);
        pow_count++;
        n/=reqBase;
    }
    return sum;
}
void addition(int base,int n1,int n2){
    //first n1,n2 convert into base 10 
    n1 = converting_to_required_base(n1,base,10);
    n2 = converting_to_required_base(n2,base,10);
    //cout<<"n1 "<<n1<<" \t"<<"n2 "<<n2<<endl;
    int sum=n1+n2;
    
    //convert final sum into req. base
    int ans = converting_to_required_base(sum,10,base);
    cout<<"Addition of n1+n2:\t"<<ans;
}
int main() {
    int base=5;
    int n1=234;
    int n2=343;
    addition(base,n1,n2);
    return 0;
}
