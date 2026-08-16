class Solution {
  public:
    double getAngle(string& s) {
        double hr=(s[0]-'0')*10+(s[1]-'0');
        if(hr>=12){hr-=12;}
        double min=(s[3]-'0')*10+(s[4]-'0');
        
        double hrAngle=hr*30+0.5*min;
        double minAngle=min*6;
        double angle=abs(hrAngle-minAngle);
        if(angle<360-angle){return angle;}
        return 360-angle;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna