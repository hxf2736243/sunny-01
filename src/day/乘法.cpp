#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string add(const string &num1, const string &num2)
{
    int i = num1.length() - 1, j = num2.length() - 1, add = 0;
        string ans = "";
        while (i >= 0 || j >= 0 || add != 0) {
            int x = i >= 0 ? num1[i] - '0' : 0;
            int y = j >= 0 ? num2[j] - '0' : 0;
            int result = x + y + add;
            ans.push_back('0' + result % 10);
            add = result / 10;
            i -= 1;
            j -= 1;
        }
        // 计算完以后的答案需要翻转过来
        std::reverse(ans.begin(), ans.end());
        return ans;
}
/**
 * 乘法函数
 */
string multiple(const string &number1, const string &number2)
{
    int length1 = number1.size();
    int length2 = number2.size();
    vector<int> res(length1 + length2, 0);

    for (int i = length1 - 1; i >= 0; i--)
    {
        for (int j = length2 - 1; j >= 0; j--)
        {
            /* code */
            int mul = (number1[i] - '0') * (number2[j] - '0');
            // cout<<mul<<endl;

            //进位位置
            int p1 = i + j;
            //乘积12位置
            int p2 = i + j + 1;

            // 叠加到 res 上
            int sum = mul + res[p2];
            res[p2] = sum % 10;
            res[p1] += sum / 10;
        }
    }

    // 标记第一个不为0的位置
    int i = 0;
    while (i < res.size() && res[i] == 0)
        i++;

    // 将计算结果转化成字符串
    string str;
    for (; i < res.size(); i++)
        str.push_back('0' + res[i]);

    return str.size() == 0 ? "0" : str;
}

int main(int argc, char *args[])
{
    string a;
    string b;
    cout << "please input tow numbers:" << endl;
    cin >> a >> b;
    cout << a << "+" << b << "=";
    cout << add(a, b) << endl;
    cout << a << "*" << b << "=";
    cout << multiple(a, b);

    return EXIT_SUCCESS;
}