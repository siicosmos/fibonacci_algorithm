#include <iostream>
#include <ctime>

using namespace std;

clock_t t;

long int Fib(long int num)
{
	long int array[num+2];
	for (long int i = 0; i <= num+1; i++)
		array[i] = i;
	for (long int i = 2; i <= num+1; i++)
	{
		array[i] = array[i-2]+array[i-1];
	}
	return array[num+1];
}

int main(int argc, char const *argv[])
{
	long int result = 0;
	long int Fib_num = 0;
	cout <<  "Enter number for Fib:";
	cin >> Fib_num;
	t = clock();
	result = Fib(Fib_num);
	t = clock() - t;
	cout << "Fib(" << Fib_num << "): " << result << "\nCost of time: "<< static_cast<long double>(t)/CLOCKS_PER_SEC << " seconds" << endl;
	return 0;
}