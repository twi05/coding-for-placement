#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    return 0;
}

class MedianFinder
{
public:
    vector<double> v;

    MedianFinder()
    {
    }

    void addNum(int num)
    {
        v.push_back(num);
    }

    double findMedian()
    {
        sort(v.begin(),v.end());
        int size = v.size();
        int mid = 0;
        if (size % 2 == 0)
        {
            mid = (size / 2 - 1);
            return double((v[mid] + v[mid + 1]) / 2);
        }
        else
        {
            mid = size / 2;
            return v[mid];
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */