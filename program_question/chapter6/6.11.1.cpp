#include <iostream>
#include<cctype>
using namespace std;
int main()
{
    char ch;

    while(ch=(cin.get()) != '@')
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            if (isupper(ch))
                cout << tolower(ch);
            else
                cout << toupper(ch);
            continue;
        } 
        cout << ch ;
    }
}
