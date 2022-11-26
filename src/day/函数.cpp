#include <iostream>
using namespace std;

int max(int a, int b)
{
    if (a > b){
        return a;
    }
    else{
        return b;
    }
}
/**
 * 求从1-n连续相乘的结果
*/
int multiplation(int n){
 int ji = 1;
    for (int c = 1; c <= n; c++)
    {
        ji = ji * c;
    }
    cout << "ji=" << ji << endl;
    return ji;
}
int main()
{
    cout << "请输入两个数比大小：" << endl;
    int a, b;
    cin >> a >> b;
    cout << "大数是：" << max(a, b) << endl;


    cout << "请输入一个整数求它的阶乘：" << endl;
    int n;
    cin >> n;
    cout <<n<< "的阶乘=：" << multiplation(n) << endl;


    return 0;
}