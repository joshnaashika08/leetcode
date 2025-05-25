class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int min=INT_MAX;
        vector<vector<int>> result;
        for (int i = 1; i < arr.size(); ++i) {
            int diff = arr[i] - arr[i - 1];
            if (diff < min) {
                min = diff;
                result.clear(); 
            }
            if (diff == min) {
                result.push_back({arr[i - 1], arr[i]});
            }
        }

        return result;


    }
};