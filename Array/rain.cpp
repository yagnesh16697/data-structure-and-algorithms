#include <bits/stdc++.h>

using namespace std;

int rain(vector<int> arr)
{
    int n = arr.size();
    vector<int> leftArr(n, 0), rightArr(n, 0);
    leftArr[0] = arr[0];
    rightArr[n - 1] = arr[n - 1];
    if (n <= 2)
    {
        return 0;
    }
    for (int i = 1; i < n; i++)
    {
        leftArr[i] = max(leftArr[i - 1], arr[i]);
        rightArr[n - i - 1] = max(rightArr[n - i], arr[n - i - 1]);
    }
    int totalWater = 0;

    for (int i = 0; i < n; i++)
    {
        totalWater += min(leftArr[i], rightArr[i]) - arr[i];
    }

    return totalWater;
}

int main()
{
    vector<int> arr{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

    auto result = rain(arr);

    cout << result;
    return 0;
}