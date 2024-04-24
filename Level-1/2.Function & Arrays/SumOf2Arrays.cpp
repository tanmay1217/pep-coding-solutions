#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fun(int *a1,int n1, int *a2,int n2 ){
    int sum=0,pow_count=0;
    int min_num=n1 < n2 ? n1:n2;
    for(int i=min_num-1;i>=0;i--){
        int rem = (a1[i] + a2[i])%10;
        int carry = (a1[i] + a2[i])/10;
        rem = rem*pow(10,pow_count);
        sum+=rem;
        pow_count++;
        if(carry){
            sum+=carry *pow(10,pow_count);
        }
    }
    
    //which is max array? -> handle for first remaing digits 
    int *maxarr = n1 > n2 ? a1:a2; 
    
    
    // case handle for reaming digits of larger number addition
    int difference  = abs(n1-n2);
    for(int i=0;i<difference;i++){
        sum+=maxarr[i]*pow(10,pow_count);
        pow_count++;
    }
    
    cout<<"sum = "<<sum;
}
int main() {
    int noe1,noe2;
    cin>>noe1;
    int *arr1=new int[noe1];
    for(int i=0;i<noe1;i++){
        cin>>arr1[i];
    }
    cin>>noe2;
    int *arr2=new int[noe2];
    for(int i=0;i<noe2;i++){
        cin>>arr2[i];
    }
    fun(arr1,noe1,arr2,noe2);

    return 0;
}

/*
o/p:
5
3 1 0 7 5
6 
1 1 1 1 1 1
sum = 142186
*/
