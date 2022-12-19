#include <stdio.h>

struct date
{
    int tanggal, bulan, tahun ;
};

int main()
{
   struct date today, tomorrow ;
   int bulan31[] = {1,3,5,7,8,10} ;
   int bulan30[] = {4,6,9,11} ;
   int loop1, loop2 ;
   printf("Hari ini (dd-mm-yy)\t: ") ;
   scanf("%i-%i-%i", &today.tanggal, &today.bulan, &today.tahun) ;
   if( today.tanggal == 28 && today.tahun % 4 == 0 && today.bulan == 2)
   {
        if( today.tahun % 100 == 0 )
        {
            if( today.tahun % 400 == 0 )
            {
                tomorrow.tanggal = today.tanggal + 1 ;
                tomorrow.bulan = today.bulan ;
                tomorrow.tahun = today.tahun ;
            }
            tomorrow.tanggal = 1 ;
            tomorrow.bulan = today.bulan + 1 ;
            tomorrow.tahun = today.tahun ;
        }
        else
        {
            tomorrow.tanggal = today.tanggal + 1 ;
            tomorrow.bulan = today.bulan ;
            tomorrow.tahun = today.tahun ;
        }

        
   }
   else
   {
    for( loop1 = 0 ; loop1 <= 7 ; loop1 = loop1 + 1 )
    {
        if( today.bulan == bulan31[loop1] && today.tanggal == 31 && today.bulan != 12 )
        {
            tomorrow.bulan = today.bulan + 1 ;
            tomorrow.tanggal = 1 ;
            tomorrow.tahun = today.tahun ;
        }
        else if ( today.bulan == bulan30[loop1] && today.tanggal == 30 )
        {
            tomorrow.bulan = today.bulan + 1 ;
            tomorrow.tanggal = 1 ;
            tomorrow.tahun = today.tahun ;   
        }
        else if ( today.tanggal == 31 && today.bulan == 12 )
        {
            tomorrow.bulan = 1 ;
            tomorrow.tanggal = 1 ;
            tomorrow.tahun = today.tahun + 1 ;
        }
        else
        {
            tomorrow.tanggal = today.tanggal + 1 ;
            tomorrow.bulan = today.bulan ;
            tomorrow.tahun = today.tahun ;
        }
        
        
    }
   }
   printf("Besok (dd-mm-yy)   \t: %i-%i-%i", tomorrow.tanggal, tomorrow.bulan, tomorrow.tahun ) ;
}
