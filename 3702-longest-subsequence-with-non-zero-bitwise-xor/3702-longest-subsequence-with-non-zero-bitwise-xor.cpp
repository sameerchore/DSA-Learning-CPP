class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();
        int zor=0;
        int nzero=0;
        for(int r=0;r<n;r++){
            zor^=nums[r];
            if(zor==0 && r==n-1){continue;}
            else{cnt++;}
            if(nums[r]>0)nzero++;
        }
        if(nzero==0)return 0;
        return cnt;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna