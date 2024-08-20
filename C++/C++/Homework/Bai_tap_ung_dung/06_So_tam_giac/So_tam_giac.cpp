//tinh tong day so tu 1 ->n: 1/2*s*(s+1);
//can giai pt s^2 +s -2n = 0
//nghiem duong: (-1+sqrt(1+8n))/2
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int T,n;      
    double s;
    cin>>T;
    for(int i =0;i<T;i++){
        cin>>n;
        s= (-1+sqrt(1+8*n))/2;
        if(s-int(s)){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    return 0;
}