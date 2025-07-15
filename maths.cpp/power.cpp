#include<iostream>
using namespace std;

int power(int x,int n){
    int res=1;
    while(n>0){
        if(n%2!=0)
        res=res*x;
    x=x*x;
    n=n/2;
    }
    return res;
}

int main() {
    int x,n;
    cout << "Enter base: ";
    cin >> x;
    cout << "Enter exponent: ";
    cin >> n;

    int result = power(x,n);
    cout <<x << "^" << n<< " = " << result << endl;

    return 0;
}