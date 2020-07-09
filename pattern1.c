#include<stdio.h>
int main()
{
int NFRows,NFColumns;
NFRows=7;
NFColumns=6;
for(int row=1;row<=NFRows;row++)
{
    printf("\n");
    for(int column=1;column<=NFColumns;column++)
    {
        //if(row==1||column==1||row==NFRows||column==NFColumns||row>2&&NFRows-2>=row||column>2&&NFColumns-2>=column&&row!=2&&column!=2&&row!=NFRows-1&&row!=NFColumns/*&&column!=2||column!=NFColumns-1*/)
        if(row==2||column==2||row==NFRows-1||column==NFColumns-1)
            if(row!=NFRows&&column!=NFColumns&&row!=1&&column!=1)
                   printf("0 ");
            else
                    printf("x ");
        else
                    printf("x ");
    }
}
}
