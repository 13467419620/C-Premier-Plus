#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout << "计算所得税的程序，输入你的工资，我告诉你税额（输入任何非数字或者负数终止程序)：";

    int wage;

    while(cin >> wage && wage >=0)
    {
        if(wage<=5000)
            cout << "You don't need to pay tax!\n";
        else if(wage<=15000)
            cout << fixed << setprecision(2) << "Tax: " << (wage-5000)*0.1 << endl;
        else if(wage<=35000)
            cout << fixed << setprecision(2) << "Tax: " << (wage-15000)*0.15+1000 << endl;
        else
            cout << fixed << setprecision(2) << "Tax: " << (wage-35000)*0.2+4000 << endl;
    }

    cout << "Bye!\n";

    return 0;
}
