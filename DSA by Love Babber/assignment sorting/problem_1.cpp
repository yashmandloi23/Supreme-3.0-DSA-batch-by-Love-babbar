#include <iostream>
#include <vector>

using namespace std;

int unique_pair(vector<int> &nums, int k)
{
    int count = 0;
    int l = 0;
    int n = nums.size();
    int h = n - 1;
    while (l <= h)
    {
        if (nums[l] == nums[h])
        {
            count++;
        }
        l++;
        h--;
    }
}