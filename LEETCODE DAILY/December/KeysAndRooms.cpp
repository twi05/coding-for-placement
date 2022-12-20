#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool canVisitAllRooms(vector<vector<int>> &rooms)
{
    vector<bool> visited(rooms.size(), false);
    queue<int> q;
    q.push(0); 
    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            int room = q.front();
            q.pop();
            visited[room] = true;
            for (int ele : rooms[room])
                if (!visited[ele])
                    q.push(ele);
        }
    }
    return count(visited.begin(), visited.end(), true) == rooms.size();
}
int main()
{

    return 0;
}