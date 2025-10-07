// if size of teh array is n, all elements 1 to n-1 will be thre and 1 element will be repaeted eg n=5 so elements will be 1 2 3 4 4 [Ans = 4]

#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr) 
{
    int ans=arr[0];
	int size=arr.size();
    for(int i=1;i<size;i++){
        ans=ans^arr[i]^i;
    }
    return ans;
}

int main() {
vector<int>a{1,2,3,4,5,5};
   cout<<findDuplicate(a);;
}
//1 to N+1 size, where all element are present (1 to N )& 1 element is repeated
