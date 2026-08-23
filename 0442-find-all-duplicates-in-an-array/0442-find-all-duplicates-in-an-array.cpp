class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        unordered_set<int>hash(nums.begin(),nums.end());
        for(int x:nums){
            if(hash.find(x)!=hash.end()){
                hash.erase(x);
            }
            else{ans.push_back(x);}
        }   
        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna