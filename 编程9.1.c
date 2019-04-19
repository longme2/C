#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void quicksort(int a[],int n); 
int main(int argc, char *argv[])
 {
 	int i, n;
 	printf("How many number do you want to everse?");
 	scanf("%d",&n);
 	int a[n];
 	printf("Enter %d number: ",n);
 	for(i=0;i<n;i++)
 	 scanf("%d",&a[i]); 
 	quicksort(a,n);
	printf("The reversal is: ");
	for(i=0;i<n;i++)
	 printf("%d",a[i]);
	 return 0;
	}
	void quicksort(int a[],int n) {
		int max,j;
		if(n==1)
		return;
		max=selection_sort(a,n);
		j=a[n-1];
		a[n-1]=a[max];
		a[max]=j;
		quicksort(a,n-1);
	}
	int selection_sort(int a[],int n) {
		int max,i;
		max=0;
		for(i=1;i<n;i++)
		if(a[i]>a[max])
		max=i;
		return max;
	}
