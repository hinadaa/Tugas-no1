#include <iostream>
#include <conio.h>
using namespace std;

struct antrian
{
    char nama[30];
    char sex;
    int umur;
};

struct antrian pasien[100];
int datake=1;

void tampildata()
{
    cout<<endl;
    for(int x-1;x<datake;x++)
    {
        cout<<x<<" "<<pasien[x].nama<<" ";
        cout<<x<<" "<<pasien[x].sex<<" ";
        cout<<x<<" "<<pasien[x].umur<<" ";

    }
    cout<<endl;
}
void inqueue()
{
    cout<<"Inputkan Nama Pasien        : ";
    cin>>pasien[datake].nama;
    cout<<"Inputkan Nama Pasien        : ";
    cin>>pasien[datake].sex;
    cout<<"Inputkan Nama Pasien        : ";
    cin>>pasien[datake].umur;
    datake++;

}
void move()
{
    for(intz=2;z<datake;z++)
        (pasien[z-1]=pasien[z]);
}
void dequeue()
{
    cout<<"Data Hasil Dequeue adalah : ";
    cout<<pasien[1].nama<<" "<<pasien[1].sex<<" "<<pasien[1].umur<<endl;
    cout<<"Press Anykey to continue....";
    move();
    getch();
    datake--;
}
int main()
{
    int pilih
    do
    {
        tampildata();
        cout<<"IMPLEMENTASI INQUEUE [ANTRIAN]"<<endl;
        cout<<"1. Inqueue"<<endl;
        cout<<"2. Dequeue"<<endl;
        cout<<"9. Exit"<<endl;
        cout<<"Pilihan Anda (1-9)"<<endl;
        cin>>pilih;
        if(pilih=1) inqueue();
    }
    while(pilih!=9);
    return 0;
}
