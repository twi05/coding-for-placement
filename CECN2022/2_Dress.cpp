/*
Problem
Khushi has x dresses in her wardrobe. She leaves for college in the morning at 8:00 AM and wears a new dress each day. When she is back home, She takes shower and gives her dress to her mother for charity.

Her mother doesn't like her habit and decides :
To buy a new dress for her every ythyth day (i.e. y, 2y, 3y) instead of buying one every day.
She will bring the dress late at night so that Khushi doesn't wear a new dress the next day morning.
Calculate how many consecutive days pass until Khushi runs out for a new dress.

Input Format:
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of 'x' & 'y' which will be separated by a space.
Output Format
The output will be a single integer.

Constraints
1 <= T <= 30
1 ≤ x ≤ 100
2 ≤ y ≤ 100

Input
2
1 2
10 2

Output
1
19

*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        int add = 1;
        int x, y;
        cin >> x >> y;

        while (x > 0)
        {
           
            x--;
            count++;
            if (x == 0)
            {
                cout << count << endl;
                break;
            }

            if (y * add <= count)
            {
                x++;
                add++;
            }
            // cout<<x <<" x "<<count<<endl; 
        }
    }
    return 0;
}



/*Khushi is a mountaineer. She and her friend, Hajra, plan to go trekking. Once they reach their destination, Hajra gives Khushi a task which is to climb all the mountains between points A and B. Khushi can go nn upstrokes and nn downstrokes but the total mountains between the two points are unknown. Khushi happily accepts the challenge.

Note: Upstroke & Downstroke can be in any order. But starting point will always be upstroke and the ending point will always be downstroke.

While packing the bag, Khushi finds difficulty in calculating the total mountains as the mountains can have different heights and different combinations are possible for given upstrokes and downstrokes. Help her to calculate the possible ways the total mountain is possible.

(Consider 1 mountain for 0 upstroke and 0 downstroke)

Input Format
First line will contain T, which represents Total test cases
Second line will contain n, the number of downstrokes and upstrokes
Output Format
For each test case, there will be output total possible arrangements of mountains.
Constraints
1 <= T <= 20
1 <= n <= 1000
'n' over all test cases does not exceed 10^5.
Subtasks
Subtask 1 (30 points) : 1 ≤ n ≤ 10 Subtask 2 (70 points) : original constraints

Sample 1:
Input
Output
2
1
3
1
5
Explanation:
Test Case 2:

Possible Solutions (3 upstrokes & 3 downstrokes):

Go to 3 upstrokes and 3 downstrokes i.e. 1 Mountain.
Go to 2 upstrokes, 1 downstroke, 1 upstroke, and 2 downstrokes i.e. 2 Mountains attached.
Go to 2 upstrokes, 2 downstrokes, 1 upstroke, and 1 downstroke i.e. 2 Mountains with different heights.
Go to 1 upstroke, 1 downstroke, 2 upstrokes, and 2 downstrokes i.e.2 Mountains with different heights.
Go to 1 upstroke, 1 downstroke, 1 upstroke, 1 downstroke,1 upstroke, and 1 downstroke i.e. 3 mountains of same size.
accepted
Accepted
1
total-Submissions
Submissions
35
accuracy
Accuracy
2.86

*/