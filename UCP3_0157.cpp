#include <iostream>
using namespace std;
class MasukUniversitas {
	// isi access modifier disini
	int uangPendaftaran;
	// isi daftar variable yang dibutuhkan di bawah ini
	int uangSemesterPertama;

	int uangBangunan;

	int totalBiaya;

	int SNBT;
	int SNBP;


public:

	 MasukUniversitas(int uangPendaftaran, int uangSemesterPertama, int uangBangunan) : 
		uangPendaftaran(uangPendaftaran) ,  uangSemesterPertama (uangSemesterPertama), uangBangunan(uangBangunan) {

		 cout << "Masukan uang pendaftaran : " << uangPendaftaran << endl;
		 cout << "Masukan uang semester pertama : " << uangSemesterPertama << endl;
		 cout << "Masukan uang bangunan : " << uangBangunan << endl;

		int SNBT;

		// isi nilai default variable yang dibutuhkan di bawah ini

	}
	virtual void namaJalurMasuk() { 
		return; }

	// isi disini dengan fungsi virtual yang dibutuhkan
	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}

	// isi setter dan getter variable yang dibutuhkan di bawah ini
};

class SNBT : public MasukUniversitas {
public:

SNBT (int puangPendaftaran, int puangSemesterPertama, int puangBangunan) :
	MasukUniversitas (uangPendaftaran,  )
		{}
	
	// isi disini untuk melengkapi class SNBT
};
class SNBP : public MasukUniversitas {
	// isi disini untuk melengkapi class SNBP
};
int main() {

	MasukUniversitas SNBT();
	
	// isi disini untuk fungsi main
}