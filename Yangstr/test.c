//#include <stdio.h>
//int plus(n) {
//	int a = 1;
//	for (int i = 1; i < n; i++) {
//		a *= (i + 1);
//	}
//	return a;
//}
//
//void trfun_ret(i, j) {
//	int m = i - 1;
//	int n = j - 1;
//	int ans = plus(m) / (plus(n) * plus(m - n));
//	if (0 < ans || 9 >= ans)
//		printf("0%d", ans);
//	else
//		printf("%d", ans);
//}
//
//
//int main(void) {
//	trfun_ret(6, 3);
//}