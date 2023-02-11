#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main() {
    int pilihan, idmenu, quantity;
    char nama[20];

open:
    
    printf("Buka Warung?");
    
    printf("\n1. Persilahkan Pelanggan Masuk");

    printf("\n2. Tutup");

    printf("\n= ");

    scanf("%d", &pilihan);

        if (pilihan == 1) goto masuk;
        else if (pilihan == 2) goto close;
            
    return;
            
masuk:
    
    printf("\nSELAMAT DATANG DI WARUNG KANG ROGER!");
    
    printf("\nMasukkan nama Anda = ");
    
    scanf("%s", &nama);
    
    goto masuk2;
    
    return;

masuk2:
    
    printf("\n1. Lihat Menu");

    printf("\n2. Beli");
    
    printf("\n3. Keluar");
    
    printf("\n= ");

    scanf("%d", &pilihan);

        if (pilihan == 1) goto menu;
        else if (pilihan == 2) goto order;
        else if (pilihan == 3) goto open;
        
    return;
    
menu:

    printf("\nMENU");
    
    printf("\n\nID: 1");
    printf("\nNama: Nasi Putih");
    printf("\nKategori: Makanan");
    printf("\nHarga: Rp5.000");
    
    printf("\n\nID: 2");
    printf("\nNama: Ayam Goreng");
    printf("\nKategori: Makanan");
    printf("\nHarga: Rp15.000");
    
    printf("\n\nID: 3");
    printf("\nNama: Nasi Goreng");
    printf("\nKategori: Makanan");
    printf("\nHarga: Rp20.000");
    
    printf("\n\nID: 4");
    printf("\nNama: Mie Goreng");
    printf("\nKategori: Makanan");
    printf("\nHarga: Rp20.000");
    
    printf("\n\nID: 5");
    printf("\nNama: Bakso");
    printf("\nKategori: Makanan");
    printf("\nHarga: Rp20.000");
    
    printf("\n\nID: 6");
    printf("\nNama: Air Mineral");
    printf("\nKategori: Minuman");
    printf("\nHarga: Rp5.000");
    
    printf("\n\nID: 7");
    printf("\nNama: Es Teh");
    printf("\nKategori: Minuman");
    printf("\nHarga: Rp7.000");
    
    printf("\n\nID: 8");
    printf("\nNama: Es Jeruk");
    printf("\nKategori: Minuman");
    printf("\nHarga: Rp7.000");
    
    printf("\n\nID: 9");
    printf("\nNama: Milkshake");
    printf("\nKategori: Minuman");
    printf("\nHarga: Rp10.000");
    
    printf("\n\nID: 10");
    printf("\nNama: Kopi Susu");
    printf("\nKategori: Minuman");
    printf("\nHarga: Rp8.000");
    
    goto masuk2;
    
    return;
    
order:

    int id[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char namamenu[10][20] = {"Nasi Putih", "Ayam Goreng", "Nasi Goreng", "Mie Goreng", "Bakso", "Air Mineral", "Es Teh", "Es Jeruk", "Milkshake", "Kopi Susu"};
    int harga[10] = {5000, 15000, 20000, 20000, 20000, 5000, 7000, 7000, 10000, 8000};
    
    printf("\nMasukkan ID menu yang ingin Anda pesan: ");
    scanf("%d", &idmenu);
    
    printf("\nBerapa banyak yang ingin Anda pesan? ");
    scanf("%d", &quantity);
    
    int transaksi = 1;
    
    goto masuk2;
    
    return;
    
close:

    printf("\nWarung Tutup");
    
    if (transaksi == 1){
        
        printf("\n\nTransaksi:");
        printf("\nNama Pelanggan: %s", nama);
        printf("\nMenu yang dipesan: %s", namamenu[idmenu-1]);
        printf("\nJumlah yang dipesan: %d", quantity);
        printf("\nTotal Harga: %d", harga[idmenu-1]*quantity);
        
    } else
        printf("\nTidak Ada Penjualan");
    
    return;
    
}