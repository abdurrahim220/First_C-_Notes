#include<iostream>
using namespace std;
int main()
{
    int a[5],temp,i,j;

    cout<<"Enter the elements = "<<endl;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
       for(j=0;j<5-i-1;j++)
       {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
       
       }
    }

    cout<<endl<<"Data in asscending order= "<<endl;
    for(j=0;j<5;j++)
    {
        cout<<a[j]<<endl;
    }

    return 0;


}
