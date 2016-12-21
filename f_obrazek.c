#include<stdio.h>

void f_obrazek(int proby){

int i,j;

char arr[9][9];
	for(i=0;i<8;i++){
		for(j=0;j<9;j++)
			arr[i][j]=' ';
	}
	for(j=0;j<9;j++){
		arr[0][j]='-';
		arr[8][j]='-';
	}
	for(i=0;i<9;i++){
		arr[i][0]='|';
		arr[i][8]='|';
	}

	arr[0][0]='/';
	arr[0][8]='\\';
	arr[8][0]='\\';
	arr[8][8]='/';

if(proby<10)
	for(j=2;j<7;j++)
		arr[7][j]='=';
if(proby<9)
	for(i=2;i<7;i++)
		arr[i][2]='|';
if(proby<8){
	arr[1][2]='/';
	arr[1][3]='-';
	arr[1][4]='-';
	arr[1][5]='-';
}

if(proby<7)
	arr[2][5]='|';
if(proby<6)
	arr[3][5]='O';
if(proby<5)
	arr[4][4]='/';
if(proby<4)
	arr[4][5]='|';
if(proby<3)
	arr[4][6]='\\';
if(proby<2)
	arr[5][4]='/';
if(proby<1)
	arr[5][6]='\\';

for(i=0;i<9;i++){
	for(j=0;j<9;j++)
		printf("%c",arr[i][j]);
	printf("\n");
}
}
