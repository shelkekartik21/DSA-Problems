int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int ans = INT_MAX;
        int dist = INT_MAX;
        int idx = 0;
        
        for(auto point : points){
            if(point[0] == x || point[1] == y){
                int mDist = abs(x - point[0]) + abs(y - point[1]);
                if(mDist < dist){
                    dist = mDist;
                    ans = idx;
                }
            }
            idx++;
        }
        return ans == INT_MAX ? -1 : ans;
    }