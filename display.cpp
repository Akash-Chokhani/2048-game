#include <iostream>
#include "declarations.h"

void display()
{
    static short i,j;
    for(i=0;i<2*n+1;++i)
    {
        if(i%2==0)
        {
            for(j=0;j<8*n+1;++j)
                std::cout<<c[i][j];
            std::cout<<'\n';
        }
        else
            for(j=0;j<3*n+3;)
            {
                std::cout<<c[i][j];
                if(j>n && j<2*n+1)
                {
                    if(a[(i-1)/2][j-n-1]==0)
                        std::cout<<' ';
                    else
                        std::cout<<a[(i-1)/2][j-n-1];
                }
                if(j==2*n+1)
                    std::cout<<' '<<(i+1)/2;
                std::cout<<'\t';
                ++j;
                if(j%(n+1)==0)
                    std::cout<<'\n';
            }
    }
    for(i=0;i<n;++i)
        std::cout<<"    "<<i+1<<"   ";
    std::cout<<"\n\n";
}