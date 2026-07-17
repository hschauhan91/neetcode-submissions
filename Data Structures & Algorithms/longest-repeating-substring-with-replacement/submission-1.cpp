class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mpp;

        int res=0;
        int l=0;
        int maxi=0;

        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
            maxi=max(maxi,mpp[s[i]]);

            while((i-l+1)-maxi>k){
                mpp[s[l]]--;
                l++;
            }

            res=max(res,i-l+1);
        }

        return res;
    }
};
