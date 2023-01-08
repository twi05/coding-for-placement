#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// without using atan2, by using string
int maxPoints(vector<vector<int>> &points)
{

    int n = points.size();

    if (points.size() == 1)
        return 1;
    int mx = 0;

    for (int i = 0; i < n; i++) // p1
    {
        unordered_map<string, int> m;
        for (int j = 0; j < n; j++) // p2
        {
            if (i == j)
                continue;
            int dx = points[i][0] - points[j][0];
            int dy = points[i][1] - points[j][1];
            int gcdxy = __gcd(dx, dy);
            dx /= gcdxy;
            dy /= gcdxy;

            string s = to_string(dy) + "_" + to_string(dx);

            m[s]++;
        }
        for (auto e : m)
        {
            mx = max(mx, e.second + 1);
        }
    }
    return mx;
}

// O(n2)
int maxPoints(vector<vector<int>> &points)
{

    int n = points.size();

    if (points.size() == 1)
        return 1;
    int mx = 0;

    for (int i = 0; i < n; i++) // p1
    {
        unordered_map<double, int> m;
        for (int j = 0; j < n; j++) // p2
        {
            if (i == j)
                continue;
            int dx = points[i][0] - points[j][0];
            int dy = points[i][1] - points[j][1];

            double theta = atan2(dy, dx);

            m[theta]++;
        }
        for (auto e : m)
        {
            mx = max(mx, e.second + 1);
        }
    }

    return mx;
}

// O(n^3)
int maxPoints2(vector<vector<int>> &points)
{

    int n = points.size();

    if (points.size() == 1)
        return 1;
    int mx = 0;
    for (int i = 0; i < n; i++) // p1
    {

        for (int j = i + 1; j < n; j++) // p2
        {
            int count = 2;
            int dx = points[i][0] - points[j][0];
            int dy = points[i][1] - points[j][1];

            for (int k = 0; k < n; k++)
            {
                if (k == i || k == j)
                    continue;
                {
                    int dx_ = points[i][0] - points[k][0];
                    int dy_ = points[i][1] - points[k][1];
                    if (dx_ * dy == dy_ * dx)
                        count++;
                }
            }
            mx = max(mx, count);
        }
    }
    return mx;
}

double slopepoints(int x1, int y1, int x2, int y2)
{

    if (x2 - x1 == 0)
        return double(INT_MAX);

    return (double(y2 - y1) / double(x2 - x1));
}
double constantcal(int x1, int y1, double slope)
{
    return double(y1 - (slope * x1));
}
int maxPoints_old(vector<vector<int>> &points)
{
    map<pair<double, double>, int> m;
    double slope, c;
    int mx = 0;
    int i = 0;

    for (int k = 0; k < points.size(); k++)
    {

        for (auto ele : points)
        {
            if (ele[0] == points[i][0] && ele[1] == points[i][1])
                continue;

            slope = slopepoints(points[i][0], points[i][1], ele[0], ele[1]);
            c = constantcal(points[i][0], points[i][1], slope);
            cout << "slope : " << slope << " c: " << c << endl;
            m[{slope, c}]++;
            mx = max(mx, m[{slope, c}]);
        }
        for (i = 0; i < points.size(); i++)
        {
            for (auto ele : points)
            {
                if (ele[0] == points[i][0] && ele[1] == points[i][1])
                    continue;

                slope = slopepoints(points[i][0], points[i][1], ele[0], ele[1]);
                c = constantcal(ele[0], ele[1], slope);
                if (!m[{slope, c}])
                    m[{slope, c}]++;
                mx = max(mx, m[{slope, c}]);
            }
        }
    }

    return mx + 1;
}

int main()
{
    vector<vector<int>> v = {{0, 0}, {4, 5}, {7, 8}, {8, 9}, {5, 6}, {4, 4}, {1, 1}};
    cout << maxPoints(v);
    return 0;
}