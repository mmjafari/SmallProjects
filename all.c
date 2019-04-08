#include<stdio.h>
int power(double a, int b) {
	double res = a;
	for (int i = 0; i < b; i++){
		res = res * a;
	}
	return res;
}
int nth(int arr[], int i) {
	int d[3] = {(arr[1]-arr[0]), (arr[2]-arr[1]), (arr[3]-arr[2])};
	int c[2] = {d[1] - d[0], d[2] - d[1]};
	int f = (arr[1]/arr[0]) + 3 * (arr[2]/arr[1] - arr[1]/arr[0]) + (3 * 2 * (arr[3]/arr[2] + arr[1]/arr[0] - arr[2]/arr[1])) / 2;
	double e[4] = {arr[1]/arr[0],arr[2]/arr[1],arr[3]/arr[2], f};
	double j[3] = {e[1] - e[0], e[2] - e[1], e[3] - e[2]};
	if (i < 4) {
		return arr[i];
	} else if (c[0] == c[1]) {
		return arr[0] + (i-1) * d[0] + ((i - 1)*(i - 2) * c[1]) / 2;
	} else if (e[1] == e[2]) {
		return arr[0] * power(e[0], i - 1);
	} else if (j[1] == j[0]) {
		int res = arr[0];
		int g = e[0];
		for (int z=1; z <= i; z++){
			g =+ j[0];
			res = res * g;
			printf("%d\t%d\n", e[0], res);
		}
		return res;
	}
}
int main(){
	int arr[4];
	for (int i = 0; i <=3; i++){
		printf("Enter %ith term: ", i); scanf("%i",&arr[i]);
	}
	int i;
	printf("yoku: "); scanf("%i",&i);
	printf("%d\n",nth(arr, i));
}