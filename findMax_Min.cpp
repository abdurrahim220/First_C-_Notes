#include<iostream>
using namespace std;
int main()
{
    int array[10];
    int i, max,min,size;
    cout<<"Enter size of the array= ";
    cin>>size;
    cout<<"\n Enter "<<size <<" elements in the array: ";
    for (i=0; i<size; i++)
    cin>>array[i];

    max = array[0];
    min = array[0];
    
    for(i=1; i<size; i++)
    {
        if(array[i]>max)
        max = array[i];
        
        if(array[i]<min)
        min = array[i];
    }
    cout<<"\nMaximum elemnt = " <<max <<endl;
    cout<<"\nMinmum element = " <<min <<endl;

    return 0;

}