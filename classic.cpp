#include <iostream>
#include <chrono>
#include "declarations.h"
void display();

void classic()
{
    static int x;
    static std::chrono::time_point<std::chrono::steady_clock> t=std::chrono::steady_clock::now();
    for(;;)
    {
        if(s!=0)
            break;
        x=std::chrono::duration_cast<std::chrono::duration<int,std::micro>>(std::chrono::steady_clock::now()-t).count();
        x=x-(x/100)*100;
        if(a[x*n/100][x%n]==0)
        {
            a[x*n/100][x%n]=((x-(x/10)*10)/9+1)*2;
            break;
        }
    }

    display();
    for(;;)
    {
        std::cout<<"Swipe direction-a,d,w,s  Change-r  Quit-p\nEnter: ";
        std::cin>>s;
        if(s=='a' || s=='d' || s=='w' ||s=='s')
            break;
        else if(s=='r')
        {
            a[x*n/100][x%n]=0;
            s=0;
            break;
        }
        else if(s=='p')
            exit(0);
        else
            std::cout<<"Invalid input\n\n";
    }
}