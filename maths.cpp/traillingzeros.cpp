#include<iostream>
using namespace std;
int countTrailingZeros(int n){
    int res=0;
    for(int i=5;i<=n;i=i*5)
    res=res+n/i;
    return res;
}

int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;

    int result=countTrailingZeros(n);
    cout<<"number of trailing zeros in the given number "<<result<<endl;
    return 0; 

}