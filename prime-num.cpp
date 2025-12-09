#include<iostream>
using namespace std ;

    bool isprime(int n) {

        if (n == 1) {
            return false;
        }

            else if (n > 0) {
                 // exculding the 1 and the nth number so only we can check is remaining number can divisible or not , if any nummber divisible then it will be false
                for (int i = 2 ; i <n ;i++) {
                    if (n % i == 0) {
                        return false;
                    }
                    else
                        return true;
                }
            }

    }







    int main() {



        int n;
        cin>>n ;
        cout<<isprime(n)<<endl;

}