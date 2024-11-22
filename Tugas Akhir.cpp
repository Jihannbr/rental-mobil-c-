//Tugas Akhir
//Data Rental Sahabat Anda
#include<iostream>
using namespace std;
int main() 
{
    awal:
    int lama_pinjam;
    char nama_penyewa [30];
    char pil,yt;
    cout<<"==================|RENTAL SAHABAT ANDA|====================="<<endl;
	cout<<"------------------------------------------------------------"<<endl;
	cout<<"|No.| Kode Tipe Kendaraan | Tipe Kendaraan | Sewa Per Hari |"<<endl;
	cout<<"------------------------------------------------------------"<<endl;
	cout<<"| 1 |         AD          |AVANZA DELUXE   |         250000|"<<endl;
	cout<<"| 2 |         AV          |AVANZA VELOX    |         275000|"<<endl;
	cout<<"| 3 |         XS          |XENIA SPORTY    |         260000|"<<endl;
	cout<<"| 4 |         RZ          |TOYOTA RUSH     |         300000|"<<endl;
	cout<<"| 5 |         TR          |TERRIOS         |         285000|"<<endl;
	cout<<"| 6 |         IV          |INNOVA          |         350000|"<<endl;
	cout<<"| 7 |         FR          |FORTUNER        |         450000|"<<endl;
	cout<<"------------------------------------------------------------"<<endl;
    cout<<"NAMA PENYEWA             : ";cin>>nama_penyewa;
    cout<<"NOMOR KODE TIPE KENDARAAN: ";cin>>pil;
    cout<<"LAMA SEWA                : ";cin>>lama_pinjam;
    system("cls");
    
    if (pil=='1') {
    int harga_sewa,total_sewa,diskon,total_bayar,bayar,balik;
    harga_sewa=250000;
    total_sewa=lama_pinjam*harga_sewa;
        if (lama_pinjam<=20) (diskon=total_sewa*0.05);
        else if (lama_pinjam>20) (diskon=total_sewa*0.2);
        else if (lama_pinjam<10) (diskon=total_sewa*0.02);
        else (diskon=total_sewa*0);
    total_bayar=total_sewa-diskon;
    cout<<"PROGRAM APLIKASI RENTAL SAHABAT ANDA"<<endl;
    cout<<"===================================="<<endl;
    cout<<"NAMA PENYEWA         : "<<nama_penyewa<<endl;
    cout<<"KODE TIPE            : AD"<<endl;
    cout<<"LAMA SEWA            : "<<lama_pinjam<<" HARI"<<endl;
    cout<<"TIPE KENDARAAN       : AVANZA DELUXE"<<endl;
    cout<<"SEWA/HARI            : Rp."<<harga_sewa<<",-/HARI"<<endl;
    cout<<"TOTAL SEWA           : Rp."<<total_sewa<<",-"<<endl;
    cout<<"DISKON               : Rp."<<diskon<<",-"<<endl;
    cout<<"TOTAL BAYAR          : Rp."<<total_bayar<<",-"<<endl;
    cout<<"----------------------------------------------------------------";
    cout<<endl;
    cout<<"UANG BAYAR   = Rp. ";cin>>bayar;
    balik=bayar-total_bayar;
    cout<<"UANG KEMBALI = Rp. " <<balik<<",-"<< endl;
    } 
    else if (pil=='2') {
    int harga_sewa,total_sewa,diskon,total_bayar,bayar,balik;
    harga_sewa=275000;
    total_sewa=lama_pinjam*harga_sewa;
        if (lama_pinjam<=20) (diskon=total_sewa*0.05);
        else if (lama_pinjam>20) (diskon=total_sewa*0.1);
        else if (lama_pinjam<10) (diskon=total_sewa*0.02);
        else (diskon=total_sewa*0);
    total_bayar=total_sewa-diskon;
    cout<<"PROGRAM APLIKASI RENTAL SAHABAT ANDA"<<endl;
    cout<<"===================================="<<endl;
    cout<<"NAMA PENYEWA         : "<<nama_penyewa<<endl;
    cout<<"KODE TIPE            : AV"<<endl;
    cout<<"LAMA SEWA            : "<<lama_pinjam<<" HARI"<<endl;
    cout<<"TIPE KENDARAAN       : AVANZA VELOX"<<endl;
    cout<<"SEWA/HARI            : Rp."<<harga_sewa<<",-/HARI"<<endl;
    cout<<"TOTAL SEWA           : Rp."<<total_sewa<<",-"<<endl;
    cout<<"DISKON               : Rp."<<diskon<<",-"<<endl;
    cout<<"TOTAL BAYAR          : Rp."<<total_bayar<<",-"<<endl;
    cout<<"----------------------------------------------------------------";
    cout<<endl;
    cout<<"UANG BAYAR   = Rp. ";cin>>bayar;
    balik=bayar-total_bayar;
    cout<<"UANG KEMBALI = Rp. " <<balik<<",-"<< endl;
    }
    else if (pil=='3') {
    int harga_sewa,total_sewa,diskon,total_bayar,bayar,balik;
    harga_sewa=260000;
    total_sewa=lama_pinjam*harga_sewa;
        if (lama_pinjam<=20) (diskon=total_sewa*0.05);
        else if (lama_pinjam>20) (diskon=total_sewa*0.1);
        else if (lama_pinjam<10) (diskon=total_sewa*0.02);
        else (diskon=total_sewa*0);
    total_bayar=total_sewa-diskon;
    cout<<"PROGRAM APLIKASI RENTAL SAHABAT ANDA"<<endl;
    cout<<"===================================="<<endl;
    cout<<"NAMA PENYEWA         : "<<nama_penyewa<<endl;
    cout<<"KODE TIPE            : XS"<<endl;
    cout<<"LAMA SEWA            : "<<lama_pinjam<<" HARI"<<endl;
    cout<<"TIPE KENDARAAN       : XENIA SPORTY"<<endl;
    cout<<"SEWA/HARI            : Rp."<<harga_sewa<<",-/HARI"<<endl;
    cout<<"TOTAL SEWA           : Rp."<<total_sewa<<",-"<<endl;
    cout<<"DISKON               : Rp."<<diskon<<",-"<<endl;
    cout<<"TOTAL BAYAR          : Rp."<<total_bayar<<",-"<<endl;
    cout<<"----------------------------------------------------------------";
    cout<<endl;
    cout<<"UANG BAYAR   = Rp. ";cin>>bayar;
    balik=bayar-total_bayar;
    cout<<"UANG KEMBALI = Rp. " <<balik<<",-"<< endl;
    } 
    else if (pil=='4') {
    int harga_sewa,total_sewa,diskon,total_bayar,bayar,balik;
    harga_sewa=300000;
    total_sewa=lama_pinjam*harga_sewa;
        if (lama_pinjam<=20) (diskon=total_sewa*0.05);
        else if (lama_pinjam>20) (diskon=total_sewa*0.1);
        else if (lama_pinjam<10) (diskon=total_sewa*0.02);
        else (diskon=total_sewa*0);
    total_bayar=total_sewa-diskon;
    cout<<"PROGRAM APLIKASI RENTAL SAHABAT ANDA"<<endl;
    cout<<"===================================="<<endl;
    cout<<"NAMA PENYEWA         : "<<nama_penyewa<<endl;
    cout<<"KODE TIPE            : RZ"<<endl;
    cout<<"LAMA SEWA            : "<<lama_pinjam<<" HARI"<<endl;
    cout<<"TIPE KENDARAAN       : TOYOTA RUSH"<<endl;
    cout<<"SEWA/HARI            : Rp."<<harga_sewa<<",-/HARI"<<endl;
    cout<<"TOTAL SEWA           : Rp."<<total_sewa<<",-"<<endl;
    cout<<"DISKON               : Rp."<<diskon<<",-"<<endl;
    cout<<"TOTAL BAYAR          : Rp."<<total_bayar<<",-"<<endl;
    cout<<"----------------------------------------------------------------";
    cout<<endl;
    cout<<"UANG BAYAR   = Rp. ";cin>>bayar;
    balik=bayar-total_bayar;
    cout<<"UANG KEMBALI = Rp. " <<balik<<",-"<< endl;
    } 
    else if (pil=='5') {
    int harga_sewa,total_sewa,diskon,total_bayar,bayar,balik;
    harga_sewa=285000;
    total_sewa=lama_pinjam*harga_sewa;
        if (lama_pinjam<=20) (diskon=total_sewa*0.05);
        else if (lama_pinjam>20) (diskon=total_sewa*0.1);
        else if (lama_pinjam<10) (diskon=total_sewa*0.02);
        else (diskon=total_sewa*0);
    total_bayar=total_sewa-diskon;
    cout<<"PROGRAM APLIKASI RENTAL SAHABAT ANDA"<<endl;
    cout<<"===================================="<<endl;
    cout<<"NAMA PENYEWA         : "<<nama_penyewa<<endl;
    cout<<"KODE TIPE            : TR"<<endl;
    cout<<"LAMA SEWA            : "<<lama_pinjam<<" HARI"<<endl;
    cout<<"TIPE KENDARAAN       : TERRIOS"<<endl;
    cout<<"SEWA/HARI            : Rp."<<harga_sewa<<",-/HARI"<<endl;
    cout<<"TOTAL SEWA           : Rp."<<total_sewa<<",-"<<endl;
    cout<<"DISKON               : Rp."<<diskon<<",-"<<endl;
    cout<<"TOTAL BAYAR          : Rp."<<total_bayar<<",-"<<endl;
    cout<<"----------------------------------------------------------------";
    cout<<endl;
    cout<<"UANG BAYAR   = Rp. ";cin>>bayar;
    balik=bayar-total_bayar;
    cout<<"UANG KEMBALI = Rp. " <<balik<<",-"<< endl;
    } 
    else if (pil=='6') {
    int harga_sewa,total_sewa,diskon,total_bayar,bayar,balik;
    harga_sewa=350000;
    total_sewa=lama_pinjam*harga_sewa;
        if (lama_pinjam<=20) (diskon=total_sewa*0.05);
        else if (lama_pinjam>20) (diskon=total_sewa*0.1);
        else if (lama_pinjam<10) (diskon=total_sewa*0.02);
        else (diskon=total_sewa*0);
    total_bayar=total_sewa-diskon;
    cout<<"PROGRAM APLIKASI RENTAL SAHABAT ANDA"<<endl;
    cout<<"===================================="<<endl;
    cout<<"NAMA PENYEWA         : "<<nama_penyewa<<endl;
    cout<<"KODE TIPE            : IV"<<endl;
    cout<<"LAMA SEWA            : "<<lama_pinjam<<" HARI"<<endl;
    cout<<"TIPE KENDARAAN       : INNOVA"<<endl;
    cout<<"SEWA/HARI            : Rp."<<harga_sewa<<",-/HARI"<<endl;
    cout<<"TOTAL SEWA           : Rp."<<total_sewa<<",-"<<endl;
    cout<<"DISKON               : Rp."<<diskon<<",-"<<endl;
    cout<<"TOTAL BAYAR          : Rp."<<total_bayar<<",-"<<endl;
    cout<<"----------------------------------------------------------------";
    cout<<endl;
    cout<<"UANG BAYAR   = Rp. ";cin>>bayar;
    balik=bayar-total_bayar;
    cout<<"UANG KEMBALI = Rp. " <<balik<<",-"<< endl;
    } 
    else if (pil=='7') {
    int harga_sewa,total_sewa,diskon,total_bayar,bayar,balik;
    harga_sewa=450000;
    total_sewa=lama_pinjam*harga_sewa;
        if (lama_pinjam<=20) (diskon=total_sewa*0.05);
        else if (lama_pinjam>20) (diskon=total_sewa*0.1);
        else if (lama_pinjam<10) (diskon=total_sewa*0.02);
        else (diskon=total_sewa*0);
    total_bayar=total_sewa-diskon;
    cout<<"PROGRAM APLIKASI RENTAL SAHABAT ANDA"<<endl;
    cout<<"===================================="<<endl;
    cout<<"NAMA PENYEWA         : "<<nama_penyewa<<endl;
    cout<<"KODE TIPE            : FR"<<endl;
    cout<<"LAMA SEWA            : "<<lama_pinjam<<" HARI"<<endl;
    cout<<"TIPE KENDARAAN       : FORTUNER"<<endl;
    cout<<"SEWA/HARI            : Rp."<<harga_sewa<<",-/HARI"<<endl;
    cout<<"TOTAL SEWA           : Rp."<<total_sewa<<",-"<<endl;
    cout<<"DISKON               : Rp."<<diskon<<",-"<<endl;
    cout<<"TOTAL BAYAR          : Rp."<<total_bayar<<",-"<<endl;
    cout<<"----------------------------------------------------------------";
    cout<<endl;
    cout<<"UANG BAYAR   = Rp. ";cin>>bayar;
    balik=bayar-total_bayar;
    cout<<"UANG KEMBALI = Rp. " <<balik<<",-"<< endl;
    } 
    else {
    cout<<"TIDAK BISA DIPROSES";
    cout<<endl;
    }
    cout<<endl;
    cout<<"MASIH ADA DATA? [Y/T] : ";
    cin>>yt;
    cout<<endl;

    if(yt=='Y' || yt=='y')
    {goto awal;}
    if(yt=='T' || yt=='t')
    {goto selesai;}
    selesai:
    
    return 0;
}
