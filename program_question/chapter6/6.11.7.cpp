#include <iostream>
#include <cctype>
#include<string>

using namespace std;
int main()
{
    cout << "Enter words(q to quit): \n";
    string item;
    int vowels=0,consonants=0,others=0;

    while( cin >> item )
    {
        if(item == "q")
            break;
        if(isalpha(item[0]))
        {
            char new_item = tolower(item[0]);
            if(new_item=='a' || new_item=='e' || new_item=='i' || new_item=='o' || new_item=='u')
                vowels++;
            else
                consonants++;
        }
        else
            others++;
    }

    cout << vowels << " words beginning with vowels\n"
         << consonants << " words beginning with consonants\n"
         << others << " others\n";

    return 0;
}
