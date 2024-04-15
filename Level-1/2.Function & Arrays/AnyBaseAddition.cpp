//M1)by me
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






//m2-by me
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void addition(int base,int n1,int n2){
    //approach:extract last digit of both numbers
    //add them generally and then mod them by their base
    //we get quotient and remiander respectively
    //use quotient int the next tens/hundreds and place rem as it is in ans,
    //and correspondingly increse power of unit digit...
    int greater = n1>n2 ? n1:n2;
    int smaller = n1<n2 ? n1:n2;
    int sum=0,pow_count=0;
    while(greater){
        int ld_g = greater%10;
        int ld_s = smaller%10;
        int div = (ld_g + ld_s)/base;
        int rem = (ld_g + ld_s)%base;
        sum+=rem*pow(10,pow_count);
        pow_count++;
        if(div){
            sum+=div*pow(10,pow_count);
        }
        
        greater/=10;
        smaller/=10;
    }
    cout<<sum;
}
int main() {
    int base=8;
    int n1=767;
    int n2=421;
    addition(base,n1,n2);
    return 0;
}
