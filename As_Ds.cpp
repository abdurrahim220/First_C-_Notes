#include <iostream>
using namespace std;
//sort Ascending( ); 
//sort Descending( ); 
int main(){
	int num[100],n;
int i,j,man;
cout<<"enter n for the numbers you want to sort"<<endl<<endl;
cin>>n;
	for(i=0;i<n;i++)
    {		
	cout<<"enter number"<<endl;
	cin>>num[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(num[i]<num[j]){
				man=num[i];
				num[i]=num[j];
				num[j]=man;
			}			
		}
	}
	cout<<"ascending "<<endl;
	for(i=0;i<n;i++){
	cout<<" "<<num[i]<<endl;;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(num[i]>num[j]){
				man=num[i];
				num[i]=num[j];
				num[j]=man;
			}			
		}
	}
	cout<<" descending"<<endl;
	for(i=0;i<n;i++){
		cout<<" "<<num[i]<<endl;
}
return 0;
}