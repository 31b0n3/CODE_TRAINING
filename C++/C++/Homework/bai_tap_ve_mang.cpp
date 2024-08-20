#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
    int long long v[10000]={0};
int main(){
    int n;
    cin>>n;
    for (int i=1;i<(n/2);i++){
        int z=0;
        if(n%i==0){
            z=n/i;
            v[i]=z*i*2;
        }                                                               
    }
    sort(v, v+n);
    cout<<v[0]<<endl;
}