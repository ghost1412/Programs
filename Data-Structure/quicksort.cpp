#include <iostream>
using namespace std;
#include <vector>
#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
int partition(int a[],int low ,int high){ time_t t;
	 srand((unsigned) time(&t));
	
	int pivot=a[rand()%(high-low)];
	int i=low-1;
	for(int j=low;j<=high-1;j++){
	if(a[j]<=pivot){
	i++;
	swap(&a[i],&a[j]);
	}
	}
	swap(&a[i+1],&a[high]);
	return(i+1);
}
void quicksort(int a[],int low,int high){
	if(low<high){
	int pi=partition(a,low,high);
	quicksort(a,low,pi-1);
	quicksort(a,pi+1,high);
	}
}

int main(){
	int n; cin>>n; int a[n];
	for(int i=0;i<n;i++){
	  cin>>a[i];
  }
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++){
	  cout<<a[i]<<" ";
	}
}
