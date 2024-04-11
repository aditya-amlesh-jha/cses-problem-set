#include<iostream>
using namespace std;

void weird_algo(long long n){
    while(n!=1){
        cout<<n<<" ";
        n = (n%2==0)?n/2:n*3+1;
    }

    cout<<n;
}

int main(){
    double n;
    cin>>n;

    weird_algo(n);

    return 0;
}