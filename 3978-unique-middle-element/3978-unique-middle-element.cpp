class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums.size();
        int mid=n/2;
        int target=nums[mid];
        for(int i=0;i<n;i++){
            if(nums[i]==target && i!=mid){return false;}
        }
        return true;
    }
};