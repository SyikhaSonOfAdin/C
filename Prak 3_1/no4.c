#include <stdio.h>
 
int main(void)
{
  printf("\t\t##  Program Bahasa C Angka Prima  ## \n");
  printf("\t\t==================================== \n\n");
 
  int n,i,angka_prima;
  angka_prima = 1;
 
  printf("Input satu angka bulat: ");
  scanf("%i",&n);
 
  // 0 dan 1 bukan angka prima
  if (n == 0 || n == 1) 
  {
    angka_prima = 0;
  }
  else 
  {
    for (i = 2; i <= n / 2; i++) 
    {
      if (n % i == 0) 
      {
        angka_prima = 0;
        break;
      }
    }
  }
 
  printf("\n");
  if (angka_prima == 1)
    printf("%i adalah angka prima \n",n);
  else
    printf("%i bukan angka prima \n",n);
 
 return 0;
}