#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x;
public:
	bidangDatar() {
		x = 0;
	}
	virtual void input() {}
			virtual float Luas(int a) { return 0; } 
		virtual float Keliling(int a) { return 0; } 
		void setX(int a) { 
			this->x = a;
		}
		int getX() {
			return x;
	}
};

class Lingkaran:public bidangDatar{
public:
    void input() { 
        cout << "Lingkaran dibuat" << endl;
        cout << "Masukkan jejari: ";
        int jejari;
        cin >> jejari;
        setX(jejari);
    }
    float Luas(int a) { 
        return 3.14 * a * a;
    }
    float Keliling(int a) { 
        return 2 * 3.14 * a;
    }
};


class Bujursangkar :public bidangDatar {
public:
    void input() {
        cout << "Lingkaran dibuat" << endl;
        cout << "Masukkan jejari: ";
        int jejari;
        cin >> jejari;
        setX(jejari);
    }
    float Luas(int a) {
        return 3.14 * a * a;
    }
    float Keliling(int a) {
        return * a * a;
    }
};

int main() {
	void bidangDatar() {

	}
}

 