#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <signal.h>
#include <termios.h>
#include <sys/time.h>
void rotate(int b[4][4]) {
	
	int temp[4][4];
	int i,j;
	
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

int main(void) {
	
	int b[4][4] = {{2, 0, 4, 2}, {2, 4, 2, 0}, {16, 4, 0, 2}, {2, 4, 8, 8}};
	int i, k;
	char dir;

	printf("%d %d %d %d\n",b[0][0],b[0][1],b[0][2],b[0][3]);
	printf("%d %d %d %d\n",b[1][0],b[1][1],b[1][2],b[1][3]);
	printf("%d %d %d %d\n",b[2][0],b[2][1],b[2][2],b[2][3]);
	printf("%d %d %d %d\n",b[3][0],b[3][1],b[3][2],b[3][3]);

	printf("Input W / A / S / D: ");
	scanf("%c",&dir);

	if(dir == 'w' || dir == 'W'){
		for (i = 0; i < 1; i++){
			rotate(b);
		}
	}
	if(dir == 'a' || dir == 'A'){
		for (i = 0; i < 2; i++){
			rotate(b);
		}
	}

	if(dir == 'S' || dir == 's'){
		for (i = 0; i < 3; i++){
			rotate(b);
		}
	}

	for(i = 3; i > 0; i--){
		for(j = 4; j > 0; j--){
			if (b[i][j] == b[i][j-1]){
				b[i][j] += b[i][j-1];
				//오른쪽으로 합치는 거 생각중이쟝~ 계속 고민 해 보세요
			}
		}
	}

	printf("%d %d %d %d\n",b[0][0],b[0][1],b[0][2],b[0][3]);
	printf("%d %d %d %d\n",b[1][0],b[1][1],b[1][2],b[1][3]);
	printf("%d %d %d %d\n",b[2][0],b[2][1],b[2][2],b[2][3]);
	printf("%d %d %d %d\n",b[3][0],b[3][1],b[3][2],b[3][3]);

	return 0;
}
