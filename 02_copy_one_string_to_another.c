#include <stdio.h>

int main()
{
  char str1[100], str2[100];
  int i;
  printf("Type here which is copied\n");
  gets(str1);
  i = 0;
  while (str1[i] != '\0')
  {
    str2[i] = str1[i];
    i++;
  }
  str2[i] = '\0';
  printf("\n--------After copied in another string--------\n");
  printf("\n%s", str2);
  return 0;
}