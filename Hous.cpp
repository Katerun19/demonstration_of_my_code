#include <iostream>
using namespace std;

int main()//найти в каком подьезде и на каком этаже заданная квартира
{
	setlocale(LC_ALL, "ru");
	int N, M, K, X;//N - подьезд, M - этаж, К - кол-во квартир на этаже
	cin >> N >> M >> K;
	cin >> X;
	int i = 1, j = 1;
	while (i <= N)
	{
		if (K*M*(i - 1) <= X && K*M*i >= X) 
		{ 
			cout << i; 
			while (j <= M)
				{
					int A = K * (j - 1), B = K * j;
					if (K*(j - 1) <= X - (K*M*(i-1)) && K*j >= X - (K*M*(i - 1))) { cout << j; break; }
					else { j++; }
				}
			break; 
		}
		else { i++; }
	}
	
	

	return 0;
}