#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

struct antri
{
    int data;
};

struct identitas
{
    char nama[20];
    char no_rek[15];
    char transaksi[10];
    int nominal;
};

main()
{
    identitas id[15];
    antri ant[15];
    int cek=0, x, y=0, hapus;
    char pil,del;
    do {
            system("cls");
            cout<<"\n\t ========================";
            cout<<"\n\t|     ANTRIAN  BANK     |";
            cout<<"\n\t ========================"<<endl;
            cout<<"1. Masukan Antrian"<<endl;
            cout<<"2. Proses Antrian"<<endl;
            cout<<"3. Keluar"<<endl;
         cout<<endl;
            cout<<"Silahkan masukkan pilihan anda\t= ";
            pil=getche();
         cout<<endl;
if(pil!='1' && pil !='2' && pil !='3' )
          cout<<"Anda salah mengetikkan inputan";
            else
            {
                if(pil=='1')   //PUSH
                {
                    if(cek==15 && y==15)
                        cout<<"ANTRIAN PENUH!!!";
                    else
                    {
                    cout<<"\n\nSilahkan Masukkan Nomor Antrian\t= ";
               cin>>x;
                        ant[cek].data=x;
                        cout<<endl;
                        system("cls");
                        cout<<"Nama Nasabah\t: ";
                        cin>>id[cek].nama;
                        cout<<"Nomor Rekening\t: ";
                        cin>>id[cek].no_rek;
                        cout<<"Jenis Transaksi\t: \n";
                        cout<<"\t: A.Debet\n";
                        cout<<"\t  B.Kredit\n"<<"Pilih\t: ";
                        cin>>id[cek].transaksi;
                        cout<<"Nominal\t\t: ";
                        cin>>id[cek].nominal;
                        cout<<endl;
                        cek++;
                        system("cls");
                        cout<<"Antrian saat ini\t:\n\n";
                                for(int z=0;z<cek;z++)
                                {

                                    cout<<"Nomor Antri\t: "<<ant[z].data;
                                    cout<<endl;
                                    cout<<"Nama Nasabah\t: "<<id[z].nama<<endl;
                                    cout<<"Nomor Rekening\t: "<<id[z].no_rek<<endl;
                                    cout<<"Jenis Transaksi\t: "<<id[z].transaksi<<endl;
                                    cout<<"Nominal\t\t: "<<id[z].nominal<<endl;
                                    cout<<endl<<endl;

                                }




                    cout<<"\n\n";
                    system("PAUSE");
                }}
                else
                {
                    if(pil=='2')     //POP
                    {
                        if(cek==0)
                            cout<<"Antrian kosong";
                        else
                        {
                            hapus=ant[0].data;
                            for(int v=0;v<cek;v++)
                                ant[v].data=ant[v+1].data;
                            ant[cek].data=NULL;
                            cek--;
                            system("cls");
                            cout<<"\n\nAntrian dengan nomor "<<hapus<<" diproses\n";
                            cout<<"\nData Nasabah :\n";
                            cout<<"Nama Nasabah\t: "<<id[0].nama<<endl;
                            cout<<"Nomor Rekening\t: "<<id[0].no_rek<<endl;
                            cout<<"Jenis Transaksi\t: "<<id[0].transaksi<<endl;
                            cout<<"Nominal\t\t: "<<id[0].nominal<<endl;
                            cout<<endl;
                            {
                                int b;
                                for(b=0;b<cek;b++)
                                id[b]=id[b+1];
                                b--;
                            }
                        }

                        cout<<endl;
                        if(cek==0)
                            cout<<"Antrian kosong";
                        else
                            cout<<"Nomor Antrian saat ini : ";
                                for(int z=0;z<cek;z++)
                                {
                                    cout<<" | ";
                                    cout<<" "<<ant[z].data;
                                    cout<<" | ";
                                }
                    cout<<endl<<endl;
                    system("PAUSE");
                    }

                }
            }

    }while(pil!='3');
}
