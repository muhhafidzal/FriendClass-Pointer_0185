#include <iostream>
#include <cmath>
using namespace std;

class BelahKetupat;
class LayangLayang
{
    private:
        float d1, d2;
        float sisi1, sisi2;
    public:
        void input();
        float Luas();
        float Keliling();
        void output();
        
        // Friend function declaration
        friend class BelahKetupat;
};

class BelahKetupat
{
    private:
        float d1, d2;
        float sisi;
    public:
        void input();
        float Luas();
        float Keliling();
        void output();
        
        // Friend function untuk menghitung keliling dari LayangLayang
        float kelilingFriend(LayangLayang L);
};

void LayangLayang::input()
{
    cout << "\n=== Input Layang-Layang ===" << endl;
    cout << "Masukkan diagonal 1: ";
    cin >> d1;
    cout << "Masukkan diagonal 2: ";
    cin >> d2;
    cout << "Masukkan sisi 1: ";
    cin >> sisi1;
    cout << "Masukkan sisi 2: ";
    cin >> sisi2;
}

float LayangLayang::Luas()
{
    return (d1 * d2) / 2;
}

float LayangLayang::Keliling()
{
    return 2 * (sisi1 + sisi2);
}

void LayangLayang::output()
{
    cout << "\n=== Output Layang-Layang ===" << endl;
    cout << "Diagonal 1: " << d1 << endl;
    cout << "Diagonal 2: " << d2 << endl;
    cout << "Sisi 1: " << sisi1 << endl;
    cout << "Sisi 2: " << sisi2 << endl;
    cout << "Luas: " << Luas() << endl;
    cout << "Keliling: " << Keliling() << endl;
}

void BelahKetupat::input()
{
    cout << "\n=== Input Belah Ketupat ===" << endl;
    cout << "Masukkan diagonal 1: ";
    cin >> d1;
    cout << "Masukkan diagonal 2: ";
    cin >> d2;
    cout << "Masukkan panjang sisi: ";
    cin >> sisi;
}

float BelahKetupat::Luas()
{
    return (d1 * d2) / 2;
}

float BelahKetupat::Keliling()
{
    return 4 * sisi;
}

void BelahKetupat::output()
{
    cout << "\n=== Output Belah Ketupat ===" << endl;
    cout << "Diagonal 1: " << d1 << endl;
    cout << "Diagonal 2: " << d2 << endl;
    cout << "Sisi: " << sisi << endl;
    cout << "Luas: " << Luas() << endl;
    cout << "Keliling: " << Keliling() << endl;
}

// Friend function: BelahKetupat menghitung keliling dari LayangLayang
float BelahKetupat::kelilingFriend(LayangLayang L)
{
    return 2 * (L.sisi1 + L.sisi2);
}

int main()
{
    LayangLayang layang;
    BelahKetupat belah;
    
    // Input dan Output Layang-Layang
    layang.input();
    layang.output();
    
    // Input dan Output Belah Ketupat
    belah.input();
    belah.output();
    
    // Menggunakan friend function
    cout << "\n=== Menggunakan Friend Function ===" << endl;
    cout << "Keliling Layang-Layang (via friend function): " << belah.kelilingFriend(layang) << endl;
    
    return 0;
}