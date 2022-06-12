#include<iostream>
using namespace std;

int find_MaxMin1(int a[],int n)
{
    int i, max=0, min=0;
    for(i=1; i<n; i++)
    {
        if(a[i]>max)
        max = a[i];
        if(a[i]<min)
        min = a[i];
    }
}
int main()
{
    int i, array[50], size, max, min;

	cout<<"Input number of elements in array\n";
	cin>>size;

	cout<<"Enter "<< size << " integers\n";
	for(i=0;i<size;i++)
	cin>>array[i];

	max = find_MaxMin1(array,size); //calls the max function
    min = find_MaxMin1(array,size);

	// Print maximum and minimum element
	cout<<"Maximum element in the array is:" << max << "\n";
	cout<<"Minimum element in the array is:" << min << "\n";
    
}