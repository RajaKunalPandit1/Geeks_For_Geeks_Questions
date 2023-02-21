Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1113 /1113
Total Points Scored: 
4 /4
Your Total Score: 
1967
Total Time Taken: 
0.3
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{   
public:
    int minIteration(int N, int M, int X, int Y){    
        
    vector<vector<int>> grid(N + 1, vector<int>(M + 1, 0));

    grid[X][Y] = 1;



    queue<pair<int, int>> q;

    q.push({X, Y});



    int count = 0;

    while (!q.empty())

    {

        int size = q.size();

        for (int i = 0; i < size; i++)

        {

            int x = q.front().first;

            int y = q.front().second;

            q.pop();



            // check for Up

            if (x > 1 && grid[x - 1][y] == 0)

            {

                q.push({x - 1, y});

                grid[x - 1][y] = 1;

            }

            // check for left

            if (y > 1 && grid[x][y - 1] == 0)

            {

                q.push({x, y - 1});

                grid[x][y - 1] = 1;

            }

            // check for down

            if (x < N && grid[x + 1][y] == 0)

            {

                q.push({x + 1, y});

                grid[x + 1][y] = 1;

            }

            // check for right

            if (y < M && grid[x][y + 1] == 0)

            {

                q.push({x, y + 1});

                grid[x][y + 1] = 1;

            }

        }

        if (!q.empty())

            count++;

    }

    return count;

}
