#include<bits/stdc++.h>
using namespace std;
bool containsNearbyDuplicate(vector<int>& nums, int k) {
    
    unordered_set<int> window;

    for(int i=0;i<nums.size();i++){
        if(window.count(nums[i])) return true;
        window.insert(nums[i]);
        if(window.size()>k) {
            window.erase(nums[i-k]);
        }
    }

    return false;
}
int main(){
    vector<int> arr={1,2,3,1,2,3};
    int k=2;
    cout<<containsNearbyDuplicate(arr,k)<<endl;
    return 0;
}