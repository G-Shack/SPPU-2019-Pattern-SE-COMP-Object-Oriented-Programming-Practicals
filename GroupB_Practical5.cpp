#include<iostream>
using namespace std;
int n,m;

template<class T>
void sel(T A[10])
{
    int i,j,min;
    T temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(A[j]<A[min])
            min=j;
        }
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;
    }
    cout<<"\nSorted array:";
    for(i=0;i<n;i++)
    {
        cout<<" "<<A[i];
    }
}

int main()
{
    int A[10];
    float B[10];
    int i;
   
    cout<<"\nEnter total no of integer elements:";
    cin>>n;
    cout<<"\nEnter integer elements:";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    sel(A);
   
    cout<<"\nEnter total no of float elements:";
    cin>>m;
    cout<<"\nEnter float elements:";
    for(i=0;i<m;i++)
    {
        cin>>B[i];
    }
    sel(B);
}
