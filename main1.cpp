#include <iostream>
#include<iomanip>
#include<windows.h>


using namespace std;

void input_array(int a[][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"a["<< i<<"]["<< j<<"]="<<endl;
			cin>>a[i][j];
		}
	}
}
void output_array(int a[][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cout<<setw(7)<<a[i][j];
		cout<<endl;	
	}
}
int count_in_array(int a[][3])
{
	int count=0;
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
		if(a[i][j]%5==0)
			count++;
	return count;		
}

void count_in_lines(int a[][3])
{
	int count;
	for(int i=0;i<3;i++)
	{
		count=0;
		for(int j=0;j<3;j++)
			if(a[i][j]%5==0)
				count++;
		cout<<count<<" ";		
	}
	cout<<endl;
}

void count_in_columns(int a[][3])
{
	int count;
	for(int j=0;j<3;j++)
	{
		count=0;
		for(int i=0;i<3;i++)
			if(a[i][j]%5==0)
				count++;
		cout<<count<<" ";		
	}
	cout<<endl;
}
bool count_in_diagonal(int a[][3])
{
	int count_main=0, count_second=0;
	for(int i=0;i<3;i++)
	{
		if(a[i][i]%5==0)
			count_main++;
		if(a[i][3-i-1]%5==0)
			count_second++;	
	}
	if(count_main>count_second)
	 	return true;
	 else
	 	return false;
}

int main(int argc, char** argv) 
{
int a[3][3];
SetConsoleOutputCP(1251);
cout<<"Enter elements of the array:"<<endl;
input_array(a);

cout<<"output the elements of the array:"<<endl;
output_array(a);

cout<<"Count of the elements multiples by 5 in all array:"<<endl;
cout<<count_in_array(a)<<endl;

cout<<"Count of the elements multiples by 5 in all lines:"<<endl;
count_in_lines(a);

cout<<"Count of the elements multiples by 5 in all columns:"<<endl;
count_in_columns(a);
if(count_in_diagonal(a)==true)
{
if(count_in_diagonal(a))
	{cout<<"Count of the elements multiply by 5 in main diagonal>second diagonal:"<<endl;}
else
	{cout<<"second diagonal>main diagonal"<<endl;}	
}

return 0;
} 








