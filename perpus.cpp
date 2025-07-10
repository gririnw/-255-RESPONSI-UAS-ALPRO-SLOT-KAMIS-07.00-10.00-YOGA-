#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Buku {
    string nomor;
    string judul;
    string penulis;
    int stok;
};
void bacafile(Buku buku[], int n) {
    ifstream file("buku.txt");
    if (file.open()) {
        n = 0;
        while (getline(file, buku[n].nomor ) &&
               getline(file, buku[n].judul ) &&
               getline(file, buku[n].penulis ) &&
               file >> buku[n].stok) {
            file.ignore(); 
            n++;
        }
	}
void simpanfile(Buku buku[], int n) {
    ofstream file("buku.txt");
    if (file.open()) {
        for (int i = 0; i < n; i++) {
            file << buku[i].nomor << buku[i].judul << buku[i].penulis << buku[i].stok << endl;
        }
        file.close();
    }
}
void simpanhasil(Buku buku[], int n) {
    ofstream file("hasil.txt");
    if (file.open()) {
        for (int i = 0; i < n; i++) {
            file << buku[i].nomor << " " << buku[i].judul << " " << buku[i].penulis << " " << buku[i].stok << endl;
        }
        file.close();
        cout << "hasil program disimpan di hasil.txt"
    }
}
void carijudul(Buku buku[], int n , string judul){
	for (int i = 0; i < n - 1; i++) {
}
  
int caripenulis(Buku buku[], int n, string penulis){
}
carimaksimum(Buku buku[], int n) {
    int maxstok = 0, idx = 0;
    for (int i = 0; i < n; i++) {
        if (buku[i].stok > maxstok) {
            maxstok = buku[i].stok;
            idx = i;

}
    cout << "buku dengan stok terbanyak: " << buku[idx].nomor << " " << buku[idx].judul << " " << buku[idx].penulis << " " << buku[idx].stok << endl;
}
void urutkanjudul(Buku buku[], int n, bool ascending = true) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ascending ? buku[j].judul > buku[j + 1].judul : buku[j].judul < buku[j + 1].judul) {
                swap(buku[j], buku[j + 1]);
        }
    }
    
}
int main(){
	Buku buku[100];
	int n=0;
	int pilihan;
	bacafile[buku, n];
	
	do {
	
		cout << "=====INVENTARIS PERPUSTAKAAN====="<<endl;
		cout << "1. tambah buku."<<endl;
		cout << "2. tampilkan stok terbanyak"<<endl;
		cout << "3. urutkan jdudul buku A-Z"<<endl;
		cout << "4. urutkan judul buku Z-A"<<endl;
		cout << "5. simpan hasil program"<<endl;
		cout << "6. keluar"<<endl;
		cout << "pilih"<<endl;
		cin >> pilihan
	
	
switch(pilihan){
		case 1 :{
			cout << "nomor: ";
        	cin >> buku[n].nomor;
        	cout << "judul: ";
        	cin.ignore();
        	getline(cin, buku[n].judul;
        	cout << "penulis: ";
        	getline cin, buku[n].penulis);
        	cout << "stok: ";
        	cin >> buku[n].stok
        	n++;
        	simpanfile(buku, n);
			break;
        }
        case 2:
            carimaksimum(buku, n);
            break;
        case 3:
            urutkanjudul(buku, n, true);
            for (int i = 0; i < n; i++) {
                  cout << buku[i].nomor << " " << buku[i].judul << " " << buku[i].penulis << " " << buku[i].stok << endl;
                }
            break;
        case 4:
            urutkanjudul(buku, n, false)
            for (int i = 0; i < n; i++) {
                cout << buku[i].nomor << " " << buku[i].judul << " " << buku[i].penulis << " " << buku[i].stok << endl;
            }
            break;
        case 5:
            simpanhasil(buku, n);
            break;
        }
} while (pilihan != 6);

    simpanfile(buku, n);
}
