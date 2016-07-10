# reverse
#include <stdio.h>
void main()
{
    int n, rnum = 0, remainder, onum;
    printf("Enter an integer: ");
    scanf("%d", &n);
    onum= n;
    while( n!=0 )
    {
      remainder = n%10;
      rnum= rnum*10 + remainder;
      n /= 10;
    }
    if(onum==rnum)
      printf("%d is a palindrome.",onum);
    else
      printf("%d is not a palindrome.",onum);
}
