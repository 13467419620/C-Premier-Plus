#include <iostream>
#include<cctype>
#include<fstream>
using namespace std;
int main()
{
    ifstream  file;
    file.open("Makefile.txt");
    char ch;
    int count=0;

    while(file.get(ch))
    {
        if(isgraph(ch))
        {
            count++;
        }
        if(file.eof())
        {
            cout << "End of file!" << endl;
            break;
        }
    }

    cout << "This file has " << count << " letters(include dots)\n";

    return 0;
}
