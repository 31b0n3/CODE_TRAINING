#include<iostream>

using namespace std;
void sort(int a[100],int c){
    for (int i = 0; i<c;i++){
        long int now = a[i];
        int index = i;
        while (index>0&&now<a[index-1]){
            a[index]=a[index-1];
            index--;
        }
        a[index]=now;
    }
}
int main(){
    int arr[100]={0};
    int count =0;
    string input;
    getline(cin,input);
    long int tmp=0;
    for (int i = 0;i<=input.length();i++){
        if (input[i]>='0'&&input[i]<='9'){
            tmp = tmp*10 +int(input[i]-'0');
        }
        else{
            if(tmp){
            arr[count++]=tmp;
            tmp = 0;
            }
        }
    }
    for (int i = 0;i<count;i++){
    cout<<arr[i]<<" ";
    }
    sort(arr,count);
    cout<<"\n";
    for (int i = 0;i<count;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
