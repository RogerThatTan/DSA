#include<bits/stdc++.h>
using namespace std;
int countCompleteDayPairs(vector<int>& hours) {
        int ans = 0;
        for(int i=0;i<hours.size();i++){
            for(int j=i+1;j<hours.size();j++){
                if((hours[i]+hours[j])%24==0){
                    ans ++;
                }
            }
        }
        return ans;
}
int minimumOperations(vector<int>& nums) {
        int opt = 0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]%3!=0){
                if((nums[i]+1)%3==0 ||(nums[i]-1)%3==0 ) opt++;
            }
        }
        return opt;
}

double minimumAverage(vector<int>& nums) {
        vector<double>avg;
        sort(nums.begin(),nums.end());

        int left = 0; int right = nums.size()-1;
        while(left<right){
            avg.push_back((nums[left]+nums[right])/2.0);
            left++;
            right--;
        }

        return *min_element(avg.begin(),avg.end());

}



int main(){

  int t;
  cin>>t;
  int ans=0;

  while(t--){
    int p,v,t;
    cin>>p>>v>>t;
    if((p+v+t)>=2){
        ans++;
  }
  }

    cout<<ans<<endl;
    return 0;
}