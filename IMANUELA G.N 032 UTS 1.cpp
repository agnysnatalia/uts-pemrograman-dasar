#include <iostream>

using namespace std;

int main()
{
     long harga=0;
     char KodeSepatu, Ukuran;
     string Merk;

     cout<<"\t== Program Cek Harga Sepatu ==\n\n";

     cout<<"Masukkan Kode Sepatu   : ";
     cin>>KodeSepatu;

     cout<<"Masukkan Ukuran Sepatu : ";
     cin>>Ukuran;

     if(KodeSepatu=='0'){
          Merk="NIKE";
          if(Ukuran=='41' || Ukuran=='41'){
               harga=550000;
          }
          else if(Ukuran=='39' || Ukuran=='39'){
               harga=500000;
          }
          else{
               harga=450000;
          }
     }
     else if(KodeSepatu=='9'){
          Merk="Gucci";
          if(Ukuran=='40' || Ukuran=='40'){
               harga=6500000;
          }
          else if(Ukuran=='38' || Ukuran=='38'){
               harga=5600000;
          }
          else{
               harga=3450000;
          }
     }
     else if(KodeSepatu=='8'){
          Merk="Converse";
          if(Ukuran=='42' || Ukuran=='42'){
               harga=799000;
          }
          else if(Ukuran=='37' || Ukuran=='37'){
               harga=599000;
          }
          else{
               harga=499000;
          }
     }
     else if(KodeSepatu=='7'){
          Merk="Bata";
          if(Ukuran=='38' || Ukuran=='38'){
               harga=300000;
          }
          else if(Ukuran=='37' || Ukuran=='37'){
               harga=400000;
          }
          else{
               harga=350000;
          }
     }
     else if(KodeSepatu=='6'){
          Merk="Connection";
          if(Ukuran=='39' || Ukuran=='39'){
               harga=250000;
          }
          else if(Ukuran=='37' || Ukuran=='37'){
               harga=320000;
          }
          else{
               harga=230000;
          }
     }
     else{
          Merk="Error";
          cout<<"\n== Salah Input Kode Baju ==";
     }

     cout<<"\n\nMerek Sepatu  = "<<Merk;
     cout<<"\nUkuran Sepatuu = "<<Ukuran;
     cout<<"\nHarga Sepatu  = "<<harga;

     return 0;
}

