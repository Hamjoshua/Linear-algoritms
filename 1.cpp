#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float PI = 3.14159;
    
    float a = 0.52;
    float b = -3.552;
    float c = 3.24;
    
    float p = b / a;
    float g = c / a;
    
    float division = -p / 3;
    
    float alpha_low = sqrt( pow(division, 3) );
    float alpha = acos(g / (alpha_low * 2) );
    
    float x1 = 2 * sqrt(division) * cos(alpha / 3);
    float x2 = -2 * sqrt(division) * cos( (alpha + PI) / 3);
    float x3 = -2 * sqrt(division) * cos( (alpha - PI) / 3);
    
    float y1 = a * pow(x1, 3) + (b * x1) + c;
    float y2 = a * pow(x2, 3) + (b * x2) + c;
    float y3 = a * pow(x3, 3) + (b * x3) + c;
    
    cout.precision(7);
    cout << "x1 = " << x1 << ", x2 = " << x2 << ", x3 = " << x3;

    return 0;
}
