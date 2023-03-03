//https://dmoj.ca/problem/ccc04j1
#include <cstdio>
#include <cmath>
int main()
{
    int N;
    scanf("%d", &N);
    int side = sqrt(N);
    printf("The largest square has side length %d.", side);
    return 0;
}