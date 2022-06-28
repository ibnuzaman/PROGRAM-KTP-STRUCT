#include <iostream>
#include <fstream>
using namespace std;

class ktp{
    friend istream& operator >> (istream&, ktp&);
    friend ostream& operator << (ostream&, ktp&); 
private:
	char nik[20], nama[20];
	int goldar;
	int agama;
	string berlaku = "Seumur Hidup";
	string pekerjaan;
	string kewarga = "WNI";
	int status;
	int jkel;
 
};

struct{
string tempat;
int tgl,bln,thn;
}tanggal; 

struct{
string jalan,kecamatan,desa;
int rt,rw;
}alamat;

istream& operator >> (istream& in, ktp& input){
  cout << "Masukkan NIK\t: "; in >> input.nik;
  cout << "Masukkan NAMA\t: "; in >> input.nama;
  cout << "Masukkan Tempat\t: "; in >> tanggal.tempat;
  cout << "Masukkan tanggal: "; in >> tanggal.tgl;
  cout << "Masukkan Bulan\t: "; in >> tanggal.bln;
  cout << "Masukkan Tahun\t: "; in >> tanggal.thn;
  cout << "Masukkan Jenis Kelamin (1/2) "<<endl;
  cout << "1. Perempuan"<<endl;
  cout << "2. Laki-Laki"<<endl;
  cout << "Pilih opsi : ";
  in >> input.jkel;
  cout << "Masukkan Pilihan Goldar : " << endl;
  cout << "1. A " << endl;
  cout << "2. B " << endl;
  cout << "3. O " << endl;
  cout << "4. AB" << endl;
  cout << "Pilih opsi : ";
  in >> input.goldar;
  cout << "Masukkan Jalan\t: "; in >> alamat.jalan;
  cout << "Masukkan RT\t: "; in >> alamat.rt;
  cout << "Masukkan RW\t: "; in >> alamat.rw;
  cout << "Masukkan Kel/Desa  : "; in >> alamat.desa;
  cout << "Masukkan Kecamatan : "; in >> alamat.kecamatan;
  cout << "Masukkan Agama\t: " << endl;
  cout << "1. Islam" << endl;
  cout << "2. Katolik" << endl;
  cout << "3. Kristen" << endl;
  cout << "4. Buddha" << endl;
  cout << "5. Hindu" << endl;
  cout << "6. Konghuchu" << endl;
  cout << "Pilih opsi : ";
  in >> input.agama;
  cout << "Masukkan Status (1/2) "<<endl;
  cout << "1. Belum Kawin"<<endl;
  cout << "2. Kawin"<<endl;
  cout << "Pilih opsi : ";
  in >> input.status;
  cout << "Masukkan Perkerjaan\t: "; in >> input.pekerjaan;
/*  cout << "Masukkan Kewarganegaraan (1/2) "<<endl;
  cout << "1. WNI"<<endl;
  cout << "2. WNA"<<endl; */
  
	return in;
}

ostream& operator << (ostream& out, ktp& output){
	ofstream file;
	file.open("ktp.txt");
	file << "\n\n";
  file << "\t\t\t\t\t\t\tPROVINSI JAWA BARAT\n";
  file << "\t\t\t\t\t\t\t\tKOTA BOGOR\n";
	file << "----------------------------------------------------------\n";
	file << "----------------------------------------------------------\n";
	file << "NIK               : "<<output.nik;
	file << "\nNAMA              : "<<output.nama;
	file << "\nTempat/Tgl Lahir  : "<< tanggal.tempat;
	file << "\nJenis Kelamin     : ";
	if(output.jkel==2)
		file<<"Laki-laki";
	else if(output.jkel==1)
		file<<"Perempuan";
	file << "\t\t\t\tGol.Darah : ";
	switch(output.goldar){
		case 1:
			file<<"A";
		break;
		case 2:
			file<<"B";
		break;
		case 3:	
			file<<"O";
		break;
		case 4:
			file<<"AB";
		break;
	}
	file << "\nAlamat            : "<<alamat.jalan;
	file << "\n\t\tRT/RW           \t: "<<alamat.rt<<"/"<<alamat.rw;
	file << "\n\t\tKel/Desa        \t: "<<alamat.desa;
	file << "\n\t\tKecamatan       \t: "<<alamat.kecamatan;
	file << "\nAgama             : ";
  switch(output.agama){
		case 1:
			file<<"Islam";
		break;
		case 2:
			file<<"Protestan";
		break;
		case 3:	
			file<<"Kristen";
		break;
		case 4:
			file<<"Buddha";
		break;
    case 5:
      file << "Hindu";
    break;
    case 6:
      file << "Konghuchu";
    break;
	}
	file << "\nStatus Perkawinan : ";
  if(output.status==2)
		file<<"Kawin";
	else if(output.status==1)
		file<<"Belum Kawin";
	file << "\nPekerjaan         : "<<output.pekerjaan;
	file << "\nKewarganegaraan   : "<<output.kewarga;
	file << "\nBerlaku hingga    : "<<output.berlaku<<"\n";
	file << "----------------------------------------------------------\n";
	file << "----------------------------------------------------------\n";
	return out;
	file.close();
	return out;
}

int main() {
  ktp obj;
	cin>>obj;
	cout<<obj;
}