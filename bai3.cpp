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
	cout<<"Cac phan tu lon nhat la: ";
	for(int i=0;i<n;i++)
	{
		int max=arr[i][0];
		for(int j=0;j<m;j++)
		{
		if(arr[i][j] >= max)
			max=arr[i][j];
		}
		cout<<max<<" ";
	}
return 0;
}

	
