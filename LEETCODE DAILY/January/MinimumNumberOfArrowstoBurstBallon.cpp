#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

static bool cmp(vector<int> &a, vector<int> &b){
    return a[1]<b[1];
}
    int findMinArrowShots(vector<vector<int>>& points) {
            if(points.size()==0) return 0;

            sort(points.begin(),points.end(),cmp);

            int arrows = 1;
            int last = points[0][1];


            for(int i=1;i<points.size();i++){
                if(points[i][0]>last){
                    arrows++;
                    last= points[i][1];
                }
            }
            return arrows;
    }

int findMinArrowShots(vector<pair<int, int>> &points)
{
    if (points.size() == 0)
        return 0;
    sort(points.begin(), points.end(), [](pair<int, int> p1, pair<int, int> p2)
         { return p1.first == p2.first ? p1.second < p2.second : p1.first < p2.first; });
    int res = 1;
    int end = points[0].second;
    for (int i = 1; i < points.size(); i++)
    {
        if (points[i].first > end)
        {
            res++;
            end = points[i].second;
        }
        else
        {
            end = min(end, points[i].second);
        }
    }
    return res;
}
int main()
{

    return 0;
}