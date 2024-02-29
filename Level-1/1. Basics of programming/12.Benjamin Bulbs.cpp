//T1) in this i used array of size n+1 filled it with 0's
//correspondingly one by one on each iteration digits are replaced accordingly to counter
#include <iostream>
#include <cmath>
#include <vector> 
using namespace std;
int main(){
  vector<int> g1;
  int n=10;
  for (int i = 1; i <=  n; i++)
    g1.push_back(0);
    
  cout<<endl;
  int counter=1;
  while(counter!=n+1){
    for(int i=counter;i<=n;){
      if(g1[i] ==0) g1[i]=1;
      else g1[i] = 0;
      i=i+counter;
    }
    counter++;
  }
  for (int i = 1; i <= n; ++i) 
    cout << g1[i] << " "; 
    cout<<endl;
}
