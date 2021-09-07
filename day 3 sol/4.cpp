#include<bits/stdc++.h>
using namespace std;
int main(){
    //4) Write a Program to Display Fibonacci Series upto nth term (n is entered by user)	
    int n, t1 = 0, t2 =1,temp;
    cin>>n;
    int nextterm;
    for(int i = 0;i<=n ;i++){
        if(i==t1){
            cout<<t1<<" ";
            continue;
        }
        if(i==t2){
            cout<<t2<<" ";
            continue;
        }
        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm ; 
        cout<<nextterm<<" ";
        

    } 
    			
    return 0 ;
}