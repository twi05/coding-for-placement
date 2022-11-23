#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

   
    bool isSafe(vector<vector<char>>& board , int temp, int row, int col)
    {
        for(int i=0;i<board.size();i++)
        {
            if(board[row][i] == temp)
            {
                return false;
            }
            if(board[i][col] == temp)
            {
                return false;
            }
            if(board[row/3 *3 + i/3] [  col/3 * 3 +   (i%3)  ] == temp)
            {
                return false;
            }
        }
        return true;
    }
    
    
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board.size();j++)
            {
                
                if(board[i][j] != '.')
                {
                    int temp = board[i][j];
                    board[i][j]  = '*';
                    if(!isSafe(board, temp, i ,j))
                    {
                        return false;
                    }
                    board[i][j] =  temp;
                }
                
            }
        }
        return true;
    }




int main()
{

    return 0;
}





    
bool isValidSudoku2(vector<vector<char>> &b)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (b[i][j] != '.')
            {
                for (int row = i + 1; row < 9; row++)
                {
                    if (b[row][j] == b[i][j])
                        return false;
                }
                for (int col = j + 1; col < 9; col++)
                {
                    if (b[i][col] == b[i][j])
                        return false;
                }
            }
        }
    }

    for (int i = 0; i < 9; i += 3)
    {
        for (int j = 0; j < 9; j += 3)
        {
            set<char> st;
            for (int row = i; row < i + 3; row++)
            {
                for (int col = j; col < j + 3; col++)
                {

                    if (st.find(b[row][col])!=st.end())
                    {
                        return false;
                    }
                    st.insert(b[row][col]);
                }
            }

            st.clear();
        }
    }
    return true;
}


