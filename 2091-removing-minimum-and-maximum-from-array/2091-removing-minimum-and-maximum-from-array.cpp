class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size()-1;
        int mini= *min_element(nums.begin(),nums.end());
        int maxi= *max_element(nums.begin(),nums.end());
        int miniI=-1;
        int maxiI=-1;
        for(int i=0;i<nums.size();i++){
           if(mini==nums[i])miniI=i;
           if(maxi==nums[i])maxiI=i;     
        }
        if(n==0)return 1;
        int leftS=(miniI>=maxiI)? miniI+1:maxiI+1;
        int rightS=(maxiI<=miniI)? n-maxiI+1:n-miniI+1 ;
        int bothS=(maxiI<=miniI)? maxiI+1+(n-miniI+1): miniI+1+(n-maxiI+1);
        return min({leftS,rightS,bothS});
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna