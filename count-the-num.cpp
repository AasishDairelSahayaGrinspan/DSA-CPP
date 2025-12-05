#include<iostream>
using namespace std;
long long  count(long long x) {
    long long count = 0;
    while (x !=  0) {
        x = x / 10;
        count++;
    }
    return count;

}


int main() {

    long long x;
    cout<<"enter a number for count:";
    cin>>x;
    long long ans = count(x);
    cout<<"the count is:"<<ans<<endl;
    return 0;





}