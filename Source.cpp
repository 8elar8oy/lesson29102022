﻿#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	//17. В ЭВМ вводятся по очереди данные о росте N учащихся класса.Определить средний рост учащихся класса.
	/*int N, rost, sum = 0,i = 1;
	cout << "Введите количество учащихся: " << endl;
	cin >> N;
	do
	{
		cout << "Ввведите рост " << i << " учащегося: " << endl;
		cin >> rost; 
		sum += rost;
		i++;
	} while (i<=N);
	double sr;
	sr = sum / N;
	cout << "Средний рост учащихся: " << endl;
	cout << sr << endl;*/

	//18. Задано натуральное число N.Найти количество натуральных чисел, не превосходящих N и не делящихся ни на одно из чисел 2, 3, 5.
	/*int N,i=1,k=0;
	cin >> N;
	do
	{
		if (i%2!=0 && i%3!=0 && i%5!=0)
		{
			k++;
		}
		i++;
	} while (i<=N);
	cout << k << endl;*/

	//22. дано натуральное n.вычислить: 1 + 1 / 2 + 1 / 3 + 1 / 4 + ... + 1 / n.
	/*int n, i = 1;
	double sum = 0;
	cin >> n;
	do
	{
		sum = sum + (double)1 / i;
		i++;
	} while (i<=n);
	cout << sum << endl;*/
	//29. с помощью оператора while напишите программу вывода всех четных чисел в диапазоне от 2 до 100 включительно.
	/*int i = 2;
	do
	{
		if (i % 2 == 0) {
			cout << i << endl;
		}
		i++;
	} while (i<=100);*/
	//30. С помощью оператора while напишите программу определения суммы всех нечетных чисел в диапазоне от 1 до 99 включительно.
	/*int i = 1,sum=0;
	do
	{
		if (i % 2 != 0) {
			sum = sum + i;
		}
		i++;
	} while (i<=99);
	cout << sum << endl;*/
	//31. Имеется кусок ткани длинной M метров.От него последовательно отрезаются куски равной длины.Все данные по использованию ткани заносятся в компьютер.
	//Компьютер должен выдать сообщение о том, что материала не хватает, если будет затребован кусок ткани больше длины, чем имеется.
	/*int M,dl,k=0;
	cout << "Введите длинну ткани: " << endl;
	cin >> M;
	cout << "Ввведите длину отрезаемой ткани: " << endl;
	cin >> dl;
	do
	{
		k++;
		M = M - dl;
		cout << "Ткань режется..." << endl;
	} while (M>=dl);
	if (M < dl) {
		cout << "материала не хватает" << endl;
	}
	cout << "Количество кусков ткани: "<< k << endl;*/
}
