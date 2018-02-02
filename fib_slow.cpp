#include <iostream>
#include <ctime>

using namespace std;

clock_t t;

long int Fib(long int num)
{
	if(num == 0 || num == 1)
		return 1;
	else
		return Fib(num-1)+Fib(num-2);
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