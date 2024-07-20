#include<iostream>
#include<math.h>
using namespace std;
int m[15625000]={0};
int fibonaci[150]={0};
void mark(int start,int end){
    for(int i=3; i<sqrt(end);i+=2){
        for(long int j = max(i*i,(start+i-1)/i*i);j<=end;j+=i){
            if(!(m[j>>6]&(1<<((j&63)>>1)))&&j%2!=0){
                m[j>>6] |=(1<<((j&63)>>1));

            }
        }
    }
}
void isfibonaci(int f[],int s1,int s2){
    f[s2]=1;
    while (s1+s2<=150){  
    int tmp=s1;
    s1 = s2;
    s2+=tmp;
    isfibonaci(fibonaci,s1,s2);
    }
}
int sum(int i){
    int tmp = 0;
    int j = 0;
    while (i!=0){
        j = (i%10);
        tmp+=(i%10);
        i/=10;
    }
    return tmp;
}

int main(){
    int a,b,s;
    cin>>a>>b;
    mark(a,b);
    isfibonaci(fibonaci,1,1);
    if (a<=2){
        cout<<2<<" ";
        a=3;
    }
    for(int i =a;i<= b;i+=2){
        if(!(m[i>>6]&(1<<((i&63)>>1)))){
            s=sum(i);
            if(fibonaci[s]){
                cout<<i<<" ";
            }
        }
    }
    return 0;
   
}