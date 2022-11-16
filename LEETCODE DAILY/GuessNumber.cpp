#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    return 0;
}

/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

int guess(int n){
    return n;
}  //pre defined api in LC for this qn
class Solution
{
public:
    int guessNumber(int n)
    {

        int mid, guessn;
        int l = 1, r = n;

        while (l <= r)
        {
            mid = r - (r- l) / 2;
         guessn = guess(mid);
            if (guessn == 1)
                l = mid + 1;
            else if (guessn == -1)
                r = mid - 1;
            else
                return mid;
        }

        return mid;
    }
};