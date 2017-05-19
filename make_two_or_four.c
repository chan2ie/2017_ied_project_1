#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <signal.h>
#include <termios.h>
#include <sys/time.h>

int main(void) {
	
	int b[4][4] = {0};
	int b1, b2;
	int i, j, sum = 0;
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			if (b[i][j] != 0){
				sum += 1;
			}
		}
	}

	srand(time(NULL));

	b1 = rand() % 4;
	b2 = rand() % 4;

	if(sum == 16){
		return 0;
	}
	if(b[b2][b2] == 0){
		if(rand() % 3 == 0){
			b[b1][b2] = 4;

			return 4;
		}
		else{
			b[b1][b2] = 2;

			return 2;
		}
	}

	printf("%d %d %d %d\n",b[0][0],b[0][1],b[0][2],b[0][3]);
	printf("%d %d %d %d\n",b[1][0],b[1][1],b[1][2],b[1][3]);
	printf("%d %d %d %d\n",b[2][0],b[2][1],b[2][2],b[2][3]);
	printf("%d %d %d %d\n",b[3][0],b[3][1],b[3][2],b[3][3]);

	return 0;
}
