#include <bits/stdc++.h>

using namespace std;

vector<int> sumPair(vector<int> arr, int S)
{
    unordered_set<int> s;
    vector<int> result;
    for (int i = 0; i < arr.size(); i++)
    {
        int x = S - arr[i];
        if (s.find(x) != s.end())
        {
            result.push_back(x);
            result.push_back(arr[i]);
            return result;
        }
        else
        {
            s.insert(arr[i]);
        }
    }
    return result;
}

int main()
{
    vector<int> arr{10, 5, 3, 2, -6, 9, 11};
    int S = 6;
    auto p = sumPair(arr, S);

    if (p.size() == 0)
    {
        cout << "No pairs";
    }
    else
    {
        cout << p[0] << " " << p[1];
    }

    return 0;
}