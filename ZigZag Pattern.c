#include<stdio.h>
int main()
{
    int row,col,n,val;
    n=4;
    val=0;
    for(row=1;row<=n;row++,val=val+n)
    {
        printf("\n");
        for(col=1;col<=n;col++)
        {
        if(row%2==0)
            printf( " %d",val--);
        else
            printf(" %d",++val);

        }
    }
}
