#include<bits/stdc++.h>
using namespace std;
int main(){
    //5) Write a Program to Check Whether a Number is Prime or Not									
    int n; 
    cin>>n;
    bool flag = false;
    if(n==1|| n==2){
        flag =0;
    }

    for(int i =2;i<=(n/2);i++){
        if(n%i==0){
            flag=1;
        }
    }
    if(flag==1){
        cout<<"not prime";
    }else cout<<"prime";
    return 0;
}