//KOD GÜNCELLEMELERİ: hata vermemesi için değişkenlerden türkçe karakterler kaldırıldı

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int main() {
    srand(time(0));

    int sayi;
    int tahmin;
    string zorluk;

    cout << "zorluğu girin: ";
    cin >> zorluk;
    cout << endl;

    if (zorluk == "kolay") {
        sayi = rand() % 100 + 1;
    }
    else if (zorluk == "orta") {
        sayi = rand() % 200 + 1;
    }
    else if (zorluk == "zor") {
        sayi = rand() % 300 + 1;
    }
    while (true) {
        cout << "sayıyı girin: ";
        cin >> tahmin;

        if (tahmin < sayı) {
            cout << "daha yüksek" << endl;
            cout << endl;
        }
        else if (tahmin > sayı) {
            cout << "daha alçak" << endl;
            cout << endl;
        }
        else if (tahmin == sayı) {
            cout << "kazandın" << endl;
            break;
        }
    }
}
