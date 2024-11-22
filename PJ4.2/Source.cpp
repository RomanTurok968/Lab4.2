#include <iostream>
#include <iomanip>
#include <cmath> // ��� pow, log10 �� atan
#include <Windows.h>
using namespace std;

double computeY(double x) {
    if (x < 4) {
        return 5 * pow(x, 3) + pow(x, 6) - pow(x, 2) + 3;
    }
    else if (x >= 4 && x < 7) {
        return pow(x, 3) + 2 + 2 * atan((x + 3) / 2) + 7 * x;
    }
    else { // x >= 7
        return log10(2 * x + exp(5 * x));
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double X_start, X_end, dX;

    // �������� X_start, X_end �� dX
    cout << "������ ��������� �������� (X_start): ";
    cin >> X_start;
    cout << "������ ������ �������� (X_end): ";
    cin >> X_end;
    cout << "������ �������� ����� (dX): ";
    cin >> dX;

    // ��������� ��������� �������
    cout << fixed << setprecision(2);
    cout << " x    |       y" << endl;
    cout << "-------------------" << endl;

    // ���������� �� ��������� ������� y
    for (double x = X_start; x <= X_end; x += dX) {
        double y = computeY(x);
        cout << setw(5) << x << " | " << setw(10) << y << endl;
    }

    return 0;
}
