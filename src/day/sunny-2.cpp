#include<iostream>
using namespace std;
int main(){
    int sunny_age=10;
    int dad_age=42;

    //求差
    int diff=dad_age-sunny_age;
    cout<<diff<<endl;

    //求和
    int sum =sunny_age+dad_age;
    cout<<sum<<endl;
    /**
     * 如果 if
     * 少年 按0~14岁
     * 壮年 15~64岁
     * 老年 65岁以上
    */

   int age;
   cin>>age;
   if (age<15)
   {
    cout<<"you are a kid."<<endl;
   }
   if (age<65 && age>14)
   {
    cout<<"you are a young."<<endl;
   }
    if (age>64)
   {
    cout<<"you are an old."<<endl;
   }

    return 0;
}