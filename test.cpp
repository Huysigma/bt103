#include<iostream>
using namespace std;
int main(){
    int N, S=0;
    do{
    cout<<"nhap N: ";cin>>N;
    }while(N<=1);
    for(int i=3;i<=N;i++){
        if(int j=2;j<=i;j++){
            if(i%j==0){
                S+=i;
            }
        }
    }
    cout<<"vay tong S la: "<<S;
    return 0;
}