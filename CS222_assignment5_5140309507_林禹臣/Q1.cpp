#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;

class Solution {
public:
    int integerReplacement(int n) {
        long long t = n;
        int cnt = 0;
        while (t > 1) {
            ++cnt;
            if (t & 1) { // t is odd
                if ((t & 2) && (t != 3))  //t!=3 and t%4==0
                    ++t;
                else 
                    --t;
            } else { // t is even
                t >>= 1; // t /= 2
            }
        }
        return cnt;
    }
};


int main(int argc, char const *argv[])
{
    Solution s = Solution();
    s.integerReplacement(10);
    return 0;
}