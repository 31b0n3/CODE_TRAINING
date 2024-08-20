#include<iostream>
using namespace std;

int main(){
    int T,x,y,n;
    cin>>T;
    long long int w,z;
    for(int i = 0; i<T; i++){
        cin>>x>>y>>n;
        z = y*(2*(n/2));
        if(z==0){z=y;}
        w = x*(2*(n-(n/2)));

        if(z<w){
            cout<<w/z<<endl;
        }
        else{
            cout<<z/w<<endl;
        }
    }
    return 0;
}