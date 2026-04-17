#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b,c,d,e;
  system("cls");

printf("enter the values of a,b");
scanf("%d %d", &a, &b);
 
if(a>=90)
  printf("s1 is S\n");
  else if(a > 75 && a < 89) 
   printf("s1 is A\n");
 else if(a > 66 && a < 74) 
   printf("s1 is B\n");
 else if(a > 56 && a < 65) 
   printf("s1 is C\n");
 else if(a > 50 && a < 55) 
   printf("s1 is D\n");
 else if(a > 45 && a < 49) 
   printf("s1 is E\n");
else
   printf("s1 is F\n");




   if(b>=90)
  printf("s2 is S\n");
 else if(b > 75 && b < 89) 
   printf("s2 is A\n");
 else if(b > 66 && b < 74) 
   printf("s2 is B\n");
 else if(b > 56 && b < 65) 
   printf("s2 is C\n");
 else if(b > 50 && b < 55) 
   printf("s2 is D\n");
 else if(b > 45 && b < 49) 
   printf("s2 is E\n");
else
   printf("s2 is F\n");
    return 0;

}  