#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
    int pos[10000]={0};
    int hang[10000]={0};
int main(){

    int T,n;
    cin>>T;
    for (int i =0;i<T;i++){
        cin>>n;
        int max =-1;
        for(int j = 0;j<n;j++){
            cin>>pos[j];
        }
        for(int o=0;o<n;o++){
            cin>>hang[o];
        }
        sort(pos,pos+n);
        sort(hang,hang+n);
        for(int j = 0;j<n;j++){
            if(max<abs(hang[j]-pos[j])){
                max = abs(hang[j]-pos[j]);
            }
        }
        cout<<max;
    }
}