/*
Problem: First Non-Repeating Character
Approach: HashMap frequency + linear scan
Time Complexity: O(n)
Space Complexity: O(n)
*/

/*
  APPROACH:
Count frequency using hashmap
Traverse string again
Return first character with freq = 1
*/

#include <iostream>
#include <unordered_map>
using namespace std;

char firstNonRepeating(string s) {
    unordered_map<char, int> freq;

    // Count frequency
    for (char c : s) {
        freq[c]++;
    }

    // Find first non-repeating
    for (char c : s) {
        if (freq[c] == 1) {
            return c;
        }
    }

    return '#'; // if none exists
}

int main() {
    string s = "aabccdeff";
    cout << firstNonRepeating(s);
    return 0;
}
