// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int n=nums.size();
//         if(n==1)return ;
//         for(int i=1;i<n;i++){
//             for(int j=1;j<n;j++){
//             if(nums[i-1]==0){
//                 nums[i-1]=nums[i];
//             }
//             }
//             nums[n-1]=0;
//         }
//     }
// };


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c=0;
        int n=nums.size();
        if(n==1)return ;
        for(int i=n-1;i>=0;i--){
            if(nums[i]==0){
                nums.erase(nums.begin()+i);
                nums.push_back(0);
                }

        }
    }
};

