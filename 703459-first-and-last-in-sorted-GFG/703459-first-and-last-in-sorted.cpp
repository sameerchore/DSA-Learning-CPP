class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        int s=0;
        int e=arr.size()-1;
        int fi=-1;
        int lst=-1;
        while(s<=e){
            if(arr[s]==x){fi=s;}
            else{s++;}
            if(arr[e]==x){lst=e;}
            else{e--;}
            
            if(arr[s]==x && arr[e]==x){return {s,e};}
        }
        return {fi,lst};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna