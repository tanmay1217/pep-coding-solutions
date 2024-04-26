
#include <iostream>
#include<stack>
using namespace std;
void fun(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        //(a+b)+((c+d))->true
        //((a+b)+(c+d))->false
        if(ch == ')'){
            if(st.top() == '('){
                cout<<"DUP found";
                return;
            }
            else{
                while(st.top() != '('){
                    st.pop();
                }
                st.pop();
            }
        }
        else{
            st.push(ch);
        }
    }
    cout<<"No dup";
}
int main() {
    string s;
    cin>>s;
    fun(s);

    return 0;
}
