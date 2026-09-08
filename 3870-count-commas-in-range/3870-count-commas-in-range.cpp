class Solution {
public:
    int countCommas(int n) {

        int commaCnt = 0;
        for (int i = 1000; i <= n; i++) {
            int cnt = log10(abs(i)) + 1;
            if (cnt % 3 == 0 && cnt > 3) {
                commaCnt += cnt / 3;
                commaCnt--;

            } else {
                commaCnt += cnt / 3;
            }
        }
        return commaCnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna