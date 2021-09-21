#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void Checkpath();
int truth=0;
int map[100][100];
int n, m;
int main() {
	printf("Enter the number of row : ");
	scanf("%d",&n);
	printf("Enter the number of colume : ");
	scanf("%d", &m);
	for (int i=0; i < n;i++) {
		for (int j=0; j < m;j++) {
			scanf("%d",&map[i][j]);
		}
	}
	if (map[0][0] == 0) {
		Checkpath();
		if (truth == 1) {
			printf("Yes");
		}
		else {
			printf("No");
		}
	}
	else {
		printf("Error start point is unavailable.");
	}
	return 0;
}
void Checkpath () {
	int i=0, j=0;
	while (j < m) {
		while (i < n) {
			while (j < m) {
				if (map[i][j + 1] == 0 && j+1 < m) {
					truth = 1;
					j++;
				}
				else if(j == m-1){
					truth = 1;
					break;
				}
			}
			if (map[i+1][j]==0 && i + 1 < n && j != m-1) {
				truth = 1;
				i++;
			}
			else if (j == m-1) {
				truth = 1;
				break;
			}
			else {
				truth = 0;
				break;
			}
		}
		if (truth == 0 || truth == 1) {
			break;
		}
	}
}
