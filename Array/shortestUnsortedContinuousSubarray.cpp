class Solution
{
public:
    int findUnsortedSubarray(vector<int> &nums)
    {
        vector<int> sortedNums(nums);
        sort(nums.begin(), nums.end());
        int i = 0;
        int n = sortedNums.size();
        while (i < n && nums[i] == sortedNums[i])
            i++;
        int j = sortedNums.size() - 1;
        while (j >= 0 && nums[j] == sortedNums[j])
            j--;
        if (i == n)
            return 0;
        return j - i + 1;
    }
};