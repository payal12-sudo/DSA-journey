#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& v, int target) {

        int l = 0;
        int h = v.size() - 1;
        int mid;
        int ans = v.size();

        while(l <= h) {

            mid = l + (h - l) / 2;

            if(v[mid] >= target) {
                ans = mid;
                h = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        return ans;
    }
};

int main() {

    vector<int> v = {1, 2, 4, 6, 8, 12, 15, 19, 24};

    int target = 4;

    Solution s;

    int result = s.searchInsert(v, target);

    cout << result << endl;

    return 0;
}