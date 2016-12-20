#include<stdio.h>

void obrazek(int proby){

int i,j;

char arr[7][6];
	for(i=0;i<7;i++){
		for(j=0;j<6;j++)
			arr[i][j]=' ';
	}

if(proby<10)
	for(j=0;j<6;j++)
		arr[6][j]='=';
if(proby<9)
	for(i=1;i<6;i++)
		arr[i][0]='|';
if(proby<8){
	arr[0][0]='/';
	arr[0][1]='-';
	arr[0][2]='-';
	arr[0][3]='-';
}

if(proby<7)
	arr[1][3]='|';
if(proby<6)
	arr[2][3]='O';
if(proby<5)
	arr[3][2]='/';
if(proby<4)
	arr[3][3]='|';
if(proby<3)
	arr[3][4]='\\';
if(proby<2)
	arr[4][2]='/';
if(proby<1)
	arr[4][4]='\\';

for(i=0;i<7;i++){
	for(j=0;j<6;j++)
		printf("%c",arr[i][j]);
	printf("\n");
}
}
