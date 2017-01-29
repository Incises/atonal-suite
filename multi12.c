#include <stdio.h>
main()
{
    printf("Please type your 12-tone row(separated by spaces):\n");
    int typed[12];
    int i, m;
    for(i=0;i<12;i++)
        scanf("%d",&typed[i]);
    printf("Your typed row is:\n");
    for(i=0;i<12;i++)
        printf("%d ",typed[i]);
    printf("\n");
    //m = 5;
    for (m=0;m<12;m++)
    {
        int row[12];
        for(i=0;i<12;i++)
            row[i]=typed[i];
        printf("M%d",m);
        printf("\n");
        for(i=0;i<12;i++)
        {
            row[i]*=m;
            if(row[i]>11)
                row[i]%=12;
        }
        for(i=0;i<12;i++)
            printf("%d ",row[i]);
        printf("\n");
    }
}
