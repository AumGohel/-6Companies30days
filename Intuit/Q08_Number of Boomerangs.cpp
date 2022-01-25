class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int result = 0;
        unordered_map<int, int> umap;
        for(int i=0; i<points.size() ; i++){
            for(int j=0 ; j<points.size() ; j++){
                int d = pow(points[j][1] - points[i][1], 2) + pow(points[j][0] - points[i][0], 2);
                result += 2 * umap[d]++;
            }
            umap.clear();
        }
        return result;
    }
};
