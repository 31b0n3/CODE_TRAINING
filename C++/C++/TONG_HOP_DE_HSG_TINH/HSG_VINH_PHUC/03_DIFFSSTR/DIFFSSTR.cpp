#include<bits/stdc++.h>
using namespace std;
int cmp(string sub[],int c){
    int count =0;
    while (count<c){
        for(int i = count+1;i<c;i++){
            if(sub[count]==sub[i]){
                return 1;
            }
        }
        count++;
    }
    return 0;
    
}
int main(){
    ifstream fin("DIFFSSTR.INP");
    ofstream fout("DIFFSSTR.OUT");
    int len;
    fin>>len;
    fin.ignore();
    string S;
    string sub[100];
    char x;
    getline(fin,S);
    fin.close();
    for(int i = 1; i<len;i++){
        int num[100]={0}; // mang chua so lan ki tu do xuat hien dau tien
        char now[100]={0}; //cac ki tu xuat hien trong chuoi
        int pos[100][100]={0}; // vi tri cua tung ki tu
        int cc = 0;
        int count = 0;
        while(cc<= len-i){// vong lap lay thong tin cua ki tu dau
            x = S[cc];
            pos[int(x)][num[int(x)]]=cc;
            if(num[int(x)]++ ==0){
                now[count++]=x;
            }
            cc++;   
        }
        int check = 0;
        for(int j=0;j<count; j++){
            int c = num[int(now[j])];
            if(c>=2){
            for(int o = 0; o<c;o++){
                int start = pos[int(now[j])][o];
                sub[o] = S.substr(start,i);
            }
            if(cmp(sub,c)){
                check =1;
                break;
            }
            }

    }
        if(!check){
            fout<<i;
            fout.close();
            return 0;
        }

    }
    return 0;
}
