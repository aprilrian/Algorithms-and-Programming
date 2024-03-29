/*Nama File 	: JumDeret21*/
/*Deskripsi 	: Menentukan jumlah deret bilangan ganjil dengan menggunakkan arrau sesuai dengan masukan N dan menampilkannya di layar*/
/*Pembuat   	: 24060121120022-Aprilyanto Setiyawan Siburian*/
/*Tgl Pembuatan	: Selasa, 29 Maret 2022*/

#include <stdio.h>

int main(){
    /*Kamus*/
    int N, Sum, i;

    /*Algoritma*/
    printf("Program Jumlah Deret 2\n");
    printf("Masukan N : ");
    scanf("%i", &N);

    int Deret[N];

    if (N <= 0)
    {
        printf("Masukan N harus positif!");
    }
    else
    {
        Sum = 0;
        for (i = 1; i <= N; i++)
        {
            Deret[i-1] = (2*i)-1;
            Sum +=  Deret[i-1];
        }
        printf("Jumlah deret ganjil dengan N = %i adalah %i", N, Sum);
    }
    return 0;
}
