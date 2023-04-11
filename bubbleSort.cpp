#include<stdio.h>
#define SIZE 10
//istersen deðiþken isimlerini yazma 
void bubbleSort(int *a, const int size);
void swap (int *a,int *b);



int main(){
	
	int a[SIZE]={2,6,3,12,10,18,89,68,45,37};
	//sýrayla gelen iki elemaný karþýlaþtýrýp yerlerini deðiþtiricem
	//bu yüzden pointer kullanýyorum.
	
	int i;
	printf("Original array order:\n");
	for(i=0;i<SIZE;i++){
		
		printf("%4d\n",a[i]);
	}
	bubbleSort(a,SIZE);
	printf("Arrey in ordered version:\n ");
	for(i=0;i<SIZE;i++){
	
		printf("%4d\n",a[i]);
}
	return 0;
}
void bubbleSort(int *array,const int size){
	int pass,j;
	for(pass=0;pass<size-1;pass++){
	
		for(j=0;j<size-1;j++){
		
			if(array[j]>array[j+1])
			swap(&array[j],&array[j+1]);	
	}
}
}
void swap(int *ptr1,int *ptr2){
	
	int temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}















