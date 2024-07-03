#include<stdio.h>
int arr[1000000];
int main(){
    FILE *fin = fopen("PALINDROMIC.INP","r");
    FILE *fout = fopen("PALINDROMIC.OUT","w");
    int N;
    fscanf(fin,"%d",&N);
    for (int i = 1; i<=N;i++){
        fscanf(fin,"%d",&arr[i]);
    }
    int c=0;
    int count1 = 1;
    int count2 = N;
    int check1 =0;
    int check2 = 0;
    while (count1<count2){
        if(arr[count1]!=arr[count2]){
            if (arr[count1]<arr[count2]){
                arr[count1]+=arr[count1+1];
                check1++;
            }
            else{
                arr[count2]+=arr[count2-1];
                check2++;
            }
        }
        else{
            c+=(check1+check2);
            count1 += (1+check1);
            count2 -= (1+check2);
            check1 = 0;
            check2 = 0;

        }
    }
    fprintf(fout,"%d",c);
    fclose(fin);
    fclose(fout);
    return 0;
}