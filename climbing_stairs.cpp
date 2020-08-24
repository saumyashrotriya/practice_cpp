#include<iostream>

class Solution {
public:
    int mk(int n)
    {
         if(n<0) return 0;
         if(n==0) return 1;
         return mk(n-1)+mk(n-2);
    }
    int climbStairs(int n) {
        return mk(n);
    }
};
