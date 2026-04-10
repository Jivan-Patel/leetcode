#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int minAbsoluteDifference(vector<int> &nums)
    {
        int len = nums.size();
        int minDiff = len;
        for (int i = 0; i < len; i++)
        {
            if (nums[i] != 1)
                continue;
            for (int j = 0; j < len; j++)
            {
                if (i != j && nums[j] == 2)
                {
                    minDiff = min(minDiff, abs(i - j));
                }
            }
        }
        return minDiff != len ? minDiff : -1;
    }
};

int main()
{

    Solution solution;
    vector v1 = {1, 0, 0, 2, 0, 1};
    vector v2 = {1, 0, 1, 0};

    cout << solution.minAbsoluteDifference(v1) << endl;
    cout << solution.minAbsoluteDifference(v2) << endl;

    return 0;
}