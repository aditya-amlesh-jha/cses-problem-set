#include <iostream>
using namespace std;

int main(){

    int n;

    cin>>n;

    long sum = (1l*n*(n+1))/2;

    for(int i=1;i<n;i++){
        int temp;
        cin>>temp;

        sum -= temp;
    }

    cout<<sum;

    return 0;
}