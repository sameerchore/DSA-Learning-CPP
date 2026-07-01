class Solution {
public:
    bool detectCapitalUse(string word) {
        // A=65 Z=90
        int n=word.length();
        int index=0;
        int capsCnt=0;
        if(n==1)return true;
        for(int i=0;i<word.length();i++){
            if(word[i]>=64 && word[i]<=91){capsCnt++;index=i;}
        }
        if(n==capsCnt || capsCnt==0)return true;
        else if(capsCnt==1 && index==0)return true;
        return false;
    }
};