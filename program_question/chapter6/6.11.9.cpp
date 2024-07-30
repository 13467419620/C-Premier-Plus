#include <iostream>
#include<string>
#include<fstream>
using namespace std;

struct donator
{
    string name;
    double money;
};

int main()
{
    ifstream file;
    file.open("Makefile2.txt");

    int num;
    file >> num;
    file.ignore();
    donator arr[num];

    for(int i=0;i<num;i++)
    {
        getline(file,arr[i].name);
        file >> arr[i].money;
        file.ignore();
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

    cout << "\nPatrons\n";
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

    file.close();
    return 0;
}
