#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int h = get_int("Height: ");
  for(int i = 0; i < h; i++)
  {
    for(int j = h - 1; j > i; j--)
    {
      printf("_");
    
    for(int k = 0; k <= i; k++)
    {
      printf("#");
    }
    printf("\n");
    
   } 
  }
}




