#include<iostream>
using namespace std;

int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}

int main(){
    int a,b;
    cout<<"enter the number ";
    cin>>a;
    cout<<"Enter the second number";
    cin>>b;
    cout<<"GCd of "<<a<<" and "<<b<<" is "<<gcd(a,b)<<endl;
    return 0;
}