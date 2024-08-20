//https://gialai.ucode.vn/problems/gia-lai-a-1920-bai-1-do-vui-quiz-60-diem-83813
#include<bits/stdc++.h>
using namespace std;
int BIT[100005][26];
void update(int pos, int ch,int val){
    while(pos < 100005){
        BIT[pos][ch] +=val;
        pos += pos & -pos;
    }
}
int getsum(int end,int ch){
    int sum = 0;
    while(end>0){
        sum += BIT[end][ch] ;
        end -= end & -end;
    }
    return sum;
}
int main(){
    int q;
    string S;
    cin>>S>>q;
    int len = S.length();
    for(int i = 0; i<len;i++){
        update(i+1,S[i]-'a',1);
    }
    while(q--){
    int type; cin>>type;
    if(type ==1){
        int pos;
        char c;
        cin>>pos>>c;
        pos--;
        update(pos+1,S[pos]-'a',-1);
        S[pos]=c;
        update(pos+1,S[pos]-'a',1);
    }
    else{
        int L,R;
        cin>>L>>R;
        int count = 0;
        for(int i = 0; i<26;i++){
            if(getsum(R,i)-getsum(L-1,i)>0){
                count++;
            }
        }
        cout<<count<<endl;

    }

    }

}