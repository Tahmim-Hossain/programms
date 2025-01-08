#include<iostream>
#include<string>
using namespace std;
int info(string name[],int id[],int size )
{
    for( int i=0;i<size;i++ )
    {
        cout <<name[i];
        cout<<id[i];
        cout<<endl<<endl;
    }
}
int main()
{
    string name[3];
    int id[3];
    for( int i=0;i<3;i++ )
    {
        cin>>name[i];
        cin>>id[i];
    }
    info(name,id,3);
    return 0;

}

