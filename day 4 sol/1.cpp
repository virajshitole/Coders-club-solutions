#include<bits/stdc++.h>
using namespace std;
int main(){
    //1) Write a Program to display sum of all digits of a given Number N by user								

    int n ; 
    cin>>n;
    int sum = 0;
    while(n!=0){
        sum  = sum + n%10;
        n = n/10;
    }
    cout<<sum;
    return 0;
}