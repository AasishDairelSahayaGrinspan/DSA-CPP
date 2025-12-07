#include<iostream>
using namespace std;
    int lcm(int a,int b) {
        int tmp = max(a,b);

        while (1) {
            if(tmp%a==0 && tmp%b==0) {
                return tmp;
            }
            tmp++;
        }
    }




    int main () {


        int a , b ;
        cin>>a>>b;
        cout<<lcm(a,b)<<endl;

    }