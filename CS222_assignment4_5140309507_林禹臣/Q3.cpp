#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;


bool isSelfCrossing(vector<int>& x) {
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
	for (int idx=0;idx<x.size();++idx) {
		int i = x[idx];
		f = e; e = d; d = c; c = b; b = a; a = i;
		if (d >= b && b > 0 && (a >= c || ((c - e) <= a && c >= e && (d - f) <= b)))
			return true;
	}
	return false;
}

int main(){
	vector<int> x;
	//add test data
	isSelfCrossing(x);
	return 0;
}	