#include <iostream>
#include <iomanip>

using namespace std;

void calcSum(double a, double b) {
    int sum = a + b;
    cout << "Summa: " << sum << endl;
}

void calcDiv(double nimittaja, double osoittaja) {
    if (osoittaja == 0) {
        cout << "Ei voida jakaa luvulla 0" << endl;
    } else {
        double osamaara = nimittaja / osoittaja;
        cout << std::fixed << std::setprecision(2) << "Osamaara: " << osamaara << endl; //std::fixed jne stack overflosta en tiedä onko oikein mutta toimii
    }
}

int retSum(double a, double b) {
    int summa = a + b;
    return summa;
}

double retDiv(double nimittaja, double osoittaja) {
    if (osoittaja == 0) {
        throw runtime_error("Ei voida jakaa luvulla 0");
    } else {
    double osamaara = nimittaja / osoittaja;
    return osamaara;
    }
}

int main()
{
    double a;
    double b;

    cout << "Anna ensimmainen luku: ";
    cin >> a;

    cout << "Anna toinen luku: ";
    cin >> b;

    calcSum(a, b);
    int sum = retSum(a, b);
    cout << a << " + " << b << " = " << sum << endl;

    calcDiv(a, b);
    try {
        double result = retDiv(a, b);
        cout << a << " / " << b << " = " << result << endl;
    } catch (runtime_error & e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
