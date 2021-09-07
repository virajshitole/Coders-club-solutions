#include<bits/stdc++.h>
using namespace std;
int main(){
    //7) Write a Program to check whether a number entered by the user is an Armstrong number or not.	
    int num,r , temp ,sum = 0;
    cin>>num;
    int n = num ;
    while(n>0){
        r = n%10;
        sum = sum +(r*r*r);
        n = n/10;
    }
    if(num == sum){
        cout<<"armstrong ";
    }else cout<<"not armstorng";

}