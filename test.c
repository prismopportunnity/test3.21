#include <stdio.h>
//最大公约数
int main() {

	int n = 0;
	int m = 0;
	int ret = 0;
	printf("请输入两位数：");
	scanf("%d%d", &n, &m);
	while (ret = m % n) {
		m = n;
		n = ret;
	}
	printf("最大公约数为：%d", n);
}