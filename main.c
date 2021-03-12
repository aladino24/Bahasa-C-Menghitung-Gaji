#include <stdio.h>
#include <stdlib.h>

 main()
{
    int gaji,masakerja,anak,bulankerja;
    float Tunjang1,Tunjang2,Pajak,Thr,Transport,total,totalbersih;
    float tunjang1=0.10, tunjang2=0.05,pajak=0.15,thr=5000, asuransi=20000, transport=3000;
    printf("Masukkan gajimu : ");
    scanf("%d",&gaji);
    printf("Berapa tahun kamu bekerja :");
    scanf("%d",&masakerja);
    printf("Jumlah anak : ");
    scanf("%d",&anak);
    printf("Berapa hari masuk kerja dalam sebulan :");
    scanf("%d",&bulankerja);
    Tunjang1=tunjang1*gaji;
    Tunjang2=tunjang2*gaji*anak;
    Thr=thr*masakerja;
    Pajak=pajak*(gaji+Tunjang1+Tunjang2);
    Transport=transport*bulankerja;
    total=gaji+Tunjang1+Tunjang2+Thr+Transport;
    totalbersih=gaji+Tunjang1+Tunjang2+Thr+Transport-(Pajak+asuransi);
    printf("Jumlah pendapatan kamu adalah :Rp %.2f \n",total);
    printf("Jumlah pendapatan bersih kamu adalah :Rp %.2f ",totalbersih);
    return 0;
}
