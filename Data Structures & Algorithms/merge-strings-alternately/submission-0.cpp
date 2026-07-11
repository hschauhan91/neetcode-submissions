class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1=word1.length();
        int n2=word2.length();

        string ans="";
        int l1=0;
        int l2=0;

        for(int i=0;i<min(n1,n2);i++){
            ans+=word1[i];
            l1++;
            ans+=word2[i];
            l2++;
        }

       while(l1<n1){
        ans+=word1[l1];
        l1++;
       }

       while(l2<n2){
        ans+=word2[l2];
        l2++;
       }

        return ans;
    }
};