class Solution {
public:
    int reverseDegree(string s) {
        long long tot=0;
        int i=1;
        for(char ch:s){
            int rev=26-(ch-'a');
            tot+=rev*i;
            i++;
        }
        return tot;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna