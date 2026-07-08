class Solution {
public:
    string longestCommonPrefix(vector<string>& nums) {
        if(nums.empty()) return "";

        sort(nums.begin(),nums.end());

        string left=nums[0];
        string right=nums[nums.size()-1];
        
        string ans="";

        int minLength=min(left.size(),right.size());

        for(int i=0;i<minLength;i++){
            
            if(left[i]!=right[i]) break;

            ans+=left[i];
        }

        return ans;
    }
};