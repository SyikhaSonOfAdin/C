#include <stdio.h> 
int main()
{ 
   int full_fare = 500, usia ;
   float diskon ;
   printf("Usia penumpang? ") ;
   scanf("%i", &usia) ;
   if (usia < 12)
   {
    printf("Biaya = 0 USD") ;
   }
   if (usia >= 12 && usia <= 23)
   {
    diskon = full_fare * 0.7 ;
    printf("Biaya = %.0f USD", diskon) ;
   }
   if (usia > 23)
   {
    printf("Biaya = %i USD", full_fare) ;
   }
} 
