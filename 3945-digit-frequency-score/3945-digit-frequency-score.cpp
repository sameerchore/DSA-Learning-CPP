class Solution {
public:
    int digitFrequencyScore(int n) {
        long long sum=0;
        long long temp=n;
        while(temp>0){
            sum+=temp%10;
            temp/=10;
        }
        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna