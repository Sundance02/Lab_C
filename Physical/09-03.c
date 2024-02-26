#include <stdio.h>
 
int main()
{
  int case1 = 0;
  int copy1 = case1;
 
  printf("Before Case1: %d\n", case1); //0
  printf("Before Copy1: %d\n", copy1); //0
 
  case1 = 100;
  printf("After Case1: %d\n", case1); //100
  printf("After Copy1: %d\n", copy1); //0
 
  printf("-----\n");
 
  int case2 = 0;
  int *copy2 = &case2;
 
  printf("Before Case2: %d\n", case2); //0
  printf("Before Copy2: %d\n", *copy2); //0
 
  case2 = 34500;
  printf("After Case2: %d\n", case2); //34500
  printf("After Copy2: %d\n", *copy2); //34500
 
  return 0;
}