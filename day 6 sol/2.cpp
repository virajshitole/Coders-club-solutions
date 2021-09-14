#include<bits/stdc++.h>
using namespace std;
int main(){
//     2) Write a Program to check if an integer (entered by the user) can be expressed as the sum of two prime numbers,if yes thenprint all possible combinations with the use of functions.									
// "Example
// Enter a positive integer: 34
// OUTPUT:
// 34 = 3 + 31
// 34 = 5 + 29
// 34 = 11 + 23
// 34 = 17 + 17
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 1 ;i<n; i++){
        cout<<arr[i];
    }
    								
    return 0;
}