#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int array[] = {2,2,4,4,2,2,4,4};
    int arraylen = sizeof(array) / sizeof(array[0]);
	int count=0,count1=0,min_index=0;
	//插入排序法將數列由小到大排序 
	printf("變更前數列：");
	for(count=0;count<arraylen;count++){
		printf("%d", array[count]);
	} 
	for(count=0;count<arraylen-1;count++){
		count1 = count;
		while(count1 >= 0 && (array[count1] < array[count1 - 1])){
			int temp = 0;
	        temp = array[count1 - 1];
	        array[count1 - 1] = array[count1];
	        array[count1] = temp;
	        count1--;
		}
	}
	printf("\n變更後數列：");
	for(count=0;count<arraylen;count++){
		printf("%d", array[count]);
	} 
    return 0;
}
