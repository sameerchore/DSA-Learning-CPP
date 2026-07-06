//translated using AI
class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {

        //in this sort 0th index pair increses but when 0th index is duplicate then higher 1st index element will at top :
        
        //***call custom sorting***
        
        sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b) 
        {
            if (a[0] == b[0])
            return a[1] > b[1];
            return a[0] < b[0];
        });

        int count = 0, maxEnd = 0;

        for (auto& interval : intervals) {
            if (interval[1] > maxEnd) {
                count++;
                maxEnd = interval[1];
            }
        }

        return count;
    }
};
