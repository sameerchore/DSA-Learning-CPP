class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>hash(nums.begin(),nums.end());
        int i=1;
        for(int x:hash){
            if(hash.find(k*i)!=hash.end()){i++;}
            else{break;}
        }
        return k*i;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna