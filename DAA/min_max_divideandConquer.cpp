#include <iostream>
#include <vector>
#include<fstream>
// #include <bits/stdc++.h>
using namespace std;

pair<double, double> minmax(vector<double> v, int s, int e)
{
    if (s == e)
        return {v[s], v[s]};

    else if (s - e == 1)
    {
        return {max(v[s], v[e]), min(v[s], v[e])};
    }

    else
    {
        int mid = s - (s - e) / 2;

        pair<double, double> p1 = minmax(v, s, mid);
        pair<double, double> p2 = minmax(v, mid + 1, e);

        pair<double, double> res = {max(p1.first, p2.first), min(p1.second, p2.second)};
        return res;
    }
}

int main()
{
    // File pointer
    fstream fin;
  
    // Open an existing file
    fin.open("reportcard.csv", ios::in);



    vector<double> v = {2, 6, 64, 0, 5, 880, 8798, 445, 2, 66, -888};

    //    pair<double,double> res = minmax(v, 0, v.size() - 1);
    // cout<<res.first<<" Max element";
    // cout<<res.second<<" Min element";
    return 0;
}