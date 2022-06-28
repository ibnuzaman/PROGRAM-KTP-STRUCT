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
	int kewarga;
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
  cout << "Masukkan Kewarganegaraan (1/2) "<<endl;
  cout << "1. WNI"<<endl;
  cout << "2. WNA"<<endl;
  
	return in;
}

ostream& operator << (ostream& out, ktp& output){
	ofstream file;
	file.open("ktp.txt", ios::out);
	out << "\n\n";
	out << "----------------------------------------------------------\n";
	out << "----------------------------------------------------------\n";
	out << "NIK\t\t\t\t\t: "<<output.nik;
	out << "\nNAMA\t\t\t\t: "<<output.nama;
	out << "\nTempat/Tgl Lahir\t: "<< tanggal.tempat;
	out << "\nJenis Kelamin\t\t: ";
	if(output.jkel==2)
		out<<"Laki-laki";
	else if(output.jkel==1)
		out<<"Perempuan";
	out << "\t\tGol.Darah : ";
	switch(output.goldar){
		case 1:
			out<<"A";
		break;
		case 2:
			out<<"B";
		break;
		case 3:	
			out<<"O";
		break;
		case 4:
			out<<"AB";
		break;
	}
	out << "\nAlamat\t\t\t\t: "<<alamat.jalan;
	out << "\n\tRT/RW\t\t\t: "<<alamat.rt<<"/"<<alamat.rw;
	out << "\n\tKel/Desa\t\t: "<<alamat.desa;
	out << "\n\tKecamatan\t\t: "<<alamat.kecamatan;
	out << "\nAgama\t\t\t\t: ";
  switch(output.agama){
		case 1:
			out<<"Islam";
		break;
		case 2:
			out<<"Protestan";
		break;
		case 3:	
			out<<"Kristen";
		break;
		case 4:
			out<<"Buddha";
		break;
    case 5:
      out << "Hindu";
    break;
    case 6:
      out << "Konghuchu";
    break;
	}
	out << "\nStatus Perkawinan\t: ";
  if(output.status==2)
		out<<"Kawin";
	else if(output.status==1)
		out<<"Belum Kawin";
	out << "\nPekerjaan\t\t\t: "<<output.pekerjaan;
	out << "\nKewarganegaraan\t\t: ";
		if(output.kewarga==2)
			out<<"WNA";
		else if(output.kewarga==1)
			out<<"WNI";
	out << "\nBerlaku hingga\t\t: "<<output.berlaku<<"\n";
	out << "----------------------------------------------------------\n";
	out << "----------------------------------------------------------\n";
	return out;
	file.close();
	
	file.open("ktp.txt");
	file << "\n\n";
	file << "----------------------------------------------------------\n";
	file << "----------------------------------------------------------\n";
	file << "NIK\t\t\t: "<<output.nik;
	file << "\nNAMA\t\t\t: "<<output.nama;
	file << "\nTempat/Tgl Lahir\t: "<< tanggal.tempat;
	file << "\nJenis Kelamin\t\t: ";
	if(output.jkel==2)
		out<<"Laki-laki";
	else if(output.jkel==1)
		out<<"Perempuan";
	out << "\t\tGol.Darah : ";
	switch(output.goldar){
		case 1:
			out<<"A";
		break;
		case 2:
			out<<"B";
		break;
		case 3:	
			out<<"O";
		break;
		case 4:
			out<<"AB";
		break;
	}
	file << "\nAlamat\t\t\t\t: "<<alamat.jalan;
	file << "\n\tRT/RW\t\t\t: "<<alamat.rt<<"/"<<alamat.rw;
	file << "\n\tKel/Desa\t\t: "<<alamat.desa;
	file << "\n\tKecamatan\t\t: "<<alamat.kecamatan;
	file << "\nAgama\t\t\t\t: ";
  switch(output.agama){
		case 1:
			out<<"Islam";
		break;
		case 2:
			out<<"Protestan";
		break;
		case 3:	
			out<<"Kristen";
		break;
		case 4:
			out<<"Buddha";
		break;
    case 5:
      file << "Hindu";
    break;
    case 6:
      file << "Konghuchu";
    break;
	}
	file << "\nStatus Perkawinan\t: ";
  if(output.status==2)
		file<<"Kawin";
	else if(output.status==1)
		file<<"Belum Kawin";
	file << "\nPekerjaan\t\t: "<<output.pekerjaan;
	file << "\nKewarganegaraan\t\t: ";
		if(output.kewarga==2)
			out<<"WNA";
		else if(output.kewarga==1)
			out<<"WNI";
	file << "\nBerlaku hingga\t\t: "<<output.berlaku<<"\n";
	file << "----------------------------------------------------------\n";
	file << "----------------------------------------------------------\n";
	return out;
	file.close();
}

int main() {
  ktp obj;
	cin>>obj;
	cout<<obj;
}