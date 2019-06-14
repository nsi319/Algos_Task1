#include<iostream>
using namespace std;

int main () {
  int n,r,x,y,nr,k=0;
  cout<<"Enter the number of days: ";
  cin>>n;
  int c[n],s[n];
  cout<<"Enter initial rating, increase and decrease: ";
  cin>>r>>x>>y;
  cout<<"Enter contest input (0 and 1): "<<endl;
  for(int i=0;i<n;i++)
    cin>>c[i];
  cout<<"Enter food input (0 and 1): "<<endl;
  for(int i=0;i<n;i++)
    cin>>s[i];
    nr=r;
    cout<<endl;

    while(k<n) {
        if(c[k]==1 && s[k]==1)
          nr = nr + x;
        else if (c[k]==1 && s[k]==0)
          nr = nr - y;
    k++;
    }
    if(nr>r)
        cout<<" \"promoted\" ";
    else if (nr<r)
        cout<<" \"not promoted\" ";
    else
        cout<<" \"no change\" ";
}

