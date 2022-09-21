#include <iostream>
#include <cmath>
#include <iomanip>
#include <bitset>
#include <clocale>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Rus");  // Позволяет писать на русском

    cout << "Задание№1" << endl; //Перевод на следующую строку
    cout << "Клименков Сергей 221-331 " << endl;
    
    cout << "Задание№2" << endl;
    cout << "минимальные/максимальные значения встроенных типов данных и их размер" << endl;
    cout << "min int=" << sizeof(int) << ",max int=" << fixed<< setprecision(2)<< (pow(2, sizeof(int) * 8.0 - 1) - 1) << endl;
    cout << "min unsigned int=" << sizeof(unsigned int) << ",max unsigned int=" << fixed << setprecision(2) << (pow(2, sizeof(unsigned int) * 8.0) - 1) << endl;
    cout << "min short=" << sizeof(short) << ",max short=" << fixed << setprecision(2) << (pow(2, sizeof(short) * 8.0 - 1) - 1) << endl;
    cout << "min unsigned short=" << sizeof(unsigned short) << ",max unsigned short=" << fixed << setprecision(2) << (pow(2, sizeof(unsigned short) * 8.0) - 1) << endl;
    cout << "min long=" << sizeof(long int) << ",max long=" << fixed << setprecision(2) << (pow(2, sizeof(long int) * 8.0 - 1) - 1) << endl;
    cout << "min long long=" << sizeof(unsigned long int) << ",max long long=" << fixed << setprecision(2) << (pow(2, sizeof(unsigned long int) * 8.0) - 1) << endl;
    cout << "min double=" << sizeof(double) << ",max double=" << fixed << setprecision(2) << (pow(2, sizeof(double) * 8.0 - 1) - 1) << endl;
    cout << "min char=" << sizeof(char) << ",max char=" << fixed << setprecision(2) << (pow(2, sizeof(char) * 8.0) - 1) << endl;
    cout << "min bool=" << sizeof(bool) << ",max bool=" << fixed << setprecision(2) << (pow(2, sizeof(bool) * 8.0) - 1) << endl;

    cout << "Задание№3" << endl;
    int i;
    cout << "Введите число:";
    cin >> i;
    cout << "В шестнадцатиричном виде:" << std::hex << i << std::endl;
    cout << "В бинарном виде:" << std::bitset<16>(i) << std::endl;

    cout << "Задание№4" << endl;
    int a, b;
    cout << "Впишите переменные: ";
    cin >> a >> b;
    cout << "x = " << b << "/" << a << " OR " << b / a << endl;

    cout << "Задание№5" << endl;
    int x0, y0, x1, y1;
    cout << "Первая координата: ";
    cin >> x0 >> y0;
    cout << "Вторая координата: ";
    cin >> x1 >> y1;
    cout << "Середина отрезка = " << (x0 + x1) / 2 << " ; " << (y0 + y1) / 2 << endl;

    return 0;
//sizeof-Определяет размер типа данных; fixed-Представляет числа с плавающей запятой; setprecision-установкa чисел с плавающей запятой; pow-вычисляет Х в степени У. 
}
