#include<stdio.h>
int check_number (int);
int main ()
{
  int number,result;
  printf("Enter number : ");
  scanf("%d",&number);
  result = check_number(number);
  if (result == 1 && number != 1 && number != 0)
  {
    printf("%d is prime number",number);
  }
  else
  {
    printf("%d is not prime number",number);
  }
  
 return 0;
}

int check_number (int x)
{
  int i;
  for (i=2;i<=x-1;i++)
  {
    if(x%i==0) 
    {
      return 0;
    }
      
  }
  return 1;
}
