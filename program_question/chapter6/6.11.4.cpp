#include <iostream>
#include<cctype>
#define SIZE 5
using namespace std;
const int strsize=20;
void show(void);
void func_a( struct bop arr[SIZE]);
void func_b(struct bop arr[SIZE]);
void func_c(struct bop arr[SIZE]);
void func_d(struct bop arr[SIZE]);

struct bop
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

int main()
{
     bop arr[SIZE]={
    {"Wimp Macho", "Junior Programmer", "WM",0},
    {"Raki Rhodes", "Junior Programmer", "RR", 1},
    {"Celia Laiter", "Junior Programmer", "MIPS", 2},
    {"Hoppy Hipman", "Analyst Trainee", "HH", 1},
    {"Pat Hand", "Junior Programmer", "LOOPY", 2}
    };
    char answer;

    show();
    while( (answer=cin.get()) != 'q')
    {
        switch(answer)
        {
            case 'a':
                func_a(arr);
                break;
            case 'b':
                func_b(arr);
                break;
            case 'c':
                func_c(arr);
                break;
            case 'd':
                func_d(arr);
                break;
        }
        cin.get();
        cout << "\n";
        show();
    }
    cout << "Bye!" << endl;

    return 0;
}

void show(void)
{
    cout << "a. display by name    b. display by title\n"
         << "c. display by bopname  d. display by preference\n"
         << "q. quit\n";
}

void func_a(bop arr[SIZE])
{
    for(int i=0;i<SIZE;i++){
        cout << arr[i].fullname << endl;
    }
}
void func_b(bop arr[SIZE])
{
    for(int i=0;i<SIZE;i++){
        cout << arr[i].title << endl;
    }
}
void func_c(bop arr[SIZE])
{
    for(int i=0;i<SIZE;i++){
        cout << arr[i].bopname << endl;
    }
}
void func_d(bop arr[SIZE])
{
    for(int i=0;i<SIZE;i++){
        cout << (arr[i].preference==0?arr[i].fullname:arr[i].preference==1?arr[i].title:arr[i].bopname) << endl;
    }
}
