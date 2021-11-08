﻿// Лабораторна робота № 5.4
//Гордій Олег ІК-11
#include <iostream>
#include <cmath>
using namespace std;
double S0(const int K, const int N)//ітераційний
{
	double s = 0;
	for (int i = K; i <= N; i++)
		s += 1./i + pow(sin(1. * i),2);
	return s;
}
double S1(const int K, const int N, const int i)//рекурсивний підйом, значення-зростає
{
	if (i > N)
		return 0;
	else
		return (1./ i + pow(sin(1. * i), 2)) + S1(K, N, i + 1);
}
double S2(const int K, const int N, const int i)//рекурсивний підйом, значення-спадає
{
	if (i < K)
		return 0;
	else
		return (1./i + pow(sin(1. * i), 2)) + S2(K, N, i - 1);
}
double S3(const int K, const int N, const int i, double t)//рекурсивний спуск, значення-зростає
{
	t = t + (1. / i + pow(sin(1. * i), 2));
	if (i >= N)
		return t;
	else
		return S3(K, N, i + 1, t);
}
double S4(const int K, const int N, const int i, double t)//рекурсивний спуск, значення-спадає
{
	t = t + (1. / i + pow(sin(1. * i), 2));
	if (i <= K)
		return t;
	else
		return S4(K, N, i - 1, t);
}
int main()
{
	int N,K ;
	cout << "N = "; cin >> N;

	K = 1;
	
	cout << "(iter) S0 = " << S0(K, N) << endl;
	cout << "(rec up ++) S1 = " << S1(K, N, K) << endl;
	cout << "(rec up --) S2 = " << S2(K, N, N) << endl;
	cout << "(rec down ++) S3 = " << S3(K, N, K, 0) << endl;
	cout << "(rec down --) S4 = " << S4(K, N, N, 0) << endl;
	return 0;
}