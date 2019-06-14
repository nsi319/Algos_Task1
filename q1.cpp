#include <iostream>
#include <math.h>

using namespace std;

void con_binary(int n,int s){
	char arr [106]=" ";
	int i=0;
	for(;i<s;i++){
		if(n%2==1)
			arr[s-i-1]='1';
		else
			arr[s-i-1]='0';
		n=n/2;
	}
	arr[i]='\0';
	for(int j=0;j<i;j++)
        cout<<arr[j];
}
int main (){
	char a[106];

	int n,bin=0;

	cout<<"String length"<<endl;
	cin>>n;

	cout<<"Enter the binary string of 1 and 0"<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];

	for(int i=n-1;i>=0;i--)
		if(a[i]=='1')
			bin = pow(2,n-i-1) + bin ;    // convert to binary

	if(bin==pow(2,n-1)||bin==(pow(2,n)-1)||bin==(pow(2,n-1)+1))
		cout<<"-1"<<endl;
	else {
		con_binary(bin+1,n);
		cout<<" ";
		con_binary(bin-1,n);
		cout<<endl;
		}

}
