#include<iostream>
using namespace std;

int midcut(char a[1000000],int s){

	int n=s/2,flag=1,c=0;
	while(n>=1 && flag==1){
		for(int i=0;i<n && flag==1;i++)
			if(a[i]!=a[n+i])
				flag=0;
		if(flag==1)
			c++;
		n=n/2;
	}
	return c;
}

int main (){
	char a[1000000];
	int n;
    cout<<"Enter size in power of 2:"<<endl;   // can check input using do while ( n & n-1 = 0)
    cin>>n;
    cout<<"Enter lower-case alphabets separately:"<<endl;
	for(int i=0;i<n;i++){
     cin>>a[i];
	}
	cout<<"The degree of symmetry is: "<<midcut(a,n)<<endl;
}
