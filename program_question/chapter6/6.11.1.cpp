#include <iostream>
#include<cctype>
using namespace std;
int main()
{
    char ch;

    while((ch=cin.get()) != '@')
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            if (isupper(ch))
                cout << char(tolower(ch));
            else
                cout << char(toupper(ch));
            continue;
        }

        if(isdigit(ch))
            continue;

        cout << ch ;
    }
}
