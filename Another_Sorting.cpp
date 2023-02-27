// https://dmoj.ca/problem/anothersorting
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(int i, int j)
{return (i>j);}

int main()
{
    vector<vector<int>> Unit_sort(10); 
    int N, temp;
    scanf("%d",&N);
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &temp);
        Unit_sort[temp%10].push_back(temp);
    }
    for(int i = 0; i < 10; i++)
    {
        sort(Unit_sort[i].begin(), Unit_sort[i].end(), comp);
        for(auto j : Unit_sort[i])
            printf("%d ", j);
    }
    return 0;
}