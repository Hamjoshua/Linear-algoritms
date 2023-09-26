/*******************************************
* Бирюков Марк Валерьевич, ПИ-231
* Share-Link: https://onlinegdb.com/9fvqpBUJxF
* Тема: Программирование линейных алгоритмов, вариант 2
********************************************/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float PI = 3.14159;
    
    double a = 0.52;
    double b = -3.552;
    double c = 3.24;
    
    double p, g, division, alpha_low, alpha, x1, x2, x3, y1, y2, y3;
    p = b / a;
    g = c / a;
    
    division = -p / 3;
    
    alpha_low = sqrt( pow(division, 3) );
    alpha = acos(g / (alpha_low * 2) );
    
    x1 = 2 * sqrt(division) * cos(alpha / 3);
    x2 = -2 * sqrt(division) * cos( (alpha + PI) / 3);
    x3 = -2 * sqrt(division) * cos( (alpha - PI) / 3);
    
    y1 = a * pow(x1, 3) + (b * x1) + c;
    y2 = a * pow(x2, 3) + (b * x2) + c;
    y3 = a * pow(x3, 3) + (b * x3) + c;
    
    cout.precision(7);
    cout << "x1 = " << x1 << ", x2 = " << x2 << ", x3 = " << x3;

    return 0;
}
