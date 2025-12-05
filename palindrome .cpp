#include<iostream>
using namespace std;

bool isPalindrome(int n) {

    int rev = 0;
    while (n != 0) {
        int temp = n % 10 ;
        rev = rev * 10 + temp;
        n = n / 10 ;

    }
    return rev == n;
}



int main() {

    int n ;
    cout<<"enter the number :";
    cin>>n;
    bool isp = isPalindrome(n);
    cout<<isp<<endl;




}