class Solution {
  public:
    double findMedian(vector<int> &arr) {
        int n=arr.size()-1;
        int rem=(n+1)%2;
        int mid=n/2;
        sort(arr.begin(),arr.end());
        double res=0;
        if(rem==0){
            res=(arr[mid]+arr[mid+1]);
            res/=2;
        }
        else{
            res=arr[mid];
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna