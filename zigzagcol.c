#include<stdio.h>
int main()
{
    int row,col,n,val;
    n=4;
    val=0;
    for(row=1;row<=n;row++)
    {
        val=row;
        printf("\n");
        for(col=1;col<=n;col++)
        {
        printf("%d ",val);
        val=val+n;

        }
    }
}
