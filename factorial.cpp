#include<iostream>
using namespace std;
    int fac(int n) {

        int ans = 1;
        while(n>0){
            ans = ans * n ;
            n--;


        }
        return ans;

    }
    //for loop version
        int fac(int n) {
        int ans = 1;
        for (int i = 1; i<= n; i++ ) {
            ans = ans * i;

        }
            return ans;
    }

int main() {

    int n;
    cout<<"enter the number :"<<endl;
    cin>>n;
    int ans = fac(n);
        cout<<ans<<endl;


}