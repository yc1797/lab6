#include <stdio.h>

int takeNum()
{
  int num;

  printf("Please enter a number: ");
  scanf("%d", &num);

  return num;
}

int checkNum()
{
  int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
  int userNum = takeNum();
  int size = sizeof(primes)/sizeof(int);
  int exist = 0;
  int i = 0;

  for (i < size; i++;)
  {
    if (userNum == primes[i])
    {
      exist = 1;
    }
  }

  return exist;
}

void display()
{
  int exist = checkNum();

  printf("%d", exist);
}

int main()
{
  checkNum();
  display();

  return 0;
}
