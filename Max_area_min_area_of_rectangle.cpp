#Question link  https://www.hackerearth.com/problem/algorithm/too-lazy-to-name-the-question-ii/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> points(n);
    set<pair<int, int>> point_check;

    for (int i = 0; i < n; i++)
    {
        cin >> points[i].first >> points[i].second;
         point_check.insert(points[i]);
    }
    // or can use this but use it only when you donot initialize the vector with size
    // for (int i = 0; i < n; i++)
    // { int x, y;
    //     cin >> x >> y;
    //points.push_back({x, y});
    //point_check.insert({x, y});
    // }

    int ar_min = INT_MAX, ar_max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (points[i].first == points[j].first || points[i].second == points[j].second)
            {
                continue;
            }
            int x1 = points[i].first, y1 = points[i].second;
            int x2 = points[j].first, y2 = points[j].second;
            if (point_check.count({x1, y2}) && point_check.count({x2, y1}))
            {
                int area = abs((x1 - x2) * (y1 - y2));
                ar_min = min(ar_min, area);
                ar_max = max(ar_max, area);
            }
        }
    }
    if (ar_min == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ar_max - ar_min << endl;
    }
}
