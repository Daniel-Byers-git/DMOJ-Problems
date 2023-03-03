//https://dmoj.ca/problem/ccc14j2
#include <cstdio>
int main()
{ 
    char vote[15];
    int V{}, A_vote{}, B_vote{};
    scanf("%d", &V);
    scanf("%s", vote);
    for(int i{}; i < V; i++)
    {
        if(vote[i]=='A')
        {
            A_vote++;
        }
        else if(vote[i]=='B')
        {
            B_vote++;
        }
    }
    if(A_vote>B_vote)
    {
        printf("A");
    }
    else if(B_vote>A_vote)
    {
        printf("B");
    }
    else
    {
        printf("Tie");
    }
}