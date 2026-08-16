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

//Optimal appr:
//Use vector instead of map.

class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> occurrences;
        vector<int> ans;

        // Store indices where x occurs
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == x) {
                occurrences.push_back(i);
            }
        }

        // Answer each query
        for (int q : queries) {
            if (q <= occurrences.size()) {
                ans.push_back(occurrences[q - 1]);
            } else {
                ans.push_back(-1);
            }
        }

        return ans;
    }
};