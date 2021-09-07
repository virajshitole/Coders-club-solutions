#include<iostream>
using namespace std ;
int fun(int n){
    int fact ; 
    if(n==1){
        return 1;
    }
    fact  = n* fun(n-1);
    //return fact;
    
}
int main(){
    int n ; 
    cin>> n;
    cout<<fun(n);
    return 0 ;

}
