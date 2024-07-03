#include<stdio.h>
int arr[1000][1000];
int Query[50][1000];
int N,M,Q;
int check;
void main(){
    FILE *fin = fopen("INTERNSHIP.INP","r");
    FILE *fout = fopen("INTERNSHIP.OUT","w");
    fscanf(fin,"%d %d", &N,&M);
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            fscanf(fin,"%d",&arr[i][j]);
        }
    }
    fscanf(fin,"%d",&Q);
    for(int i =0;i<Q;i++ ){
        for (int col=0;col<M;col++){
            fscanf(fin,"%d",&Query[i][col]);
        }   
    }
    for(int i =0;i<Q;i++ ){
        int count = 0;
        for(int row=0; row<N;row++){
            check = 1;
            for(int col = 0; col<M;col++){
                if(Query[i][col]!=-1 && arr[row][col]!=Query[i][col]){
                    check = 0;
                    break;
                }
            }
            if(check){
                count++;
            }
        }
    fprintf(fout,"%d\n",count);
    }
    fclose(fin);
    fclose(fout);
    return 0;
}