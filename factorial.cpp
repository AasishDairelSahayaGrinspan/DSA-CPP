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

int main() {

    int n;
    cout<<"enter the number :"<<endl;
    cin>>n;
    int ans = fac(n);
        cout<<ans<<endl;


}