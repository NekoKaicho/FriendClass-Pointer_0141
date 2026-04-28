#include <iostream>
using namespace std;

class BelahKetupat
{
private:
    float sisi, d1, d2;
public:
    void input();
    void luas();
    void keliling();
    void output();
};

class LayangLayang
{
private:
    float d1, d2, sisiPendek, sisiPanjang;
public:
    friend void BelahKetupat::keliling(); 
    void input();
    void luas();
    void keliling();
    void output();
};

void BelahKetupat::input(){
    cout << "Masukkan sisi : ";
    cin >> sisi;
    cout << "Masukkan diagonal 1 : ";
    cin >> d1;
    cout << "Masukkan diagonal 2 : ";
    cin >> d2;
}
void BelahKetupat::luas(){
    cout << "Luas Belah Ketupat : " << (d1 * d2) / 2 << endl;
}
void BelahKetupat::keliling(){
    cout << "Keliling Belah Ketupat : " << 4 * sisi << endl;
}
void BelahKetupat::output(){
    cout << " Hasil Belah Ketupat " << endl;
    cout << "Sisi : " << sisi << endl;
    cout << "Diagonal 1 : " << d1 << endl;
    cout << "Diagonal 2 : " << d2 << endl;
}
void LayangLayang::input(){
    cout << "Masukkan diagonal 1 : ";
    cin >> d1;
    cout << "Masukkan diagonal 2 : ";
    cin >> d2;
    cout << "Masukkan sisi pendek : ";
    cin >> sisiPendek;
    cout << "Masukkan sisi panjang : ";
    cin >> sisiPanjang;
}
void LayangLayang::luas(){
    cout << "Luas Layang-Layang : " << (d1 * d2) / 2 << endl;
}
void LayangLayang::keliling(){
    cout << "Keliling Layang-Layang : " << (2 * sisiPendek) + (2 * sisiPanjang) << endl;
}
void LayangLayang::output(){
    cout << " Hasil Layang-Layang " << endl;
    cout << "Diagonal 1 : " << d1 << endl;
    cout << "Diagonal 2 : " << d2 << endl;
    cout << "Sisi Pendek : " << sisiPendek << endl;
    cout << "Sisi Panjang : " << sisiPanjang << endl;
}
int main()
{
    LayangLayang layang;
    layang.input();
    layang.luas();
    layang.keliling();
    layang.output();
}


