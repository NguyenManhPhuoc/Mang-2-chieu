#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[10][10];
	int n,m;
	cout<<"n = "; cin>>n;
	cout<<"m = "; cin>>m;
	cout<<"Nhap mang: "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	int sum=0;
	cout<<"Tong cac gia tri bien la: ";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{					
			if(i==0 || j==0 || i==n-1 || j==m-1){
			sum+=arr[i][j];
			}
		}
	} 
		cout<<sum;
return 0;
}

	
