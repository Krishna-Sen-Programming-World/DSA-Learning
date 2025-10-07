// leetcode.com/problems/find-the-original-array-of-prefix-xor/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findArray(vector<int>& prefix) {
        vector<int> ans(prefix.size());
        ans[0]=prefix[0];
        int tmp=prefix[0];
        int tmp1=0;
        for(int i=1;i<prefix.size();i++){
            tmp1=tmp^prefix[i];
            ans[i]=tmp1;
            tmp=tmp^tmp1;
        }
        return ans;
    }
};
// Or
class Solution {
 public:
  vector<int> findArray(vector<int>& prefix) {
    ans[0] = prefix[0];
    int temp = prefix[0];
    for (int i = 1; i < prefix.size(); i++) {
      prefix[i] = temp ^ prefix[i];
      temp = temp ^ prefix[i];
    }
    return prefix;
  }
};
