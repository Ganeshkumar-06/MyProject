#include<iostream>
using namespace std;
void s(int &x,int &y) {
    int t=x;
    x=y;
    y=t;

}
void ascen(int a[],int m){
int i,j;
    for(i=0; i<m; i++)
        for(j=i+1; j<m; j++)
            if(a[i]>a[j]) {
              s(a[i],a[j]);
            }
    cout<<"ascending:";
    for(i=0; i<m; i++)
        printf("%d ",a[i]);
}
void descen(int b[],int m){
int i,j;
    for(i=0; i<m; i++)
        for(j=i+1; j<m; j++)
            if(b[i]<b[j]) {
              s(b[i],b[j]);
            }
    cout<<"descending:";
    for(i=0; i<m; i++)
        printf("%d ",b[i]);
}

int main()
{
    int ar[45],n,i;
    cout<<"enter limit:";
    cin>>n;
    for(i=0; i<n; i++)
        cin>>ar[i];
    ascen(ar,n);
    cout<<endl;
    descen(ar,n);
    return 0;
}