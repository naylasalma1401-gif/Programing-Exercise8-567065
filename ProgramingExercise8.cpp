#include <iostream>
#include <cmath>
using namespace std;

//gak bisa makek simbol jadi makek PI
#define PI 3.1416

double distance(double x1, double y1, double x2, double y2) {
    return sqrt (pow(x2 - x1, 2) + pow(y2-y1, 2));
}

double radius (double x1, double y1, double x2, double y2) {
    return distance(x1, y1, x2, y2);
}

double diameter (double r) {
    return 2 * r;
}

double circumference(double r) {
    return 2 * PI * r;
}

double area(double r) {
    return PI * pow(r, 2);
}

int main() {
    double x1, y1, x2, y2;

    cout << "input koordinat pusat lingkaran (x1, y1) :   ";
    cin >> x1 >> y1;
    cout << "input koordinat titik pada lingkaran (x2, y2):   ";
    cin >> x2 >> y2;

    double r = radius(x1, y1, x2, y2);
    double d = diameter(r);
    double K = circumference(r);
    double L = area(r);

    cout << " ________________________________" << endl;
    cout << "   HASIL PERHITUNGAN LINGKARAN   " << endl;
    cout << " ________________________________" << endl;
    cout << " Radius(jari-jari) :             " << r << endl;
    cout << " Diamater          :             " << d << endl;
    cout << " Keliling          :             " << K << endl;
    cout << " Luas              :             " << L << endl;
    cout << " ________________________________" << endl;

    return 0;

}