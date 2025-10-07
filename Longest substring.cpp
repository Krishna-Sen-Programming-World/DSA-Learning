#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    vector<int> mp(256, -1); // Vector to store the last seen index of all ASCII
    int sz = 0;              // Variable to track the maximum length of unique substring
    int c;                   // Current character
    int t = 0;               // Tail index of the current substring

	//Note:- i to t is the window size
    // Iterate through the string using index i
    for (int i = 0, j = s.length(); i < j; i++) {
        c = s[i];            // Current character
        
        // If the character has been seen and is within the current substring
        if (mp[c] != -1 && mp[c] >= t) {
            t = mp[c] + 1;  // Move the tail pointer
        }

        mp[c] = i;          // Update the last seen index of the character
        sz = max(sz, (i - t + 1)); // Update the size of the longest substring found
    }

    return sz;              // Return the maximum length found
}

int main() {
    cout << lengthOfLongestSubstring("abba"); // Test the function
    return 0;
}
