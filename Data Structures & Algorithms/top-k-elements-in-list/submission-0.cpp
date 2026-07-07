class Solution {
public:

    typedef pair<int,int> P;

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(int &it:nums){
            mpp[it]++;
        }

        priority_queue<P,vector<P>,greater<P>> pq;
        for(auto [val,f]:mpp){
            if(pq.size()<k){
                pq.push({f,val});
            }
            else {
                if(pq.top().first<f){
                    pq.pop();
                    pq.push({f,val});
                }
            }
        }

        vector<int> ans;

        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};
