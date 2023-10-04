#include <stdio.h>
struct car{
	int price;
	int platesNo;
};
int main() {
	struct car arr[3];
	struct car *ptr=&arr[0];
    
	for(int i=0;i<3;i++){
		printf("User %d, Please enter price: ", i+1);
		scanf("%d", &arr[i].price);
		printf("User %d, Please enter plates Number: ", i+1);
		scanf("%d", &arr[i].platesNo);
	}
    
	for(int i=0;i<3;i++){
		printf("User %d's car price is: %d\n", i+1, arr[i].price);
		printf("User %d's plates Number is: %d\n", i+1, arr[i].platesNo);
	}
    
	for(int i=0;i<3;i++){
		printf("User %d's car price is: %d\n", i+1, ptr->price);
		printf("User %d's plates Number is: %d\n", i+1, ptr->platesNo);
		ptr++;
	}
}