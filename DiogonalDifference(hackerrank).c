#include<stdio.h>
#include<math.h>
int main()
{
    int arr[10][10];/*-1 1 -7 -8
-10 -8 -5 -2
0 9 7 -1
4 4 -2 1*/
    int ind,itr,row,column,lrsum,rlsum;
    rlsum=0;
    lrsum=0;
    scanf("%d",&row);
    column=row;
    for(ind=0;ind<row;ind++)
        for(itr=0;itr<column;itr++)
            scanf("%d",&arr[ind][itr]);
    for(ind=0;ind<row;ind++)
        for(itr=0;itr<column;itr++)
            if(ind==itr)
                lrsum=lrsum+arr[ind][itr];
    ind=column-1;
      itr=0;
      while(itr<row)
      {
        //  printf("%d%d ",itr,ind);
          rlsum=rlsum+arr[itr][ind];
          itr++;
          ind--;
      }
      int diff;
      printf("%d %d ",rlsum,lrsum);
      diff=abs(lrsum-rlsum);
      printf("%d",diff);

}
