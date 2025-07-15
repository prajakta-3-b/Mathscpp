#include<iostream>
using namespace std;

int palindrome(int n){
    int rev=0;
    int temp=n;
    while(temp!=0){
        int ld=temp%10;
        rev=rev*10+ld;
        temp=temp/10;
    }return (rev==n);
}
int main(){
    int n=343;
    if(palindrome(n)==1){
        cout<<"yes\n";
    }
    else{
        cout<<"No";
    }
    return 0;
}