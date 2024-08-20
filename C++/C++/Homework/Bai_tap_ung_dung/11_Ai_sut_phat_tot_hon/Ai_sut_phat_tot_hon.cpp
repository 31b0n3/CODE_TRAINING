#include<iostream>
using namespace std;
void goal(int sut,int bat){
    int count =0;
    if(sut<bat){
        bat = sut;
    }
    while(bat!=1){
        if(sut%bat==0){
            sut--;
            bat++;
            count++;
        }
        bat--;
    }
    cout<<count<<" ";
    
}
int main(){
    int TC,T,Q,L;
    cin>>TC;
    
    for(int i = 0; i<TC;i++){
        cin>> T>>Q>>L;
        goal(T,L);
        goal(Q,L);
        cout<<endl;
    }
}