#include <stdio.h>
#include <math.h>

int main()
{
    int min,max,i;
    scanf("%d%d",&min,&max);
    if(max>min)
    {
    scanf("%d%d",&min,&max);
    for(i=min+1;i<max;i++)
    {
        if(i%2==0)
        {
            printf("%d",i);
            printf(" ");
        }
    }
    }
    else
    {
        printf("invalid boundaries");
    }
    return 0;
}
