#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <graphics.h>
 
/*
*m=1ʱ,Բ�������ε��ı�����
*m>1ʱ����ԭ�л�����������������Բ
*��ÿ����Բ��ΪĸԲ����������Χ����3������Բ
*������Բ�İ뾶�Ӵ�С����
*��˳���ȡԲ������Ͱ뾶���ɵ����ս��
*
*/
int main()
{
	initgraph(400, 400);
	int i;
	double x0 = 200, y0 = 200, r0 = 200,x1,y1,r1,r2;
	circle(x0, y0, r0);
	/*for (i = 0; i < 1; i++)
	{
		r1 = (200*sqrt(2.0)-r0) / (sqrt(2.0) + 1);
		circle(r1, r1, r1);
		circle(400-r1, r1, r1);
		circle(r1, 400-r1, r1);
		circle(400-r1, 400-r1, r1);
		r0 = r0 + 2 * r1;
	}
	
	r0 = 200;
	r1 = r0*(sqrt(2.0) - 1) / (sqrt(2.0) + 1);
	x0 = r1;
	for (i = 0; i < 1; i++)
	{
		r2 = pow((200 - x0) / (2 * (sqrt(r1) + sqrt(200.0))), 2);
		circle(x0 + 2 * sqrt(r1*r2), r2, r2);
		circle(r2, x0 + 2 * sqrt(r1*r2), r2);
		circle(r2, 400-(x0 + 2 * sqrt(r1*r2)), r2);
		circle(x0 + 2 * sqrt(r1*r2), 400-r2, r2);
		circle(400-(x0 + 2 * sqrt(r1*r2)), r2, r2);
		circle(400-r2, x0 + 2 * sqrt(r1*r2), r2);
		circle(400-(x0 + 2 * sqrt(r1*r2)), 400-r2, r2);
		circle(400-r2, 400-(x0 + 2 * sqrt(r1*r2)), r2);
		x0 = x0 + 2 * sqrt(r1*r2);
		r1 = r2;
	}*/
	_getch();
	closegraph();
}