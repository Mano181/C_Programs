#include <stdio.h>

int main()
{
    int row,col,spc,n;
    n=5;
    for(row=n;row>=1;row--)
    {
        for(spc=1;spc<=n-row;spc++)
        printf(" ");
        for(col=1;col<=2*row-1;col++)
        printf("%d",row);
        printf("\n");
    }
    for(row=2;row<=n;row++)
    {
        for(spc=1;spc<=n-row;spc++)
        printf(" ");
        for(col=1;col<=2*row-1;col++)
        printf("%d",row);
        printf("\n");
    }
    return 0;
}

