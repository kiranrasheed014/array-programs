#include <iostream>
using namespace std;

int main() 
{
    int d, y, w;
    cout << "Enter the days::\n";
    cin >> d;
    y = (d / 365);
    w = (d % 365) / 7;
    d = d - ((y * 365) + (w));
    cout << "\n" << y << " Year, " << w << " Weeks, and " << d << " Days\n";
    return 0;
}