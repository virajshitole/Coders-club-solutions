#include<bits/stdc++.h>
using namespace std;
int main(){
    //6) Write a Program to Find GCD or HCF of two numbers entered by user				

    int  a, b, temp , ans ;
    cin>>a>>b;
    if(a<b){
        temp = a;
        a= b ;
        b =temp ;
    }
    for (int i = 2 ;i<=b ;i++){
        if (a%i==0 && b%i==0){
            ans = i;
        }
    }
    cout<<ans; 

    return 0;
}