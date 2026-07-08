class Solution {
public:
int i=-1;
    int fib(int n) {
      if(n==0)return 0;
      if(n==1)return 1;
      int a=n-1;
      int b=n-2;
      int ans=fib(a)+fib(b);
      return ans;
    }
};