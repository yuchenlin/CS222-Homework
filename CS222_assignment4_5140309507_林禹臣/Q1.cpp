#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

int minMoves2(vector<int>& nums) {
    int median_index = (int)((nums.size() - 1) / 2);
    int sum = 0;
    nth_element(nums.begin(), nums.begin() + median_index, nums.end()); //O(N)
    for (int i=0;i<nums.size();++i)
        sum += abs(nums[i] - nums[median_index]);
    return sum;
}
int main(){
	vector<int> nums;
	minMoves2(nums);
	return 0;
}