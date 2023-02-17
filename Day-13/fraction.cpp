#include <iostream>
using namespace std;

class Fraction{
private:
    int num;
    int deno;
public:
    Fraction(int n, int d)
    {
        num = n;
        deno = d;
    }

    operator float() const
    {
        return float(num)/float(deno);
    }
};

int main()
{
    Fraction f(2,8);
    float val = f;
    cout << val <<endl;
    return 0;
}