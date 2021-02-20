#include <iostream>
#include "declarations.h"
void display();

void custom()
{
    static short i,j,v;
    static char m;
    if(s!=0)
        a[i-1][j-1]=0;
    display();
    for(;;)
    {
        std::cout<<"Enter 0 to Quit\nCoordinates(x y): ";
        std::cin>>m;
        i=m-48;
        if(i==0)
            exit(0);
        std::cin>>m;
        j=m-48;
        if(a[i-1][j-1]==0 && i<n+1 && j<n+1)
            break;
        else
            std::cout<<"Invalid input\n";
    }

    for(;;)
    {
        std::cout<<"Value(2 or 4): ";
        std::cin>>m;
        v=m-48;
        if(v==2 || v==4)
        {
            a[i-1][j-1]=v;
            break;
        }
        else
            std::cout<<"Invalid input\n\n";
    }

    for(;;)
    {
        std::cout<<"Swipe direction(a,d,w,s): ";
        std::cin>>s;
        if(s=='a' || s=='d' || s=='w' || s=='s')
            break;
        else
            std::cout<<"Invalid input\n";
    }
}