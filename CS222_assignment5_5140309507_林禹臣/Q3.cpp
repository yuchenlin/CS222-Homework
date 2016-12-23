#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int> > state(m+1,vector<int>(n+1,0));
        
        for (int s_ind = 0; s_ind< strs.size(); ++s_ind){
        	string s = strs[s_ind];
            int o=0,z=0;
            for (int c_ind = 0; c_ind < s.size(); ++c_ind){
            	char c = s[c_ind];
                if(c=='1')
                    o++;
                else 
                    z++;
            }
            for (int i = m; i >= z; i--){
                for (int j = n; j >= o; j--){
                    state[i][j] = max(state[i][j],1+state[i-z][j-o]);
                }
            }
        }
        return state[m][n];
    }
};



int main(int argc, char const *argv[])
{
	
	return 0;
}