#include <cs50.h>
#include <stdio.h>

void meow(void);

int main(void)
{
  meow();
}
void meow(void)
{

  int n = get_int("x: ");

  for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}


