#include <bits/stdc++.h>

using namespace std;

int minSwaps(vector<int> arr)
{
    int n = arr.size();
    int ans = 0;
    pair<int, int> ap[n];
    for (int i = 0; i < n; i++)
    {
        ap[i].first = arr[i];
        ap[i].second = i;
    }
    sort(ap, ap + n);
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == true or ap[i].second == i)
        {
            continue;
        }
        int node = i;
        int cycle = 0;
        while (!visited[node])
        {
            visited[i] = true;
            int next_node = ap[node].second;
            node = next_node;
            cycle += 1;
        }
        ans += (cycle - 1);
    }
    return ans;
}

int main()
{
    vector<int> arr{5, 4, 3, 2, 1};

    auto result = minSwaps(arr);

    cout << result << " n";
    return 0;
}