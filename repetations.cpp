#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string dna;

    cin>>dna;

    int ans = 0;

    int i=0;

    while(i<(int)dna.size()){
        int j = i;
        while(j<(int)dna.size() && dna[i]==dna[j]){
            j++;
        }
        ans = max(ans,j-i);
        i = j;
    }

    cout<<ans;

    return 0;
}