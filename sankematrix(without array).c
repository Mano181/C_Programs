#include<stdio.h>
int main()
{
    int row,col,n;
    n=4;
    int val=0;
    int c;
    for(row=1;row<=n;row++,val=val+n)
    {
        for(int spc=1;spc<=n-row;spc++)
        printf("  ");
        for(col=1;col<=n;col++)
        {
             (row %2!=0)? printf(" %02d",++val):  printf(" %02d",val--);

        }
        printf("\n");

    }
}
