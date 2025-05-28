class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int res = 0;
        int n = heights.size();
        vector<int> lfs(n);
        vector<int> rfs(n, n);  // \U0001f527 FIXED here
        stack<int> s;

        for (int i = 0; i < n; i++) {
            while (!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop();
            }
            lfs[i] = s.empty() ? 0 : s.top() + 1;
            s.push(i);
        }

        while (!s.empty()) s.pop();

        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop();
            }
            rfs[i] = s.empty() ? n : s.top();  // ✅ rfs is exclusive
            s.push(i);
        }

        for (int i = 0; i < n; i++) {
            res = max(res, heights[i] * (rfs[i] - lfs[i]));
        }

        return res;
    }
};
