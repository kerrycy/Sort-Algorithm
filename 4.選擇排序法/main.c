#include <stdio.h>
#include <stdlib.h>
void swap(int *, int *);
void printfArray(int *, int *);
int main(int argc, char *argv[]) {
	int array[] = {2,2,4,4,2,2,4,4};
    int arraylen = sizeof(array) / sizeof(array[0]);
	int count=0,count1=0,min_index=0;
	//��ܱƧǪk�N�ƦC�Ѥp��j�Ƨ� 
	printf("�ܧ�e�ƦC�G");
	printfArray(array ,&arraylen);
	for(count=0;count<arraylen-1;count++){
		min_index=count;
		for(count1=count+1;count1<arraylen;count1++){
			if(array[min_index]>array[count1]){
				min_index=count1;
        	}
		}
		int temp = 0;
		swap(&array[min_index] ,&array[count]);
	}
	printf("\n�ܧ��ƦC�G");
	printfArray(array ,&arraylen);
    return 0;
}

void swap(int *number1 ,int *number2){
	int temp;
	temp=*number1;
	*number1=*number2;
	*number2=temp;
}

void printfArray(int *array ,int *arraylen){
	int count;
	for(count=0;count<*arraylen;count++){
		printf("%d ",array[count]);
	}
}
