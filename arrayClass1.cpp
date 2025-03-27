#include <iostream>
using namespace std;
string kelas[30];
int n = 0;
void input(string nama);
void output();

int main() {
    input("Decy Alam Santoso");
    output();
    input("Rio ganteng");
    output();
    input("Fajri dan Dzaki apalah coba");
    output();

    return 0;
}

void input(string nama) {
    kelas[n] = nama;
    n++;
}

void output() {
    for (int i = 0; i < n; i++) {
        cout << kelas[i];
        if (i < n - 1) {
            cout <<",";
        } else {
            cout <<"."<<endl;
        }
    }
}
