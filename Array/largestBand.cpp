#include <bits/stdc++.h>

using namespace std;

int largestBand(vector<int> arr)
{
    int n = arr.size();
    unordered_set<int> s;
    int largest = 0;
    for (auto a : arr)
    {
        s.insert(a);
    }
    for (auto element : s)
    {
        int parent = element - 1;
        if (s.find(parent) == s.end())
        {
            int cnt = 1;
            int next_no = element + 1;
            while (s.find(next_no) != s.end())
            {
                next_no++;
                cnt++;
            }
            largest = max(cnt, largest);
        }
    }
    return largest;
}

int main()
{
    vector<int> arr{5, 6, 1, 2, 3, 4, 5, 4, 3, 2, 0, 1, 2, 3, -2, 4};

    auto result = largestBand(arr);

    cout << result;
    return 0;
}