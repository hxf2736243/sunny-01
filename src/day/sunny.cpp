#include <iostream>
using namespace std;
int main(int argc, char *args[])
{
    cout << "胡泽琪人生中第一个代码" << endl;
    int age = 10;
    cout << "size of int:" << sizeof(int) << endl;
    char ch = 'A';
    float a = 1.1;
    double b = 12.3;

    cout << "老爸得给我买1000个盲盒" << sizeof(char) << endl;
    cout << "老爸得给我买1000个盲盒" << sizeof(float) << endl;
    cout << "老爸得给我买1000个盲盒" << sizeof(double) << endl;

    cout << "老爸得给我买1000个盲盒" << sizeof(long) << endl;
    cout << "老爸得给我买1000个盲盒" << sizeof(long long int) << endl;
    cout << "老爸得给我买1000个盲盒" << sizeof(bool) << endl;
    cout << "老爸得给我买1000个盲盒" << sizeof(void) << endl;

    return 0;
}