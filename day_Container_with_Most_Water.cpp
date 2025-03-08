#include<bits/stdc++.h>
using namespace std;
//brute force

// int maxArea(vector<int>& height) {
//     int n=height.size();
//     int maxWater = 0;

//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             int width = j-i;
//             int h  = min(height[i], height[j]);
//             int area = width*h;
//             maxWater = max(maxWater,area);
//         }

//     }
//     return maxWater;
// }

//Optimal approach 
int maxArea(vector<int>& height) {
    int n  = height.size();
    int left =0,right=n-1,ans=0;
    while(left<right){
        int width = right-left;
        int ht = min(height[left],height[right]);
        int area = width * ht;
        ans = max(ans,area);
        if(height[left]<height[right]){
            left++;
        }
        else{
            right--;
        }
    }
    return ans;
}



int main(){
    vector<int> vec = {1,8,6,2,5,4,8,3,7};
    cout<<maxArea(vec)<<endl;


    return 0;
}
