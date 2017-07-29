#include <iostream>
using namespace std;
//#define MAXN 1000
int main()
{
    int len;
    cout<<"The length of your row:"<<endl;
    cin>>len;
    cout<<"Type your row (separated by spaces):"<<endl;
    int typed[len];
    int i, m;
    for(i=0;i<len;i++)
        cin>>typed[i];
    cout<<"Your typed row is:"<<endl;
    for(i=0;i<len;i++)
        cout<<typed[i]<<" ";
        cout<<endl;
        cout<<endl;
    //m = 5;
    for (m=0;m<12;m++)
    {
        int row[len];
        for(i=0;i<len;i++)
            row[i]=typed[i];
            //copy the typed row

        cout<<"M"<<m<<" ";
        for(i=0;i<len;i++)
        {
            row[i]*=m;
            if(row[i]>11)
                row[i]%=12;
        }
        for(i=0;i<len;i++)
            cout<<row[i]<<" ";
            cout<<endl;
    }
}
