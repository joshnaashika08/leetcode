class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        if (start > destination) 
            swap(start, destination);

        int clockwise = 0;
        int total = 0;
        for (int i = 0; i < distance.size();i++) {
            total += distance[i];
            if (i >= start && i < destination) {
                clockwise += distance[i];
            }
        }
        return min(clockwise, total - clockwise);

    }
};