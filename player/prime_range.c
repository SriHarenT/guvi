#include <stdio.h>
int main()
{
    int low, high, i, flag,count=0;
    scanf("%d %d", &low, &high);
    while (low <= high)
    {
        flag = 0;
        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            count++;
        ++low;
    }
    printf("%d",count);
    return 0;
}

