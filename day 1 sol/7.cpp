#include<bits/stdc++.h>
using namespace std;
int main(){
    //swapping of two number 
    int a,b;
    cin>>a>>b;
    //first method using temp integer
    int temp = a;
    a=b;
    b=temp;
    cout <<a<<" "<<b<<endl;
    //second method 
    a=a+b;  // a = 8
    b=a-b;  // b = 5
    a=a-b;
    cout<<a<<" "<<b<<endl;

    return 0;
}