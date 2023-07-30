#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> triplets(vector<int> arr, int tragetSum)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> result;
    int n = arr.size();
    for (int i = 0; i < arr.size(); i++)
    {
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int current_sum = arr[i];
            current_sum += arr[j];
            current_sum += arr[k];
            if (current_sum == tragetSum)
            {
                result.push_back({arr[i], arr[j], arr[k]});
                j++;
                k--;
            }
            else if (current_sum > tragetSum)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }

    return result;
}

int main()
{
    vector<int> arr{10, 5, 3, 2, -6, 9, 11};
    int S = 18;
    auto result = triplets(arr, S);

    for (auto v : result)
    {
        for (auto no : v)
        {
            cout << no << ",";
        }
        cout << endl;
    }
    return 0;
}