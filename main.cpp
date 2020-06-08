#include <bits/stdc++.h>
using namespace std;

class program {
    ofstream plik2;
    fstream plik;
    string wyrazy;
    public:
    void wczytaj() {
        plik.open("a.txt", ios::in);
        plik2.open("b.txt");
        if(plik.good()) {
            while(!plik.eof()) {
                regex wzor("[0-9]{2}-[0-9]{3}");
                smatch podobny;
                plik >> wyrazy;
                regex_search(wyrazy, podobny, wzor);
                for (string x : podobny)
                {
                    plik2 << x << " ";
                }
            }
        }
        plik2.close();
        plik.close();
    }
};

int main() {
	program z;
    z.wczytaj();
    return 0;
}
