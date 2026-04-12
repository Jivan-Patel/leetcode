#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int countDigitOccurrences(vector<int> &nums, int digit)
    {
        int count = 0;
        for (int num : nums)
        {
            while (num > 0)
            {
                if (num % 10 == digit)
                    count++;
                num /= 10;
            }
        }
        return count;
    }
};

int main()
{

    Solution solution;
    vector<int> v1 = {12, 54, 32, 22};
    cout << solution.countDigitOccurrences(v1, 2) << endl;

    return 0;
}