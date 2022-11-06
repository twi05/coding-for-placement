#include <bits/stdc++.h>
using namespace std;
int rodCutting(vector<int> price, vector<int> peice, int l, int lenRemaining)
{
     if (lenRemaining == 0)
        return price[l];
    
    if (l == 0)
        return 0;
   
    if (l >= peice[l - 1]){
        cout<<price[l-1]<<endl;
        return max(price[l - 1] + rodCutting(price, peice, l - 1, lenRemaining - peice[l - 1]), rodCutting(price, peice, l - 1, lenRemaining));
}
    else
        return rodCutting(price, peice, l - 1, lenRemaining);
}
int main()
{

    vector<int> price = {5, 6, 8, 8};
    vector<int> peice = {1, 2, 3, 4};
    int length = 4;

    cout << rodCutting(price, peice, length, 4);

    return 0;
}