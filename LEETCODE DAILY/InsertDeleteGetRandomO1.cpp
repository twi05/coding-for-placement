#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
class RandomizedSet
{
public:
    unordered_map<int, int> valtoind;
    vector<int> nums;
    RandomizedSet()
    {
    }

    bool insert(int val)
    {
        if (valtoind.count(val))
        {
            return false;
        }

        nums.push_back(val);
        valtoind[val] = nums.size() - 1;
        return true;
    }

    bool remove(int val)
    {
        if (valtoind.count(val))
        {
            int ind = valtoind[val];

            int lastele = nums.back();
            valtoind[lastele] = ind;
            nums[ind] = lastele;
            valtoind.erase(val);
            nums.pop_back();
            return true;
        }
        return false;
    }

    int getRandom()
    {
        return nums[rand() % (nums.size() )];
    }
};

int main()
{

    RandomizedSet *obj = new RandomizedSet();
    bool param_1 = obj->insert(8);
    bool param_2 = obj->remove(2);
    int param_3 = obj->getRandom();

    return 0;
}