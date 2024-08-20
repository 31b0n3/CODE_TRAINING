#include <iostream>
#include<set>
#include<algorithm>
#include <math.h>
using namespace std;
int snt(int n){
  if(n<2) return 0;
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0) return 0;
  }
  return 1;
}
int main(){
  set<int> p;
  int n;
  cin>>n;
  for(int i=(int)pow(10,n-1)+1;i<(int)pow(10,n);i+=2){
    int k=i;
    string t=to_string(k);
    for(int j=0;j<t.length()-1;j++){
      if(t[j]=='0'||t[j]=='4'||t[j]=='6'||t[j]=='8'){
        i=i+10*(t.size()-j-1);
        t.clear();
        break;
      }
    }
    if(t.empty()) continue;
    while(k>0){
      if(p.find(k)!=p.end()||snt(k)==1){
        p.insert(k);
        k=k/10;
      }
      else break;
    }
    if(k==0){
      cout<<i<<endl;
    }
  }
}