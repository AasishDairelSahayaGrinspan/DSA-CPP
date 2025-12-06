#include<iostream>



    int fac(int n) {
        long long  ls = 1 ;
        long long temp = 0;
        int count = 0;
        while (n>0) {
            ls = ls * n ;
            n--;
        }

        while (ls > 0) {
            temp = temp + ls % 10;
             if (temp == 0) {
                 count++;
             }
               ls = ls / 10;



        }
        return count ;
    }





    int main() {
        int n ;
        std::cout<<"enter the number :"<<std::endl;
        std::cin>>n;
        int ans = fac(n);
        std::cout<<ans<<std::endl;

    }