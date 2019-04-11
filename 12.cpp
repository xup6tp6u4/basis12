#include<stdio.h>
#include<stdlib.h>
void show(int);
int main(void){
	int n;
	printf("½Ð¿é¤J¼Æ¦r:\n");
	scanf("%d",&n);
	show(n);
} 
void show(int n){
	int space;
	for(int i=n;i>0;i--){
		space=n-i;
		if(space>0){
			for(int k=0;k<space;k++){
			printf(" ");	
			}
		}
		
		for(int s=0;s<i;s++){
			printf("%c",'*');
		}
		printf("\n");
	}
}
