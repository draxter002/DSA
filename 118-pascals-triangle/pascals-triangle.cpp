class Solution {
public:
    vector<int> grows(int n) {
        vector<int> row;
        row.push_back(1);
        long long q = 1;
        for (int i = 1; i < n; i++) {
            q = q * (n - i);
            q = q / i;
            row.push_back(q);
        }
        return row;
    }
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ans;

        for (int i = 1; i <=numRows; i++) {

            ans.push_back(grows(i));
        }

        return ans;
    }
};