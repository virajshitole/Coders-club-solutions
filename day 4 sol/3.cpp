#include<bits/stdc++.h>
using namespace std;

int main(){
    //4) Write a Program to Check Whether a Number N entered by user is Palindrome or Not	
    int num;
    cin>>num;
    int n = num;
    int rev=0 , digit;
    while(n>0){
        digit = n%10;
        rev = rev*10+digit;
        n = n/10;
    }
    cout<<rev<<endl;
    if (rev == num) cout<<"palindrome";
    else  cout<<"not palindrome";
    return 0; 
} 