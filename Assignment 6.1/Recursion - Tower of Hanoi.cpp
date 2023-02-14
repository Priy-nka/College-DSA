//https://www.hackerrank.com/contests/launchpad-1-winter-challenge/challenges/shift-plates/submissions/code/1356232287

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void towerOfHanoi(int, char, char, char);

int main()
{
    int disc;
    cin >> disc;
    towerOfHanoi(disc, 'A', 'C', 'B');
    return 0;
}

void towerOfHanoi(int disc, char A, char B, char C)
{
    if(disc > 0)
    {
        towerOfHanoi(disc-1, A, C, B);
        cout << "Moving ring " << disc << " from " << A << " to " << C << endl;
        towerOfHanoi(disc-1, B, A, C);
    }
}  
