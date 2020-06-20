// author: Dimas Kurniawan

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void garis() {
    cout << "----------------------------" << endl;
}

void loginFunction(string user, string pass);
void loginForm();
void pertanyaanNya();
void pilihJawaban(int pilih);
void yakinFunction (int yakin);
void yakinLah();
void yakinKan ();
void ulangProgram();
void ulangFunction(char lanjut);
void tanyaBro();
void akhirProgram();
void ulangKata();

int main () {

    system("clear");
    loginForm();
    system("clear");

    tanyaBro();

    // untuk mengulang program
    ulangKata();

    cout << "Makasih sudah meluangkan waktunya mhehe :)" << endl;
    

    return 0;
}

void akhirProgram () {
    cout << "babay *nama_doi* :))" << endl;
}

void ulangFunction(char lanjut) {
    if (lanjut == 'y') {
        tanyaBro();
    } else if (lanjut == 't') {
        akhirProgram();
    } else {
        cout << "Peringatan: ketik y atau t dong kak!\n";
        ulangProgram();
    }
}

void ulangProgram() {
    char lanjut;
    cout << "> ";
    cin >> lanjut;

    ulangFunction(lanjut);
}

void ulangKata() {
    cout << "[y] untuk kembali memilih" << endl;
    cout << "[t] untuk keluar dari program" << endl;
    ulangProgram();
}

void yakinFunction (int yakin) {
    if (yakin == 'y') {
        system("clear");
        int i, j;
        for (i = 1; i <= 22; i++) {
            for (j = 1; j <= 60; j++) {
            if (i == 1)
                if (((j >= 14) && (j <= 23)) || ((j >= 39) && (j <= 48))) cout << "*";
                else cout << " ";
            else if (i == 2)
                if (((j >= 11) && (j <= 26)) || ((j >= 36) && (j <= 51))) cout << "*";
                else cout << " ";
            else if (i == 3)
                if (((j >= 9) && (j <= 28)) || ((j >= 34) && (j <= 53))) cout << "*";
                else cout << " ";
            else if (i == 4)
                if (((j >= 7) && (j <= 30)) || ((j >= 32) && (j <= 55))) cout << "*";
                else cout << " ";
            else if ((i >= 5) && (i <= 8))
                if ((j >= 5) && (j <= 57)) cout << "*";
                else cout << " ";
            else if (i == 9)
                if ((j >= 7) && (j <= 55)) cout << "*";
                else cout << " ";
            else if (i == 10)
                if ((j >= 9) && (j <= 53)) cout << "*";
                else cout << " ";
            else if (i == 11)
                if ((j >= 11) && (j <= 51)) cout << "*";
                else cout << " ";
            else if (i == 12)
                if ((j >= 13) && (j <= 49)) cout << "*";
                else cout << " ";
            else if (i == 13)
                if ((j >= 15) && (j <= 47)) cout << "*";
                else cout << " ";
            else if (i == 14)
                if ((j >= 17) && (j <= 45)) cout << "*";
                else cout << " ";
            else if (i == 15)
                if ((j >= 19) && (j <= 43)) cout << "*";
                else cout << " ";
            else if (i == 16)
                if ((j >= 21) && (j <= 41)) cout << "*";
                else cout << " ";
            else if (i == 17)
                if ((j >= 23) && (j <= 39)) cout << "*";
                else cout << " ";
            else if (i == 18)
                if ((j >= 25) && (j <= 37)) cout << "*";
                else cout << " ";
            else if (i == 19)
                if ((j >= 27) && (j <= 35)) cout << "*";
                else cout << " ";
            else if (i == 20)
                if ((j >= 29) && (j <= 33)) cout << "*";
                else cout << " ";
            else if (i == 21)
                if ((j >= 30) && (j <= 32)) cout << "*";
                else cout << " ";
            else if (i == 22)
                if (j == 31) cout << "*";
                else cout << " ";
            }
            cout << "\n";
        }
        cout << "I LOVE U *NAMA_DOI* :D" << endl;
        cout << "Maaci atas pilihannya :)" << endl << endl;
        garis();
    } else if (yakin == 't') {
        cout << "Yaah kirain serius tadi :)" << endl;
    } else {
        cout << "Peringatan: pilihan cuman y atau t" << endl;
        yakinKan();
    }
}

void yakinKan() {
    char yakin;

    cout << "> ";
    cin >> yakin;
    yakinFunction(yakin);
}

void yakinLah() {
    cout << "ahh serius dil??" << endl;
    garis();
    cout << "[y] untuk \"Iya\"" << endl;
    cout << "[t] untuk \"Tidak\"" << endl;
    garis();
    yakinKan();
}

void pilihJawaban (char pilih) {
    if (pilih == '1') {
        yakinLah();
    } else if (pilih == '2') {
        system("clear");
        cout << "Makasih sudah mau jawab *nama_doi* mhehe :)" << endl;
        garis();
    } else {
        cout << "\nPeringatan: pilihan hanya tersedia 1 atau 2" << endl << endl;
        pertanyaanNya();
    }
}

void pertanyaanNya () {
    char pilih;
    cout << "> ";
    cin >> pilih;
    pilihJawaban(pilih);
}

void tanyaBro () {
    system("clear");
    cout << "Haiii *nama_doi* :)" << endl;
    cout << "Mau gak jadi pacarku?" << endl;
    garis();
    cout << "[1] untuk \"Iya\"" << endl;
    cout << "[2] untuk \"Tidak\"" << endl;
    garis();
    pertanyaanNya();
}

void loginFunction(string user, string pass) {
    if (user == "admin" && pass == "123") {
        cout << "work!" << endl;
    } else {
        cout << "\nPeringatan: username atau password yang anda masukkan salah!" << endl;
        cout << "Silahkan coba lagi!" << endl << endl;
        loginForm();
    }
}
void loginForm() {
    string user, pass;

    cout << "username:" << endl;
    cout << "> ";
    cin >> user;
    cout << "password:" << endl;
    cout << "> ";
    cin >> pass;
    loginFunction(user, pass);
}