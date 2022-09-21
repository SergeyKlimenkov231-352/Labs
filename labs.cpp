#include <iostream>
#include <cmath>
#include <iomanip>
#include <bitset>
#include <clocale>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Rus");
    cout << "Клименков Сергей 221-331 " << endl;

    int x0, y0, x1, y1;

    cout << "Первая координата: ";
    cin >> x0 >> y0;
    cout << "Вторая координата: ";
    cin >> x1 >> y1;
    cout << "Середина отрезка = " << (x0 + x1) / 2 << " ; " << (y0 + y1) / 2 << endl;

    int a, b;
    cout << "Впишите переменные: ";
    cin >> a >> b;
    cout << "x = " << b << "/" << a << " OR " << b / a << endl;

    int i;
    cout << "Введите число:";
    cin >> i;

    cout << "В шестнадцатиричном виде:" << std::hex << i << std::endl;

    cout << "В бинарном виде:" << std::bitset<16>(i) << std::endl;

    cout << "минимальные максимальные значения встроенных типов данных и их размер" << endl;


    cout << "     data type      " << "byte" << "      " << "    max  " << endl
        << "bool               =  " << sizeof(bool) << "         " << fixed << setprecision(2)
        << (pow(2, sizeof(bool) * 8.0) - 1) << endl
        << "char               =  " << sizeof(char) << "         " << fixed << setprecision(2)
        << (pow(2, sizeof(char) * 8.0) - 1) << endl
        << "short int          =  " << sizeof(short int) << "         " << fixed << setprecision(2)
        << (pow(2, sizeof(short int) * 8.0 - 1) - 1) << endl
        << "unsigned short int =  " << sizeof(unsigned short int) << "         " << fixed << setprecision(2)
        << (pow(2, sizeof(unsigned short int) * 8.0) - 1) << endl
        << "int                =  " << sizeof(int) << "         " << fixed << setprecision(2)
        << (pow(2, sizeof(int) * 8.0 - 1) - 1) << endl
        << "unsigned int       =  " << sizeof(unsigned int) << "         " << fixed << setprecision(2)
        << (pow(2, sizeof(unsigned int) * 8.0) - 1) << endl
        << "long int           =  " << sizeof(long int) << "         " << fixed << setprecision(2)
        << (pow(2, sizeof(long int) * 8.0 - 1) - 1) << endl
        << "unsigned long int  =  " << sizeof(unsigned long int) << "         " << fixed << setprecision(2)
        << (pow(2, sizeof(unsigned long int) * 8.0) - 1) << endl
        << "float              =  " << sizeof(float) << "         " << fixed << setprecision(2)
        << (pow(2, sizeof(float) * 8.0 - 1) - 1) << endl
        << "double             =  " << sizeof(double) << "         " << fixed << setprecision(2)
        << (pow(2, sizeof(double) * 8.0 - 1) - 1) << endl;
    system("pause");


    return 0;

}
