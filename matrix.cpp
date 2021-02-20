#include "declarations.h"

void matrix()
{
    static short i,j,r;
    if(s=='a')
    {
        for(i=0;i<n;)
        {
            r=0;
            for(j=0;j<n-1;++j)
            {
                if(a[i][j]==0 && a[i][j+1]!=0)
                {
                    a[i][j]=a[i][j+1];
                    a[i][j+1]=0;
                    ++r;
                    s=0;
                }
                if(a[i][j]!=0 && a[i][j]==a[i][j+1])
                {
                    a[i][j]*=2;
                    a[i][j+1]=0;
                    ++r;
                    s=0;
                }
            }
            if(r==0)
                ++i;
        }
    }

    else if(s=='d')
    {
        for(i=0;i<n;)
        {
            r=0;
            for(j=n-1;j>0;--j)
            {
                if(a[i][j]==0 && a[i][j-1]!=0)
                {
                    a[i][j]=a[i][j-1];
                    a[i][j-1]=0;
                    ++r;
                    s=0;
                }
                if(a[i][j]!=0 && a[i][j]==a[i][j-1])
                {
                    a[i][j]*=2;
                    a[i][j-1]=0;
                    ++r;
                    s=0;
                }
            }
            if(r==0)
                ++i;
        }
    }

    else if(s=='w')
    {
        for(j=0;j<n;)
        {
            r=0;
            for(i=0;i<n-1;++i)
            {
                if(a[i][j]==0 && a[i+1][j]!=0)
                {
                    a[i][j]=a[i+1][j];
                    a[i+1][j]=0;
                    ++r;
                    s=0;
                }
                if(a[i][j]!=0 && a[i][j]==a[i+1][j])
                {
                    a[i][j]*=2;
                    a[i+1][j]=0;
                    ++r;
                    s=0;
                }
            }
            if(r==0)
                ++j;
        }
    }

    else if(s=='s')
    {
        for(j=0;j<n;)
        {
            r=0;
            for(i=n-1;i>0;--i)
            {
                if(a[i][j]==0 && a[i-1][j]!=0)
                {
                    a[i][j]=a[i-1][j];
                    a[i-1][j]=0;
                    ++r;
                    s=0;
                }
                if(a[i][j]!=0 && a[i][j]==a[i-1][j])
                {
                    a[i][j]*=2;
                    a[i-1][j]=0;
                    ++r;
                    s=0;
                }
            }
            if(r==0)
                ++j;
        }
    }
}