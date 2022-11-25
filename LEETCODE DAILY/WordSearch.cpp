#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool helper(vector<vector<char>> &board, string word, int i, int row, int col)
{
    if (i == word.size())
        return true;

    if (row < 0 || row >= board.size() || col < 0 || col >= board[0].size() || board[row][col] != word[i])
        return false;

    char temp;
    temp = board[row][col];
    board[row][col] = '*';

    bool ans = helper(board, word, i + 1, row + 1, col) || helper(board, word, i + 1, row - 1, col) || helper(board, word, i + 1, row, col - 1) || helper(board, word, i + 1, row, col + 1);

    board[row][col] = temp;
    return ans;
}
bool exist(vector<vector<char>> &board, string word)
{

    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
            if (board[i][j] == word[0] && helper(board, word, 0, i, j))
                return true;
    }
    return false;
}

int main()
{
    vector<vector<char>> board = {{'A', 'B', 'C', 'E'}, {'S', 'F', 'C', 'S'}, {'A', 'D', 'E', 'E'}};
    string word = "ABCCED";
    cout << exist(board, word);
    return 0;
}

bool helperOld(vector<vector<char>> &board, string word, int i, int row, int col)
{
    if (i == word.size())
        return true;

    char temp;
    if (row < board.size() - 1 && board[row][col] == word[i])
    {
        temp = board[row][col];
        board[row][col] = '*';
        return helper(board, word, i + 1, row + 1, col);
    }
    if (row > 0 && board[row][col] == word[i])
    {
        temp = board[row][col];
        board[row][col] = '*';
        return helper(board, word, i + 1, row - 1, col);
    }
    if (col > 0 && board[row][col] == word[i])
    {
        temp = board[row][col];
        board[row][col] = '*';
        return helper(board, word, i + 1, row, col - 1);
    }
    if (col < board[0].size() && board[row][col] == word[i])
    {
        temp = board[row][col];
        board[row][col] = '*';
        return helper(board, word, i + 1, row, col + 1);
    }
    board[row][col] = temp;

    return false;
}