#include <stdio.h>
//���Լ��
int main() {

	int n = 0;
	int m = 0;
	int ret = 0;
	printf("��������λ����");
	scanf("%d%d", &n, &m);
	while (ret = m % n) {
		m = n;
		n = ret;
	}
	printf("���Լ��Ϊ��%d", n);
}