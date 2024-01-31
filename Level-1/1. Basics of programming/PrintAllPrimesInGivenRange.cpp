//program to list [1,n] prime no.
#include <bits/stdc++.h>
using namespace std;
int printPrime(int n){
    int count = 0;
    for(int i=2;i*i<n;i++){
        if(n % i == 0){
            count++;
            break;
        }
    }
    if(count  == 0) return 1;
    else return 0;
}
void fun(int f,int l){
    for(int i=f;i<=l;i++){
        if(printPrime(i)){
            cout<<i<<" ";
        }
    }
}
int main()
{
    int s=10;
    int l =100;
    fun(s,l);
    return 0;
}
