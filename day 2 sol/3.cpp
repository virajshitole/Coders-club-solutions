#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b&&a>c){
        cout<<"A is greatest"<<endl;

    }
    else if (b>a&& b>c){
        cout<<"B is greatest"<<endl;
    }
    else cout<<"C is greatest"<<endl;
    return 0;
}