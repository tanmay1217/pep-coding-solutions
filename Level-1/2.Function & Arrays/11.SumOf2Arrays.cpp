#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fun(int *a1,int n1, int *a2,int n2 ){
    int *sum = new int[n1 > n2 ? n1:n2];
    int i=n1-1;
    int j=n2-1;
    int k= n1>n2 ? n1-1 : n2-1;
    int sum_size = n1>n2 ? n1 : n2;
    int carry = 0;
    while(k>=0){
        int digit = carry;
        
        if(i>=0){
            digit+=a1[i];
        }
        if(j>=0){
            digit+=a2[j];
        }
        
        carry = digit /10;
        digit = digit %10;
        sum[k] = digit;
        i--;
        j--;
        k--;
    }
    
    // now k=0, means one of the number ends here but if carray remains??
    if(carry!=0){
        cout<<carry;
    }
    for(int i=0;i<sum_size;i++ ){
        cout<<sum[i];
    } 
    
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
3
9 9 9 
1
1
1000
*/
