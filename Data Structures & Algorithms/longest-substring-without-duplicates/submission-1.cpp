class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> mpp;
        int l=0;
        int ans=0;

        for(int r=0;r<s.length();r++){
            while(mpp.find(s[r])!=mpp.end()){
                mpp.erase(s[l]);
                l++;
            }
            mpp.insert(s[r]);
            ans=max(ans,r-l+1);
        }

        return ans;
    }
};
