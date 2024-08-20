#include <iostream>
using namespace std;
int main(){
  int t,l,r,a,b;
  cin>>t;
  for(int i=0;i<t;i++){
    int k=0;
    cin>>l>>r>>a>>b;
      for(int i=l;i<=r;i++){
        if(i%a==0||i%b==0){
          k=k+1;
        }
      }
    cout<<k<<endl;
  }
  return 0;
}