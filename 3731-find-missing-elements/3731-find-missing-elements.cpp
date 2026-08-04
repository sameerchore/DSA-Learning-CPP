class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       vector<int>ans;
       set<int>hash(nums.begin(),nums.end());
       int s=*min_element(nums.begin(),nums.end());
       int e=*max_element(nums.begin(),nums.end());
       for(int i=s;i<=e;i++){
        if(hash.find(i)==hash.end()){ans.push_back(i);}
       }
       return ans; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna