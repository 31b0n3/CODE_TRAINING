#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;

    cin>>s;
    int len = s.length();
    for (int i = 0; i < len; i++){
        int tmp = i;
        for(int j = i; j<len;j++){
            cout<<s[j];
        }
        for(int j = 0; j<tmp;j++){
            cout<<s[j];
        }
        cout<<endl;
    }
    return 0;
}