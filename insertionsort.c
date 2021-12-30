#include<stdio.h>
int readnumbers(int [],int);
int insertionsort(int [],int);
int displayresult(int [],int);

int main()
{
    int a[100],n;
    printf("\nEnter the no: of numbers : \t");
    scanf("%d",&n);
    
    readnumbers(a,n);
    insertionsort(a,n);
    displayresult(a,n);
}

int readnumbers(int a[],int n)
{
    int i;
    printf("\nEnter %d numbers which needed to be sorted.\n",n);
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
}

int insertionsort(int a[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp = a[i];
        j = i-1;
        
        while(j>=0 && a[j]>temp)
            {
                a[j+1]=a[j];
                j--;
            }
        a[j+1]=temp;
        
    }
}

int displayresult(int a[],int n)
{
    int i;
    printf("\nNumbers after getting sorted :\t");
    for(i=0;i<=n;i++)
    {
        printf("\n%d",a[i]);
    }
}
