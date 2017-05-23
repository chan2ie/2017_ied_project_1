#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <signal.h>
#include <termios.h>
#include <sys/time.h>

int main(void) {
	
	int b[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int temp[4][4];
	int i,j;

	printf("%d %d %d %d\n",b[0][0],b[0][1],b[0][2],b[0][3]);
	printf("%d %d %d %d\n",b[1][0],b[1][1],b[1][2],b[1][3]);
	printf("%d %d %d %d\n",b[2][0],b[2][1],b[2][2],b[2][3]);
	printf("%d %d %d %d\n",b[3][0],b[3][1],b[3][2],b[3][3]);
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			temp[i][j] = b[i][j];
		}
	}

	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			b[j][3 - i] = temp[i][j];
		}
	}



	printf("%d %d %d %d\n",b[0][0],b[0][1],b[0][2],b[0][3]);
	printf("%d %d %d %d\n",b[1][0],b[1][1],b[1][2],b[1][3]);
	printf("%d %d %d %d\n",b[2][0],b[2][1],b[2][2],b[2][3]);
	printf("%d %d %d %d\n",b[3][0],b[3][1],b[3][2],b[3][3]);
	return 0;
}
