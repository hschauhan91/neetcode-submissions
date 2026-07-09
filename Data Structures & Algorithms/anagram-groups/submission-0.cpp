class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mpp;
        
        for(auto x:strs){
            string word=x;
            sort(word.begin(),word.end());
            mpp[word].push_back(x);
        }

        vector<vector<string>> nums;

        for(auto it:mpp){
            nums.push_back(it.second);
        }

        return nums;
    }
};
