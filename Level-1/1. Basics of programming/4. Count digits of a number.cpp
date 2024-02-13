//program to list [1,n] prime no.
#include <bits/stdc++.h>
using namespace std;

//convert to string and find its length
void fun1(int n){
    cout<<to_string(n).length();
}

//ceil log10
void fun2(int n){
    cout<<ceil(log10(n));
}

//
void fun3(int n){
    int temp=n;
    int count=0;
    while(temp){
        temp=temp/10;
        count++;
    }
    cout<<count;
}
int main()
{
    fun1(12345);
    cout<<endl;
    fun2(12345);
    cout<<endl;
    fun3(12345);
    return 0;
}
