/*
Problem: Longest Substring Without Repeating Characters
Approach: Sliding Window + Hash Set

Time Complexity: O(n)
Space Complexity: O(1)

Author: Lokesh Goel
*/

#include <iostream>
#include <unordered_set>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_set<char> window;
    int left = 0, maxLen = 0;

    for (int right = 0; right < s.size(); right++) {

        // Remove duplicates
        while (window.count(s[right])) {
            window.erase(s[left]);
            left++;
        }

        window.insert(s[right]);
        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}
