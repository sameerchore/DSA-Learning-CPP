class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mini= *min_element(nums1.begin(),nums1.end());
        int n=nums1.size();
        bool type=1;
        
        if((mini)%2==0){
        for(int i=0;i<n;i++){
            if(nums1[i]%2!=0 && nums1[i]!=mini)return false;
        }
        }
        return true;
    }
};






// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna