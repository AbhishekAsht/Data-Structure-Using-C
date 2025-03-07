#include<stdio.h>
#include<string.h>

void main(){

	char str1[9];
	char str2[9];

	printf("\t\t\t !! SHRRE GANESHAY NAMMA !!\n");
	printf("\t\t\t\v Enter a name : ");
	fgets(str1,10,stdin);

	printf("\t\t\t\v Enter a Password :");

	fgets(str2,10,stdin);

	if(strcmp(str1,"Abhi") == 0 && strcmp(str2,"pass") == 0){
	
		printf("Wlcome\n");
	}else{
	
		printf("not valid\n");
	}
}
