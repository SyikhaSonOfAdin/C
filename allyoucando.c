#include <stdio.h>

int main()
{
    int pilih, nominal, sisa ;
    float a, b, c, rata, boa, bob, boc, idr, usd ;
    char  depan[30] , tengah[30] , belakang[30], opsi ;
    int b1, a1, hitung, ops, ops1, ops2 ;
    float hitung1, hitung2, hitung3;
    int harikerja, trans, gaji, thr, total, tthr, anak, tkurang, opas1, opas2, opas3, pajak, total1 ;
    int a2, b2, c2, d2 ;
    int jari, luas ;
    int celsius ;
    float farenheit ;
    const float phi = 3.14 ;
    float belanja, potongan, totalbelanja ;

    printf("\t\t!!ALL YOU CAN DO MACHINE!!\n\n") ;
    printf("\t1. Mencari pecahan uang yang pas\n\t2. Menghitung rata nilai dengan bobot yang ditentukan\n\t3. Harga tiket yang diinginkan dengan membeli dua gratis satu\n\t4. Convert USD to IDR\n\t5. Total pendapatan karyawan sebulan\n\t6. Mencari nilai diskriminan nilai yang ditentukan\n\t7. Mencari luas lingkaran\n\t8. Konverter suhu dari celcius (c) to farenheit(F)\n\t9. Potongan harga\n\n ") ;
    printf("\tChoice what operational you want :") ;
    scanf("%i",&pilih) ;
    switch (pilih)
    {

    case 1 :
        // TUGAS 3  PRAK 2_1
        printf("\n\n") ;
        printf("\tMasukan Nilai Uang: ");
        scanf("\t%d", &nominal);

        sisa = nominal / 100000;
        nominal -= 100000*sisa;
        printf("\t%d Lembar 100000 \n", sisa);

        sisa = nominal / 50000;
        nominal -= sisa*50000;
        printf("\t%d Lembar 50000 \n", sisa);

        sisa = nominal / 20000;
        nominal -= sisa*20000;
        printf("\t%d Lembar 20000 \n", sisa);

        sisa = nominal / 10000;
        nominal -= sisa*10000;
        printf("\t%d Lembar 10000 \n", sisa);

        sisa = nominal / 5000;
        nominal -= sisa*5000;
        printf("\t%d Lembar 5000 \n", sisa);

        sisa = nominal / 2000;
        nominal -= sisa*2000;
        printf("\t%d Lembar 2000 \n", sisa);

        sisa = nominal / 1000;
        nominal -= sisa*1000;
        printf("\t%d Lembar 1000 \n",sisa);

        break;

    case 2 :

        printf("\n\n") ;
        printf("\t\tMENGHITUNG RATA-RATA NILAI SISWA\n") ;
        printf("\t_____________________________________________\n\n") ;
        printf("\tMasukkan nama depan siswa ;") ;
        scanf("%s",&depan) ;
        printf("\tMasukkan nama tengah siswa ;") ;
        scanf("%s",&tengah) ;
        printf("\tMasukkan belakang depan siswa ;") ;
        scanf("%s",&belakang) ;
        printf("\tMasukkan nilai A (Bobot : 2) : ") ;
        scanf("%f",&a) ;
        boa = a * 2 ;
        printf("\tMasukkan nilai B (Bobot : 3) : ") ;
        scanf("%f",&b) ;
        bob = b * 3 ;
        printf("\tMasukkan nilai C (Bobot : 5) : ") ;
        scanf("%f",&c) ;
        boc = c * 5 ;
        rata = (boa + bob + boc) / 10  ;
        printf("\n\tNilai rata rata %s %s %s adalah %.1f",depan,tengah,belakang,rata) ;

        break;

    case 3 :

        // SOAL NO.4 PRAK 2_2
        printf("\n\n") ;
        printf("\tmenghitung harga tiket\n");
        printf("\t(Harga satu tiket Rp.50.000,00) \n");
        printf("\tMasukkan jumlah tiket yang diinginkan :");
        b1 = 50.000 ;
        scanf("%i",&a1);
        hitung = a1 % 3 ;

        if (hitung == 1) {
            hitung1 = a1 / 3 ;
            ops = hitung1 * (2 * b1) + b1 ;
            printf("\tharga yang harus dibayarkan adalah :\n") ;
            printf("\tRp %i.000,00",ops);

        }
        if (hitung == 2) {
            hitung2 = a1 / 3 ;
            ops1 = hitung2 *(2 * b1) + (2 * b1) ;
            printf("\tHarga yang harus dibayarkan adalah :\n") ;
            printf("\tRp %i.000,00",ops1) ;

        }
        if (hitung == 0) {
            hitung3 = a1 / 3 ;
            ops2 = hitung3 * (2 * b1) ;
            printf("\tHarga yang harus dibayarkan adalah :\n") ;
            printf("\tRp %i.000,00",ops2) ;
        }

        break;

    case 4 :
        // SOAL NO.2 PRAK 2_1
        printf("\t\tCONVERT FROM USD TO IDR\n\n") ;
        printf("\tInput USD : ") ;
        scanf("%f",&usd) ;
        printf("\tAnda ingin memasukkan nilai tukar? (y/n) ") ;
        scanf("%s",&opsi ) ;

        if( opsi == 'y')
        {
            float nilai ;
            printf("\tMasukkan nilai tukar : ") ;
            scanf("%f",&nilai ) ;
            idr = usd * nilai ;
            printf("\t$ %.1f = Rp %.1f",usd,idr); 
        }
        
        if( opsi == 'n')
        {
            idr = usd * 11090 ;
            printf("$ %.1f = Rp %.1f",usd,idr);
        }
        break ;

    case 5 :
        // SOAL NO.3 PRAK 2_2
        printf("\n\n") ;
        // INPUT
        printf("\tMasukkan jumlah gaji pokok Rp") ;
        scanf("%i",&gaji) ;

        printf("\tJumlah anak :") ;
        scanf("%i",&anak) ;

        printf("\tJumlah hari kerja dalam seminggu (6 atau 7 hari) :");
        scanf("%i",&harikerja) ;
        printf("\t\tTAMBAHAN GAJI\n") ;
        // TUNJANGAN ISTRI/SUAMI
        opas1 = 0.1 * gaji ;
        printf("\tTambahan tunjangan istri/suami Rp %i\n",opas1) ;
        // TUNJANGAN ANAK
        opas2 = 0.05 * anak * gaji ;
        printf("\tTambahan tunjangan anak Rp %i\n",opas2) ;
        // BANTUAN TRANSPORT
        trans = 3000 *  ((52 * harikerja)/12) ;
        printf("\tBantuan transport Rp %i\n",trans) ;
        // THR
        thr = 52 * 5000 * harikerja ;
        printf("\tTHR per tahun Rp %i\n\n",thr) ;
            printf("\t\tPENGURANGAN\n") ;
        // (-)PAJAK
        pajak = 0.15 * (opas1 + opas2 + gaji) ;
        printf("\tPengurangan pajak Rp %i\n",pajak) ;
        printf("\tPengurangan polis asuransi Rp 20000\n\n") ;
        printf("\t\tTOTAL PENDAPATAN\n") ;
        // TOTAL PENDAPATAN
        total = gaji + opas1 + opas2 - pajak - 20000 ;
        printf("\tTotal pendapatan Rp %i\n",total)    ;
        total1 = gaji + opas1 + opas2 + thr - pajak - 20000 ;
        printf("\tTotal pendapatan dengan THR Rp %i",total1) ;
        break ;

    case 6 :
        printf("\n\n") ;

        printf("\tmasukan nilai a : ") ;
        scanf("%i",&a2) ;
        printf("\tmasukan nilai b : ") ;
        scanf("%i",&b2) ;
        printf("\tmasukan nilai c : ") ;
        scanf("%i",&c2) ;
        d2 = b2 * b2 - 4 * a2 * c2 ;
        printf("\tNilai diskriminan = %i\n", d2) ;
        break ;

    case 7 :
        // SOAL NO.7 PRAK 2_1
        printf("\n\n") ;
        printf("\tMENGHITUNG LUAS LINGKARAN\n") ;
        printf("\tMasukkan panjang jari jari :") ;
        scanf("%i",&jari) ;
        luas = phi * jari * jari ;
        printf("\tLuas lingkaran dengan jari jari %i adalah %i",jari ,luas) ;
        break ;

    case 8 :
        // SOAL NO.1 PRAK 2_2
        printf("\n\n") ;
        printf("\tCONVERT FROM C TO F\n") ;
        printf("\tInput (c) : ") ;
        scanf("%i",&celsius) ;
        farenheit = celsius * 1.8 + 32 ;
        printf("\t%.2f F",farenheit) ;

        break ;

    case 9 :
        printf("\n\n") ;
        printf("\tMasukkan jumlah total belanja : Rp") ;
        scanf("%f", &belanja) ;
        if (belanja >= 100000)
        {
            potongan = 0.05 * belanja ;
            totalbelanja = belanja - potongan ;

            printf("\tPotongan Rp %.1f\n", potongan) ;
            printf("\tTotal pembelian Rp %.1f",totalbelanja) ;

        }

        if (belanja < 100000)
        {

            printf("\tPotongan  Rp-\n") ;
            printf("\tTotal pembelian  Rp%.0f",belanja) ;
        }

        break;

    default:
        break;
    }


return 0 ;


}
