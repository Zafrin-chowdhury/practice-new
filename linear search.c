#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[4],i,searchitem;
     printf("element of array");
     for(i=0;i<=4;i++)
    {

        scanf("%d",&array[i]);
    }
    printf("searchitem");
    scanf("%d",&searchitem);
    for(i=0;i<=4;i++)
    {
        if(array[i]==searchitem)
        {
            printf("item found at index=%d",i);
            return 0;
        }
    }
    printf("item not found");
    return 0;
}
