#include<iostream>
#include<math.h>
using namespace std;
int m[15625000]={0};
void mark(int start,int end){
    for(int i=3; i<sqrt(end);i+=2){
        for(long int j = max(i*i,(start+i-1)/i*i);j<=end;j+=i){
            if(!(m[j>>6]&(1<<((j&63)>>1)))&&j%2!=0){
                m[j>>6] |=(1<<((j&63)>>1));

            }
        }
    }
}

int main(){
    int b,s1,s2;
    int count = 0;
    cin>>b;
    int max = pow(10,b);
    int min = pow(10,b-1);
    mark(min,max);

    for(int i =min +1;i<max;i+=2){
        if(!((m[i>>6])&(1<<((i&63)>>1)))){
            if(b !=2){
            int lower = 0;
            int greater = 0;
            int check = 1;
            int tmp =i;
            while(tmp !=0){
                if(!lower && !greater){
                    s1 = tmp % 10;
                    tmp /=10;
                    s2 = tmp % 10;
                    tmp /=10;
                    if(s1>s2){
                        greater++;
                    }
                    else if(s1<s2){
                        lower++;
                    }
                    else{
                        check =0;
                        break;
                    }
                    
                }
                if((s2>tmp%10 && greater)||(s2<tmp%10&& lower)){
                    s2 = tmp%10;
                    tmp /=10;

                }
                else{
                    check =0;
                    break;
                }
            }
            if (check){
                count++;
            }
        }
            else{
                if(i/10 != i%10){
                count++;
                }
            }
        }

    }
    cout<<count;

}