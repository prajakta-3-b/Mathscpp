#include<iostream>
using namespace std;

int divisors(int n){
    int i;
    for(i=1;i*i<n;i++){
        if(n%i==0)
        cout<<i<<" ";
    }
    
    if(i*i==n)
        cout<<i<<" ";
    
    for(i=i-1;i>=1;i--){
        if(n%i==0)
        cout<<n/i<<" ";
    }
    
}
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    divisors(n);
    return 0;
}
