#include<bits/stdc++.h>
using namespace std;
int main(){
    //8) Write a Program to Display all Factors of a Number entered by User	
    int n;
    cin>>n;
    for(int i =1 ;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }								
    return 0;
}
