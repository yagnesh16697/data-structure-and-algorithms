#include <bits/stdc++.h>

using namespace std;

bool isSubset(string s1, string s2)
{
    int i = s1.length() - 1;
    int j = s2.length() - 1;
    while (i >= 0 and j >= 0)
    {
        if (s2[j] == s1[i])
        {
            i--;
            j--;
        }
        else
        {
            i--;
        }
    }
    return j == -1 ? true : false;
}

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    cout << isSubset(str1, str2);
    return 0;
}