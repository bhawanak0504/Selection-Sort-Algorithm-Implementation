#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
        int min = i;               
        for(int j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            min=j;
        }
        if(min!=i)
        {
            int temp = a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}