#include<stdio.h>
#include<math.h>
#define MAXN 31250 //2*10^6 /64
int check[MAXN];
int main(){
    int K,a,b;
    int count = 0;
    FILE *fin = fopen("KFACTOR.INP","r");
    FILE *fout = fopen("KFACTOR.OUT","w");
    fscanf(fin,"%d %d %d", &K,&a,&b);
    for(int i = 0; i<=(b/64); i++){
        check[i]=0;
    }
    for(long long int i = 3; i<=sqrt(b); i+=2 ){
        
        for (long long int j =i*i; j<=b;j +=(i*2)){
            if(i==9091){
            printf("yes");
        }
            if(!(check[j>>6] & (1<<((j&63)>>1)))){
                check[j>>6] |= (1<<((j&63)>>1));
                
            }
        }
    }
    if(a<K){
        count = K-a+1;
        a=K+1;
    }
    for (int i =a;i<=b; i++){
        int tmp = i;
        
        while (tmp !=1){
           while(tmp%2==0){
            tmp/=2;
           }

        for(int j = 3;j<=K&&tmp!=1&&(check[tmp>>6] & (1<<((tmp&63)>>1)));j+=2){
            while(tmp%j==0){
                tmp/=j;
            }
        } 

        if(!(check[tmp>>6] & (1<<((tmp&63)>>1)))&&tmp!=1){
        if(tmp<=K){
            count++;
            break;
        }
        else{
            break;
        }
        }
        }
        if (tmp==1){
            count++;
        }

    }
    
    fprintf(fout, "%d",count);
    fclose(fin);
    fclose(fout);
    return 0;
}