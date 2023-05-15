#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	static int nim;
public:
	int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(int pNim) { nim = pNim; }
	static int getNim() { return nim; }
	mahasiswa(string pnama) :nama(pnama) { setID(); }		
};

int mahasiswa :: nim = 0;

void mahasiswa::setID() {
	id = ++nim;
}

void mahasiswa::printAll() {
	cout << "ID =n " << id <<endl;
	cout << "nama =n " << nama << endl;
	cout << endl;
}


int main() {
	mahasiswa mhs1("sri dadi");
	mahasiswa mhs2("sri dadi");
	mahasiswa::setNim(9);
	mahasiswa mhs3("sri dadi");
	mahasiswa mhs4("sri dadi");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "akses dari luar object = " << mahasiswa::getNim() << endl;
	system("pause");

	return 0;

}