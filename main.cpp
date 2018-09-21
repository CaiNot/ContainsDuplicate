#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size() - 1;
        for (int i = 0; i < len; i++) {
            if (nums[i] == nums[i + 1])
                return true;
        }
        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<int> nums = {1, 2, 3, 4, 1};
    Solution s;

    cout << s.containsDuplicate(nums) << endl;
    return 0;
}