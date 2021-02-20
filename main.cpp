#include <iostream>
#include "declarations.h"

short n;
int a[5][5];
char c[11][46];
char s;

void structure();
void matrix();
void classic();
void custom();

void refresh()
{
    static bool x=static_cast<bool>(system("cls"));
    if(x==0)
        system("cls");
    else
        system("clear");
}

void input()
{
    for(;;)
    {
        char m;
        std::cout<<"\nMatrix Size(2,3,4,5): ";
        std::cin>>m;
        n=m-48;
        if(n>1 && n<6)
            break;
        else
            std::cout<<"Invalid Input\n";
    }
}

int main()
{
    char m;
    std::cout<<"\t2048 GAME\n\n";
    for(;;)
    {
        std::cout<<"Modes:\n1.Classic\n2.Custom\n\nEnter: ";
        std::cin>>m;
        n=m-48;
        if(n==1)
        {
            input();
            structure();
            for(;;)
            {
                refresh();
                std::cout<<"\t2048 CLASSIC\n\n";
                classic();
                matrix();
            }
        }

        else if(n==2)
        {
            input();
            structure();
            for(;;)
            {
                refresh();
                std::cout<<"\t2048 CUSTOM\n\n";
                custom();
                matrix();
            }
        }
        else
            std::cout<<"Invalid Input\n\n: ";
    }
    return 0;
}