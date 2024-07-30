#include <iostream>
#include<cctype>
using namespace std;
void show(void);

int main()
{
    show();
    char choice;
    while(cin.get(choice))
    {
        switch(choice){
            case 'c':
                cout << "beast!\n";
                break;
            case 'p':
                cout << "good music!\n";
                break;
            case 't':
                cout << "big tree!\n";
                break;
            case 'g':
                cout << "let's play game!\n";
                break;
            default:
                cout << "please enter a c,p,t,or g:";
                continue;
        }
        cin.get();
        cout << "\n";
        show();
    }

}
void show(void)
{
    cout << "Please enter one of the following choices:\n"
         << "c) carnivore  p) pianist\n"
         << "t) tree       g) game \n" ;

}
