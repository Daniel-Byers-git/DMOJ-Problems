#include <cstdio>

int main()
{
    int S, R;
    scanf("%d%d", &S, &R);
    
    int A_square = S*S;
    int A_circle = 3.14 * (R*R);

    if (A_square > A_circle)
    {
        printf("SQUARE");
    }
    else
    {
        printf("CIRCLE");
    }
} 