#include <math.h>//�������������� ����������
#include <stdio.h>//���������� ��� ����� �� ��������

bool IsInArea(float x, float y);
double f(double x);

int main()//������� ������ ���������
{
	float x, y;//������ ����� ������������
	char text;//������ ����� ����������
	scanf_s("%c", &text);//���������� � ����������;

	switch (text)
	{
	case '1':
		float resylt;//������ ����� ������������
		scanf_s("%f", &x);//���������� � ���������� ����� �
		scanf_s("%f", &y);//���������� � ���������� ����� �
		printf("\n x=%.4f; y=%.4f", x, y);//����� � ��������� ������ ����� �,�

		if
			(
				IsInArea(x, y)
				)
			printf("\n resylt=1");
		else printf("\n resylt=0");
		break;
	case '2':
		scanf_s("%f", &x);//���������� � ����������
		printf("\n x=%.4f", x);//����� � ��������� ������ ����� �
		printf("\n f=%.4f", f(x));//����� � ��������� ������ ����� f
		break;
	default:
		scanf_s("%c", &text);//���������� � ����������;
		break;
	}
	return 0;
}
bool IsInArea(float x, float y)
{
	if
		(
			(y <= -x + 1 && x >= 0 && y >= 0) || (y <= 0 && x <= 0 && y >= -1 && x >= -1)
			)
		return 1;
	else return 0;
}


double f(double x)
{
	return  (x <= 3) ? (x * x - 3 * x + 9) : (1 / (x * x * x + 6));
}


