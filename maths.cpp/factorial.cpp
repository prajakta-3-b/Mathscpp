#include<iostream>
using namespace std;

int fact(int n){
    if(n==0)
    return 1;
    return n*fact(n-1);
}
int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    if(num<0)
    {
        cout<<"the factorial of negative number does not exist"<<endl;
    }
    else{
        cout<<"the factorial of the number is "<<fact(num)<<endl;
    }
    return 0;
}