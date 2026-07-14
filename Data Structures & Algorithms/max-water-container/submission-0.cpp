class Solution {
public:
    int maxArea(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int area=0;

        while(left<right){
            int h=min(nums[left],nums[right]);
            int len=right-left;
            int temp=len*h;
            area=max(area,temp);

            if(nums[left]<nums[right]){
                left++;
            }
            else right--;
        }

        return area;
    }
};
