#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    for (int i =0; i< str.length();i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]-=' ';

        }
        cout<<int(str[i]);
    }
    return 0;
}