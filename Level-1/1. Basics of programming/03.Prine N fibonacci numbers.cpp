M1)
General method to print N fib by recurssion
//program to print all fibonacci number within n
#include <bits/stdc++.h>
using namespace std;

int fun(int n){
    if(n == 0 || n == 1) return n;
    return fun(n-1)+ fun(n-2);
}
void printFib(int n){
    for(int i=0;i<n;i++){
        cout<<fun(i)<<" ";
    }
}
int main()
{
    int  n=10;
    printFib(n);
    return 0;
}


__________________________________________________________________________________________________________________
M2)
//program to print all fibonacci number within n
#include <bits/stdc++.h>
using namespace std;

void printFib(int n){
    int a=0,b=1,c=0;
    for(int i=0;i<n;i++){
            cout<<a<< " ";
            c=a+b;
            a=b;
            b=c;
    }
}


int main()
{
    int  n=6;
    printFib(n);
    return 0;
}
