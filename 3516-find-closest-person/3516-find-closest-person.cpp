class Solution {
public:
    int findClosest(int x, int y, int z) {
       if(abs(z-x)<abs(z-y))return 1;
       else if(abs(z-x)>abs(z-y))return 2;
       return 0; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna