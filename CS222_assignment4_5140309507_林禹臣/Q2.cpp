#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>

using namespace std;
int characterReplacement(string s, int k) {
    int L = 0, H = 0, counter[91] = {};
    while (H < s.size()) {
        counter[s[H++]]++;
        int t = *max_element(counter+25, counter+91);
        if (H- L - t > k)
            counter[s[L++]]--;
        
    }
    return H - L;
}
int main(){
	cout<<characterReplacement("AABABBA",1)<<endl;
	return 0;
}