class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int i=nums.size()-1;
        int j=nums.size();;
        nums.resize(2*nums.size());
        while(i>=0){
            nums[j]=nums[i];
            j++;i--;
        }
        return nums;
    }
};