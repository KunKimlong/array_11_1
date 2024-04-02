#include<stdio.h>
int main(){
	int arr[10];
	int i,n,op;
	do{
		printf("-------- Menu ----------\n");
		printf("1. Input \n");
		printf("2. Output \n");
		printf("3. Sum \n");
		printf("Enter option: ");scanf("%d",&op);
		switch(op){
			case 1:{
				printf("------ Input -------\n");
				printf("Enter N: ");scanf("%d",&n);
				for(i=0;i<n;i++){
					printf("Enter number of array[%d]: ",i);
					scanf("%d",&arr[i]);
				}
				break;
			}
			case 2:{
				printf("------ Output -------\n");
				for(i=0;i<n;i++){
					printf("Array[%d] = %d\n",i,arr[i]);
				}
				break;
			}
			case 3:{
				printf("------ Sum -------\n");
				int sum = 0 ;
				for(i=0;i<n;i++){
					sum = sum+arr[i];
				}
				printf("Sum of Array = %d\n",sum);
				break;
			}
		}
	}while(1);
	return 0;
}
