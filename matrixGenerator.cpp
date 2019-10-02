#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int p[12][12]={0};//Prime
    int iv[12][12]={0};//Inversion
    /*
    Just count backward >_<
    int r[12][12];//Retrograde
    int ri[12][12];//Retrograde Inversion
    */
    int i,j;
    //int temp;
    cout<< "Enter the P0 row(separated by spaces): (The first note should be 0.)" << endl;
    //
    for(j=0;j<=11;++j)
        cin>>p[0][j];//P0
    for(i=1;i<=11;++i)
        for(j=0;j<=11;++j)
        {
            p[i][j]=p[0][j]+i;
            while(p[i][j]>=12)
                p[i][j]-=12;
        }
    for(j=0;j<=11;++j)
        iv[0][j]=p[0][j];
    for(j=1;j<=11;++j)
        iv[0][j]=-iv[0][j]+12;
    for(i=1;i<=11;++i)
        for(j=0;j<=11;++j)
        {
            iv[i][j]=iv[0][j]+i;
            while(iv[i][j]>=12)
                iv[i][j]-=12;
        }
    //print prime row
    for(i=0;i<=11;++i)
    {
            cout<<"P"<<setiosflags(ios::left)<<setw(2)<<i<<": ";
        for(j=0;j<=11;++j)
            cout<<setw(2)<<p[i][j]<<" ";
        cout<<":R"<<p[i][11]<<endl;
    }
    cout<<endl;
    //print inversion row
     for(i=0;i<=11;++i)
    {
            cout<<"I"<<setiosflags(ios::left)<<setw(2)<<i<<": ";
        for(j=0;j<=11;++j)
            cout<<setw(2)<<iv[i][j]<<" ";
        cout<<":RI"<<iv[i][11]<<endl;
    }
}
