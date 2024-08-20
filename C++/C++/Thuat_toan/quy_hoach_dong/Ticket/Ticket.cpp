#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    vector<int> time(N+1,0);
    vector<int> t(N+1,0),r(N+1,0);
    for(int i = 1;i<=N;i++ ){
        cin>> t[i];
    }
    for(int i = 1; i<N;i++){
        cin>> r[i];
    }
    for(int i = 1; i<=N;i++){
        if(i==1){
            time[i] = t[i];
        }
        else{
        time[i] = min(time[i-1]+t[i],time[i-2]+r[i-1]);
        }
    }
    cout<<time[N];
}