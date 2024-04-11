#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums;
    
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }

    long long min_moves = 0;

    for(int i=1;i<n;i++){
        if(nums[i] < nums[i-1]){
            min_moves += nums[i-1] - nums[i];
            nums[i] = nums[i-1];
        }
    }

    cout<<min_moves;


    return 0;
}