#include <stdio.h>
void swap(int *a,int *b);
int inc (int a ,int b  );
int dec(int ,int );
void bubble(int n[],int size,int (*myfun)(int a,int b));


int main(){

int array[]={6,4,8,14,10,16,12,2,18,20};
int i,order;

printf("array in original order:\n");
for(i=0;i<10;i++){
	printf("%d\t",array[i]);
}	
	printf("\nEnter 1 for inc order,2 for dec order:\n");
	scanf("%d",&order);
	if(order==1)
		bubble(array,10,inc);
	
	else
	bubble(array,10,dec);
	printf("Array in order:\n");
	for(i=0;i<10;i++){
		printf("%d\t",array[i]);
	}
	
	return 0;
}
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;	
}
int inc (int a,int b){
	return a>b;
}
int dec (int a,int b){
	return a<b;
}
void bubble(int n[],int size,int (*myfun)(int a,int b)){
	int i,pass;
	for(pass=0;pass<size-1;pass++){
		for(i=0;i<size-1;i++){
			if((*myfun)(n[i],n[i+1]))
			swap (&n[i],&n[i+1]);
		
	}
	
	
}
	
}

















