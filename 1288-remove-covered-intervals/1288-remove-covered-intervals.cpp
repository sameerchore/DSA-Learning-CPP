class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        int s=0;
        int f=1;
        int cnt=1;

        while(f<n){
            int x=intervals[s][0];
            int y=intervals[s][1];
            int a=intervals[f][0];
            int b=intervals[f][1];
            if(x<=a && b<=y){

                f++;
                }
            else if(x>=a && b>=y){
                intervals[s][1]=intervals[f][1];
                f++;}
            else{cnt++;s=f;f++;}
        } 
        return cnt;
    }
};