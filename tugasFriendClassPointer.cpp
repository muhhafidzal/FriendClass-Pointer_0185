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