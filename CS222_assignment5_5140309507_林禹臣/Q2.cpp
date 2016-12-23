#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <stack>
#include <algorithm>
using namespace std;


class Solution {
public:
    int calculate(string s) {
        stack <int> nums, operations;
        int num = 0;
        int result = 0;
        int sign = 1;
        for (int i=0;i<s.size();++i) { 
            char c = s[i];
            if (isdigit(c)) {
                num = num * 10 + c - '0';
            }
            else {
                result += sign * num;
                num = 0;
                if (c == '+') sign = 1;
                if (c == '-') sign = -1;
                if (c == '(') {
                    nums.push(result);
                    operations.push(sign);
                    result = 0;
                    sign = 1;
                }
                if (c == ')' && operations.size()) {
                    result = operations.top() * result + nums.top();
                    operations.pop(); nums.pop();
                }
            }
        }
        result += sign * num;
        return result;
    }
};

int main(int argc, char const *argv[])
{
    Solution s = Solution();
    s.calculate("(1+2)-3");
    return 0;
}