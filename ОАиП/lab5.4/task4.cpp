#include <iostream>
int main()
{
	setlocale(LC_ALL, "RU");
	float x, y, x2, mx, mn;
	printf("¬ведите x "); scanf_s("%f", &x);
	printf("¬ведите y "); scanf_s("%f", &y);
	printf("¬ведите x2 "); scanf_s("%f", &x2);
	mn = mx = x2;
	if (x>mx)
		mx = x;
	if (x < mn)
		mn = x;
	if (y > mx)
		mx = y;
	if(y<mn)
		mn = y;
	
	printf("max(x,y,x2)*min(x,y,x2)=%f\n", mn * mx);

}