#include <bits/stdc++.h>

using namespace std;

void subsequence(string s, string o, vector<string> &v)
{
    if (s.size() == 0)
    {
        v.push_back(o);
        return;
    }
    else
    {
        char ch = s[0];
        string reduced_input = s.substr(1);
        subsequence(reduced_input, o + ch, v);
        subsequence(reduced_input, o, v);
    }
}

bool compare(string s1, string s2)
{
    if (s1.length() == s2.length())
    {
        return s1 < s2;
    }
    else
    {
        return s1.length() < s2.length();
    }
}

int main()
{
    string s;
    cin >> s;
    vector<string> v;
    string output = "";
    subsequence(s, output, v);
    sort(v.begin(), v.end(), compare);
    for (auto e : v)
    {
        cout << e << endl;
    }
    return 0;
}