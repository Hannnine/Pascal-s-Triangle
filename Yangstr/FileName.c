#include <stdio.h>
#include <math.h>

void trfun(n);
//打印三角形形状
void space(i,n);
//每行前面加空格
void trfun_ret(i,j);
//返回值
int plus(n);

int main() {
	int n;
	printf("How many lines you want to list?[0~9]: ");
	scanf("%d", &n);

	if (0 > n || 9 < n) {
		printf("Incorrect number!");
		return 0;
	}
	else
		trfun(n);
	return 0;
}

void trfun(n) {
	int i, j;
	i = j = 1;
	int cnt = 1;
	for (i; i <= n; i++) {
		space(i, n);			//打印前置空格
		for (j; j <= cnt; j++) {
			trfun_ret(i,j);		//打印每个数
			if (j != cnt)
				printf("  ");
		}
		printf("\n");
		j = 1;
		cnt++;
	}
}

void space(i,n) {
	for (int a = 1; a <= n - i; a++) {
		printf("  ");
	}
}

void trfun_ret(i,j) {
	int m = i - 1;
	int n = j - 1;
	int ans = plus(m) / (plus(n) * plus(m - n));
	if (0 < ans && 9 >= ans)
		printf("0%d", ans);
	else
		printf("%d", ans);
}

int plus(n) {
	int a = 1;
	for (int i = 1; i < n; i++) {
		a *= (i + 1);
	}
	return a;
}