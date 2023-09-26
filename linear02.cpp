/**********************************************************
* Бирюков Марк Валерьевич, ПИ-231
* Share-Link: https://onlinegdb.com/F5GtUILyF
* Тема: Программирование линейных алгоритмов, вариант 2
***********************************************************/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    // init const
    const double PI = 3.14159;
    
    // init variables
    double a, b, c, p, g, division, alpha_low, alpha, x1, x2, x3, y1, y2, y3;
    cout << "Введите a, будьте добры: ";
    cin >> a;
    cout << "Введите b, умоляю: ";
    cin >> b;
    cout << "Введите c, прошу: ";
    cin >> c;
    p = b / a;
    g = c / a;
    
    // calculate sub-variables
    division = -p / 3;    
    alpha_low = sqrt( pow(division, 3) );
    alpha = acos(g / (alpha_low * 2) );
    
    // calculate desired variables
    x1 = 2 * sqrt(division) * cos(alpha / 3);
    x2 = -2 * sqrt(division) * cos( (alpha + PI) / 3);
    x3 = -2 * sqrt(division) * cos( (alpha - PI) / 3);
    
    // print results
    cout.precision(7);
    cout << "x1 = " << x1 << ", x2 = " << x2 << ", x3 = " << x3;

    return 0;
}
