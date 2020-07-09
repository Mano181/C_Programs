#include<stdio.h>
int main()
{
    long long int num,sqrnum,digit,safe,sumOfDigits;
    sumOfDigits=0;
    scanf("%d",&num);
  //  printf("%d",num);
    sqrnum=num*num;
    safe=sqrnum;
  //  printf("%d",safe);
    while(sqrnum)
    {
        digit=sqrnum%10;
        sumOfDigits+=digit;
        sqrnum/=10;
    }
    sqrnum=safe;
    if(sqrnum=sumOfDigits)
        printf("Yes");
    else
        printf("No");
}
