#include <iostream>
using namespace std;

void sum(int* ptrN1, int* ptrN2, int* result)
{
	*result = *ptrN1 + *ptrN2;
}
void up(int* n)
{
	(*n)++;
}

int main()
{
	int a = 10;
	up(&a);
	cout << a << endl;

	int result = 0;
	int n1 = 10, n2 = 30;
	sum(&n1, &n2, &result);
	cout << result;

	return 0;
}



/*


double c = 10;
	double* ptrC = &c;
	cout << &c << endl;
	cout << ptrC;*/