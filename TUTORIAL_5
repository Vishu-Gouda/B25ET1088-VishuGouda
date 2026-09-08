#include <iostream>
#include <cmath>
using namespace std;

class Interest
{
public:
    float interest(float p, float r, float t)
    {
        return (p * r * t) / 100;
    }

    float interest(float p, float r, float t, int n)
    {
        return p * pow((1 + r / (100 * n)), n * t) - p;
    }
};

int main()
{
    Interest obj;

    float p, r, t;
    int n;

    cout << "Enter Principal: ";
    cin >> p;

    cout << "Enter Rate: ";
    cin >> r;

    cout << "Enter Time: ";
    cin >> t;

    cout << "\nSimple Interest = " << obj.interest(p, r, t);

    cout << "\n\nEnter number of times interest is compounded per year: ";
    cin >> n;

    cout << "Compound Interest = " << obj.interest(p, r, t, n);

    return 0;
}
