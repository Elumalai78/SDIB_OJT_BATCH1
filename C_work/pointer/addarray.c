#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int (*p[4]) (int x, int y);

int main()
{
  int result;
  int i, j, op;

  p[0] = add;
  p[1] = subtract; 
  p[2] = mul; 
  p[3] = div; 

  printf("Enter two numbers: ");
  scanf("%d %d", &i, &j);
  
  printf("0: Add, 1: Subtract, 2: Multiply, 3: Divide\n");
  do
   {
    printf("Enter number of operation: ");
    scanf("%d", &op);
  } 
  while(op<0 || op>3);

  result = (*p[op]) (i, j);
  printf("%d", result);

  return 0;
}

int sum(int a, int b)
{
  return a + b;
}

int subtract(int a, int b)
{
  return a - b;
}

int mul(int a, int b)
{
  return a * b;
}

int div(int a, int b)
{
  if(b) 
      return a / b;
  else 
      return 0;
}

