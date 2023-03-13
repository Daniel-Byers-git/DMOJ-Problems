#include <cstdio>
int main()
{
    int tot = 1691600, i{}, case_sel{}, bank_offer{}, avg{};
    int case_val[]{100, 500, 1000, 5000, 10000, 25000, 50000, 100000, 500000, 1000000};
    int num_opened;
    scanf("%d", &num_opened);
    for(i; i < num_opened; i++)
    {
        scanf("%d", &case_sel);
        tot -= case_val[case_sel - 1];
    }
    avg = tot/(10-num_opened);
    scanf("%d", &bank_offer);
    if(avg > bank_offer)
    {
        printf("no deal");
    }
    else
    {
        printf("deal");
    }
}