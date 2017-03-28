#include <iostream>
#include <conio.h>

using namespace std;
int b_search(int A[],int BEG,int END,int NUM);

int main()
{


    int a[7]={12,20,25,40,55,80,90};
    int num;
    int n=7;
    int beg=0;
    int End=7;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" "<<"\n";
    }
    cout<<"Enter the no to be searched\n";
    cin>>num;
    cout<<b_search(a,0,7,num);
   return 0;
}
int b_search(int A[],int BEG,int END,int NUM)
{
        int mid=(BEG+END)/2;
        cout<<"\nMID="<<mid;
        cout<<"\nBEG="<<BEG;
        cout<<"\nEND="<<END;
        cout<<"\nNUM="<<NUM;
        cout<<"\n A[mid]="<<A[mid]<<"\n";
        if(A[mid]==NUM)
        {
            return(A[mid]);
        }
        else if(BEG==END)
        {
            return(-1);
        }
        if(NUM<A[mid])
        {
            return(b_search(A,BEG,mid-1,NUM));
        }
        else
        {
            return(b_search(A,mid+1,END,NUM));
        }

}
