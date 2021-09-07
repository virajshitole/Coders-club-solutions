#include<bits/stdc++.h>
using namespace std;
int main(){
    //6) Write a Program to Display Prime Numbers Between Two Intervals (entered by user)									
    int a , b;
    cin>>a>>b;
    bool prime = true;
    while(a<b){
        prime = true ;
        if(a==0||a==1){
            prime = 0;
        }
        else{
            for(int i = 2; i<=a/2;i++){
                if(a%i==0){
                    prime  = 0;
                }
            }
        }
        if(prime){
            cout<<a<<" ";
        }
        a++;
    }
}