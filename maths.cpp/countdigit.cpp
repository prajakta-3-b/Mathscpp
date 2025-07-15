#include<iostream>
#include<cmath>
using namespace std;

int countDigit(int x){
    if(x==0)
    return 1;
    x=abs(x);
    int res=0;
    while(x>0)
    {
        x=x/10;
        res++;

    }
    return res;
}
int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    cout<<"number of digits"<<countDigit(num)<<endl;
    return 0;
}