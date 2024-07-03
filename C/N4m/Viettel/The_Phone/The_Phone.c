#include<stdio.h>
#include <time.h>
int main(){
clock_t start = clock();
    FILE *fin = fopen("PHONE.INP","r");
    FILE *fout = fopen("PHONE.OUT","w");
    int D,N;
    int count = 0;
    int arr[300000];
    fscanf(fin,"%d %d",&N,&D);
    for (int i = 0; i<N;i++){
        fscanf(fin,"%d ",&arr[i]);
    }
    int i = 0;
   while (i<N-1){
    int check = 1;
    for (int j = i+D;j>i;j--){
        if(arr[j]){
            i=j;
            check =0;
            break;
        }
    }
    if(check){
        i+=D;
        count++;
    }

   }
       clock_t end = clock();
printf("%lf",(float)((end-start)));
    fprintf(fout,"%d",count);
    fclose(fin);
    fclose(fout);
    return 0;
}