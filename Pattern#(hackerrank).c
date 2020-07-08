#include<stdio.h>
int main()
{
    int ind,itr,noOfLines;
    scanf("%d",&noOfLines);
    for(ind=1;ind<=noOfLines;ind++)
    {
        printf("\n");
        for(itr=noOfLines;itr>0;itr--)
        if(ind>=itr)
            printf("#");
        else
           printf(" ");
    }
}
