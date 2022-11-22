#include <iostream>
using namespace std;

int main()
{
    //循环求1-10的和
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }
    cout << "sum=" << sum << endl;
    int he = 0;
    for (int b = 1; b <= 100; b++)
    {
        he = he + b;
    }
    cout << "he=" << he << endl;
    // 1-100的和

    return 0;
}