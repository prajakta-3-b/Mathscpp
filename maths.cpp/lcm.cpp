#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(b==0)
    return a;
    return gcd(b,a%b);
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}

int main(){
    int a,b;
    cout<<"enter the first number";
    cin>>a;
    cout<<"enter the second number";
    cin>>b;
    cout<<"the lcm of "<<a<< "and" <<b<< "is" <<lcm(a,b);
    return 0;
}