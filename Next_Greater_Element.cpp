/*
Problem: Next Greater Element
Approach: Monotonic Stack (Right to Left)
Time Complexity: O(n)
Space Complexity: O(n)

Tags: C++, Stack, Monotonic Stack, Arrays

Input:  [4, 5, 2, 10]
Output: [5, 10, 10, -1]

Input:  [3, 2, 1]
Output: [-1, -1, -1]
*/

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreaterElement(vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        result[i] = st.empty() ? -1 : st.top();
        st.push(arr[i]);
    }

    return result;
}
