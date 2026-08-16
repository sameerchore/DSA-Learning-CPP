class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
      vector<int>res;
      unordered_map<int,int>mp;
      int cnt=1;
      for(int i=0;i<nums.size();i++){
        if(nums[i]==x){
            mp[cnt]=i;
            cnt++;
        }
      }
      for(int i=0;i<queries.size();i++){
        if(mp.find(queries[i])!=mp.end()){
            res.push_back(mp[queries[i]]);
        }
        else{res.push_back(-1);}
      }  
      return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna