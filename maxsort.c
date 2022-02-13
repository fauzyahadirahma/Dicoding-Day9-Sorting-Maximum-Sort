/* File         : maxsort.c */
/* Penulis      : Fauzyah Hadirahma, email faubelajar@gmail.com */
/* Deskripsi    : mengurutkan elemen tabel dengan metoda maksimum sort */

#include <stdio.h>
int main ()
{
    /* KAMUS */
    int i;
    int Tab [10] = {1, 50, 6, 200, 3, 100, 30, 8, 99, 100};
    int max; /* indeks di mana Tab [Max] bernilai maksimum */
    int k, temp; /* variabel kerja */
    
    /* Algoritma maximum sort menurun, indeks paling kecil berisi nilai paling besar */
    for (i=0; i<9; i++)
    {
        /* tentukan indeks max, di mana Tab [Max] bernilai maksimum */
        /* untuk index tabel i..10 */
        
        max = i;
        for (k = i+1; k<10; k++)
        {
            if (Tab [k] > Tab [max])
            {
                max = k;
            }
        }
        
        /* Tukar nilai Tab [max] dengan Tab [i] */
        temp = Tab [i];
        Tab [i] = Tab [max];
        Tab [max] = temp;
    }
    
    for (i=0; i<10; i++)
    {
        printf ("%d; ", Tab [i]);
    }
    
    return 0;
}
