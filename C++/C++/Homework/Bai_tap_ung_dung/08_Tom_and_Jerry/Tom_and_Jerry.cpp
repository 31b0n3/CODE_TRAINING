#include <iostream>
using namespace std;
int ucln(int n){
  for(int i=n/2;i>0;i--){
    if(n%i==0){
      if((n-i)%2==1){
      return i;
      break;
      }
    }
  }
  return 1;
}
int main(){
  int n,t,j;
  cin>>t;
  for(int i=0;i<t;i++){
    j=0;
    cin>>n;
    while(n!=1){
      n=n-ucln(n);
      j++;
        
    }
    cout<<j%2<<endl;    
  }
  return 0;
}