#include<iostream>
using namespace std;
int main(){
    //1) Write a Program to Calculate Sum of first N Natural Numbers (here value of N is Entered by user)					
    int n;
    cin>>n;
    int sum = 0;
    for(int i = 0;i<=n; i++){
        sum = sum +i;
    }
    cout<<sum<<endl;

    return 0;
}