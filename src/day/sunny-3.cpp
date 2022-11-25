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

     // 1-100的和
    int he = 0;
    for (int b = 1; b <= 100; b++)
    {
        he = he + b;
    }
    cout << "he=" << he << endl;
   
   //从1乘到10
 int ji = 1;
    for (int c = 1; c <= 10; c++)
    {
        ji = ji *c;
    }
     cout << "ji=" << ji << endl;   
    return 0;
}