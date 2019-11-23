#include <stdio.h>
int main()
{
    int nCr(int, int);
    int scale[4096][13];
    int size[4096];
    int i,j,temp,k;
    int count;
    for(i=0;i<4096;i++)
    {
        scale[i][0]=i;
        temp=i;
        for(j=12;j>=1;j--)
        {
            if(temp%2==1)
                ++size[i];
            scale[i][j]=temp%2;
            temp/=2;
        }
    }
    //for(i=0;i<4096;i++)
    //printf("No. \n");
    for(i=0;i<4096;i++)
    {
        printf("%4d ",scale[i][0]);
        for(j=1;j<=12;j++)
        {
            printf("%d",scale[i][j]);
        }
        printf(" %2d\n",size[i]);
    }
    printf("\n");

    //print according to size
    for(i=0;i<=12;i++)
    {
        //count=0;
        printf("------SIZE%2d------\n",i);
        for(j=0;j<4096;j++)
        {
            if(size[j]==i)
            {
                //count++;
                printf("%4d ",scale[j][0]);
                for(k=1;k<=12;k++)
                    printf("%d",scale[j][k]);
                printf("\n");
            }
        }
        //printf("------%4d  ------\n\n",count);
        printf("------%4d  ------\n\n",nCr(12,i));
    }
    return 0;
}
int nCr(int n,int r)
{
    int i,sn,sr;
    sn=sr=1;
    if(r>n-r)
        r=n-r;
    for(i=1;i<=r;i++)
    {
        sr*=i;
        sn*=(n-i+1);
    }
    return sn/sr;
}
