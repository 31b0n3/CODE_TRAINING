#include<iostream>
#include<math.h>
using namespace std;
int m[15625000]={0};
void mark(int end){
    for(int i=3; i<sqrt(end);i+=2){
        for(long int j = i*i;j<=end;j+=(i*2)){
            if(!(m[j>>6]&(1<<((j&63)>>1)))){
                m[j>>6] |=(1<<((j&63)>>1));

            }
        }
    }
}

int sum(int i){
    int tmp = 0;
    int j = 0;
    while (i!=0){
        j = (i%10);
        if(j!=1&&((!(m[j>>6]&(1<<((j&63)>>1)))&& j%2!=0)||j==2)){
            tmp+=(i%10);
            i/=10;
        }
        else{
            return 0;
        }
        
    }
    return tmp;
}

int main(){
    int a,b,s;
    cin>>a>>b;
    mark(b);
    int count = 0;
    if(a==2){
        count++;
    }
    if(a%2==0){
        a++;
    }
    for(int i = a; i<=b;i+=2){
        if(!(m[i>>6]&(1<<((i&63)>>1)))){
            s = sum(i);
            if((!(m[s>>6]&(1<<((s&63)>>1)))&& s%2!=0)||s==2){
                count++;
            }

        }
    }
    cout <<count;
    return 0;
}