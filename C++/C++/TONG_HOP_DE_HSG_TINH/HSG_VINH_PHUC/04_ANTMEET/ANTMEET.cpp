#include<bits/stdc++.h>
using namespace std;
struct ant{
    int weight;
    double pos;
    int dir;
};
bool compareByPos(const ant &a, const ant &b) {
    return a.pos < b.pos;
}
float B[50000];
int main(){
    int n,L,sum=0,haft;
    ifstream fin("ANTMEET.INP");
    ofstream fout("ANTMEET.OUT");
    fin>>n>>L;
    vector<ant> ANT(n);
    
    for(int i = 0; i<n; i++){
        fin>>ANT[i].weight>>ANT[i].pos>>ANT[i].dir;
        sum += ANT[i].weight;
    }
    haft = sum/2;
    int weightnow = 0;
    sort(ANT.begin(), ANT.end(), compareByPos);
    int c=0;
    
    float step =1;
    while(weightnow < haft){
        int count =0;
        for (int i = 0; i<n-1;i++) {//find step;
            if(ANT[i].dir==1&& ANT[i+1].dir==-1){
                B[count++]= (ANT[i+1].pos-ANT[i].pos)/2.0;
            }
            
        }
        float step = *min_element(B,B+count);
       if(ANT[0].dir ==-1 ) step = min(step,ANT[0].pos);
       if(ANT[n-1].dir == 1) step = min(step,ANT[n-1].pos);

       for(int i = 0; i< n; i++){
            ANT[i].pos += ANT[i].dir*step;
       }
       if(ANT[0].pos ==0 || ANT[n-1]==L){
        weightnow += ANT[0].pos; 
       }
       for(int i = 0;i<n-1;i++){
            if(ANT[i].pos==ANT[i+1].pos){
                swap(ANT[i].dir,ANT[i+1].dir);
                c++;
            }
           
       }
        


    }
    
}