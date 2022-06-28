#include <iostream>
#include <fstream>
using namespace std;
class KTP{
public :
  struct date {
  string tempat;
  int tgl;
  int bulan;
  int tahun;
  }; date tanggalan;
  struct pengesahan{
  int tgll;
  int bln;
  int thn;
  }; pengesahan sah;
  struct alamat{
    string jalan;
    char rt[2];
    char rw[2];
    string desa;
    string kecamatan;
  }; alamat almt;

  void input(){
    cout<<"Masukkan NIK anda         : ";cin>>nik;
    cout<<"Masukkan Nama anda        : ";cin.ignore();
    getline(cin,nama[1]);
    cout<<"Masukkan Tempat/tgl lahir : "<<endl;
      cout<<"Tempat  : ";cin>>tanggalan.tempat;
      cout<<"Tanggal : ";cin>>tanggalan.tgl;
      cout<<"Bulan   : ";cin>>tanggalan.bulan;
      cout<<"Tahun   : ";cin>>tanggalan.tahun;
    cout<<"pilih Jenis kelamin anda : "<<endl;
    cout<<"1: Perempuan \t 2: laki-laki\n";
    cin >> piljk;
   	switch (piljk){
		case 1:
			jk = "Perempuan";
			break;
		case 2: 
			jk = "Laki-laki";
			break;
		default:
			cout<<"Jenis kelamin tidak tersedia"<<endl;
		}
    cout<<"Pilih Golongan darah anda : "<<endl;
    cout<<"1. A\n2. B\n3. AB\n4. O "<<endl;
    cout<<"pilihan anda : ";cin>>pilgoldar;
    switch (pilgoldar){
		case 1:
			goldar = "A";
			break;
		case 2: 
			goldar = "B";
			break;
    case 3:
			goldar = "AB";
			break;
		case 4:
      goldar = "O";
			break;
		default:
			cout<<"Golongan darah tidak tersedia"<<endl;
		}
    cout<<"Alamat  : "<<endl;
      cout<<"Jalan : ";cin>>almt.jalan;
      cout<<"RT : ";cin>>almt.rt;
      cout<<"Rw : ";cin>>almt.rw;
      cout<<"Desa : ";cin>>almt.desa;
      cout<<"Kecamatan : ";cin>>almt.kecamatan;

  cout<<endl;
    cout<<"Pilih Agama anda : "<<endl;
    cout<<"1. islam\n2.kristen\n3.hindu\n4.budha\n5. konghucu"<<endl;
    cout<<"pilihan anda : ";cin>>pilagama;
   switch (pilagama){
		case 1:
			agama = "Islam";
			break;
		case 2: 
			agama = "Kristen";
			break;
    case 3:
			agama = "Hindu";
			break;
		case 4:
      agama = "Budha";
			break;
     case 5:
      agama = "Konghucu";
			break;
		default:
			cout<<"Agama tidak tersedia"<<endl;
		}
    cout<<"Status perkawinan anda : "<<endl;
    cout<<"1.kawin\n2.belum kawin \n";
    cout<<"pilihan anda : ";cin>>pilstts;
    switch (pilstts){
		case 1:
			status = "Kawin";
			break;
		case 2: 
			status = "Belum Kawin";
			break;
		default:
			cout<<"Status tidak tersedia"<<endl;
		}
    
    cout<<"Masukkan pekerjaan anda : ";cin>>pekerjaan;
    cout<<"Pilih warga negara "<<endl;
    cout<<"1.WNI\n2.WNA \n";
    cout<<"pilihan anda : ";cin>>pilwn;
    switch (pilwn){
		case 1:
			wn = "WNI";
			break;
		case 2: 
			wn = "WNA";
			break;
		default:
			cout<<"pilihan tidak tersedia"<<endl;
		}
    cout<<"Berlaku Hingga "<<endl;
    cout<<"Tanggal : ";cin>>sah.tgll;
    cout<<"Bulan   : ";cin>>sah.bln;
    cout<<"Tahun   : ";cin>>sah.thn;
    
  }
  void output(){
    cout<< "                    PROVINSI DIY     "<<endl;
    cout<< "                 KABUPATEN BANTUL   "<<endl;
    cout<< "NIK    : "<<nik<<endl;
    cout<< "Nama               : "<<nama<<endl;
    cout<< "Tampat/Tgl Lahir   : "<<tanggalan.tempat<<", "<<tanggalan.tgl<<"-"<<tanggalan.bulan<<"-"<<tanggalan.tahun<<endl;
    cout<< "Jenis Kelamin      : "<<jk<<"\t\t\t"<<"Gol. darah : "<<goldar<<endl;
    cout<< "Alamat             : "<<almt.jalan<<endl;
    cout<< "\t\t\tRT/RW          : "<<almt.rt<<"/"<<almt.rw<<endl;
    cout<< "\t\t\tKel/Desa       : "<<almt.desa<<endl;
    cout<< "\t\t\tKecamatan      : "<<almt.kecamatan<<endl;
    cout<< "Agama              : "<<agama<<endl;
    cout<< "Status Perkawinan  : "<<status<<endl;
    cout<< "Pekerjaan          : "<<pekerjaan<<endl;
    cout<< "Kewarganegaraan    : "<<wn<<endl;
    cout<< "Berlaku Hingga     : "<<sah.tgll<<"-"<<sah.bln<<"-"<<sah.thn;
  }

void filetxt() {
  tulis_data.open("KTP.txt");
    tulis_data<< "                 PROVINSI DIY    "<<endl;
    tulis_data<< "                KABUPATEN BANTUL    "<<endl;
    tulis_data<< "NIK    : "<<nik<<endl;
    tulis_data<<endl;
    tulis_data<< "Nama               : "<<nama<<endl;
    tulis_data<< "Tampat/Tgl Lahir   : "<<tanggalan.tempat<<", "<<tanggalan.tgl<<"-"<<tanggalan.bulan<<"-"<<tanggalan.tahun<<endl;
    tulis_data<< "Jenis Kelamin      : "<<jk<<"\t\t\t"<<"Gol. darah : "<<goldar<<endl;
    cout<< "\t\t\tRT/RW          : "<<almt.rt<<"/"<<almt.rw<<endl;
    cout<< "\t\t\tKel/Desa       : "<<almt.desa<<endl;
    cout<< "\t\t\tKecamatan      : "<<almt.kecamatan<<endl;
    tulis_data<< "Agama              : "<<agama<<endl;
    tulis_data<< "Status Perkawinan  : "<<status<<endl;
    tulis_data<< "Pekerjaan          : "<<pekerjaan<<endl;
    tulis_data<< "Kewarganegaraan    : "<<wn<<endl;
    tulis_data<< "Berlaku Hingga     : "<<sah.tgll<<"-"<<sah.bln<<"-"<<sah.thn;
  tulis_data.close();
  
}

private :
char nik[16];
string nama[20];
int piljk,pilagama,pilstts,pilwn,pilgoldar;
string jk,agama,status,pekerjaan,wn,goldar;
ofstream tulis_data;
};

int main() {
  KTP x;
  x.input();
  x.output();
  x.filetxt();
}