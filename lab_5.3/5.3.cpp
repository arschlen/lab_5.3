#include <iostream>
#include <cmath>
using namespace std;

double h(const double x);

int main() {
    double gp, gk;
    int n;
    cout << "g: "; cin >> gp;
    cout << "g: "; cin >> gk;
    cout << "������: "; cin >> n;

    double dg = (gk - gp) / n;
    double g = gp;

    cout << "g\t\t�������� ������" << endl;
    cout << "----------------------------------" << endl;

    while (g <= gk) {
        double z = h(g * g + 1) + h(g + h(1)) + 1;
        cout << g << "\t\t" << z << endl;
        g += dg;
    }

    return 0;
}

double h(const double x) {
    if (abs(x) >= 1) {
        return (sin(x + 1) / (1 + cos(x)));
    }
    else {
        double S = 0;
        for (int i = 0; i <= 5; ++i) {
            S += pow(x, i) / tgamma(2 * i + 1);  // tgamma(2i+1) - �� (2i)!
        }
        return S;
    }
}
