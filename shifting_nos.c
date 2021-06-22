#include<stdio.h>
#include<conio.h>
#define SIZE 80
void input(int[], int);
void display(int[], int);
void shifting(int[], int);
void main(void)
{
  int a[SIZE], n;
  clrscr();
  printf("Enter size of the Array: ");
  scanf("%d",&n);
  input(a,n);
  printf("\nThe entered Array is as follows...\n");
  display(a,n);
  shifting(a,n);
  printf("\n\nThe Array after shifting process...\n");
  display(a,n);
}
void input(int a[], int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("\nEnter element %d = ",i+1) ;
    scanf("%d",&a[i]);
  }
}
void display(int a[], int n)
{
  int i;
  for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}
void shifting(int a[], int n)
{
  int i, temp;
  temp=a[n-1];
  for(i=n-1;i>o;i--)
    a[i]=a[i-1];
  a[0]=temp;
}
