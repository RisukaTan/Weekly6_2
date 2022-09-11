#include<stdio.h>
int max(int n, int m, int x, int y,int z) {
	int u = 0;
	if (n > m && n > x && n > y && n > z) {
		u = n;
	}
	else if (m > n && m > x && m > y && m > z) {
		u = m;
	}
	else if (x > m && x > n && x > y && x > z) {
		u = x;
	}
	else if (y > m && y > x && y > n && y > z) {
		u = y;
	}
	else if (z > m && z > x && z > y && z > n) {
		u = z;
	}
	return u;
}
int main() {//65010536
	int a, b, c, d, e, g;
	printf("enter first number : ");
	scanf_s("%d", &a);
	printf("enter second number : ");
	scanf_s("%d", &b);
	printf("enter third number : ");
	scanf_s("%d", &c);
	printf("enter fouth number : ");
	scanf_s("%d", &d);
	printf("enter fifth number : ");
	scanf_s("%d", &e);
	g = max(a,b,c,d,e);
	printf("Result = %d",g);
	return 0;
}