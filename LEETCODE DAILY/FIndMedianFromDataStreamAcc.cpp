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
    priority_queue<int> maxheap;
    priority_queue<int, vector<int>, greater<int>> minheap;

    MedianFinder()
    {
    }

    void addNum(int num)
    {
        int lsize = maxheap.size();
        int rsize = minheap.size();

        if (lsize == 0)
            maxheap.push(num);

        if (lsize == rsize)
        {
            if (num < minheap.top())
                minheap.push(num);
            else
            {
                int temp = minheap.top();
                minheap.pop();
                maxheap.push(num);
                maxheap.push(temp);
            }
        }
        else
        {
            if (minheap.size() == 0)
            {
                if (num > maxheap.top())
                    minheap.push(num);
                else
                {
                    int temp = maxheap.top();
                    maxheap.pop();
                    maxheap.push(num);
                    minheap.push(temp);
                }
            }
            else if (num >= minheap.top())
            {
                minheap.push(num);
            }
            else
            {
                if (num < maxheap.top())
                {
                    int temp = maxheap.top();
                    minheap.push(temp);
                    maxheap.pop();
                    maxheap.push(num);
                }
                else
                    minheap.push(num);
            }
        }
    }

    double findMedian()
    {
        int lsize = maxheap.size();
        int rsize = minheap.size();

        if(lsize>rsize)
        return double(maxheap.top());
        else
        return (double(maxheap.top()) + double(minheap.top()))/2;
    }

};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
