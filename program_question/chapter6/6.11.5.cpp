#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout << "��������˰�ĳ���������Ĺ��ʣ��Ҹ�����˰������κη����ֻ��߸�����ֹ����)��";

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
