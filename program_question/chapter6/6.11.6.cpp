#include <iostream>
#include<cctype>
using namespace std;
const int strsize=20;

struct donator
{
    char name[strsize];
    double money;
};

int main()
{
    cout << "Enter the number of donators: ";
    int num;
    cin >> num;

    donator arr[num];
    cout << "Enter the donator's name and the money he/she donated: \n";
    for(int i=0;i<num;i++)
    {
        cin >> arr[i].name >> arr[i].money;
        if(i!=num-1)
            cout << "Next\n";
    }

    cout << "\nGrand Patrons\n";
    int count=0;
    for(int i=0;i<num;i++)
    {
        if(arr[i].money>1000)
        {
            cout << arr[i].name << " " << arr[i].money << endl;;
            count++;
        }

        if(count==0 && i==num-1)
            cout << "none\n";
    }

    cout << "\nsPatrons\n";
    count=0;
    for(int i=0;i<num;i++)
    {
        if(arr[i].money<=1000)
        {
            cout << arr[i].name << " " << arr[i].money << endl;;
            count++;
        }

        if(count==0 && i==num-1)
            cout << "none\n";
    }
    return 0;
}
