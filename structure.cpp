#include "declarations.h"

void structure()
{
    short i,j;
    for(i=0;i<2*n+1;++i)
    {
        if(i%2==0)
            for(j=0;j<8*n+1;++j)
            {
                if(i%2==0 && j%8==0)
                    c[i][j]='+';
                else
                    c[i][j]='-';
            }
        else
            for(j=0;j<3*n+3;j++)
                c[i][j]='|';
    }
}