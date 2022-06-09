class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        vector<int> n0;
        vector<int> n1;
        vector<int> diff;
        unordered_map<int, int> mp; //Map which maintains the earliest occurence of a difference and its index
        int ans,num0,num1;
        ans=num0=num1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                num0++;
            if(nums[i]==1)
                num1++;
            n0.push_back(num0);
            n1.push_back(num1);
            int diffe = n0[i]-n1[i];
            diff.push_back(diffe);
            if(mp.find(diffe) == mp.end())
                mp[diffe] = i;
            else
                ans = max(ans,i-mp[diffe]);
            if(diffe == 0)
                ans = max(ans, i+1);
        }
        return ans;
    }
};