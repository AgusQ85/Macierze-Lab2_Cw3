#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
	int n, n1, i, j, arr1[55][55], arr2[55][55], sum[55][55], roz[55][55];

	cout << "Program do dodawania/odejmowania, oraz mnozenia macierzy by Agnieszka Bukowska.\n\n";
	cout << "Dodawac i odejmowac mozemy macierze o tych samych wymiarach. Natomiast aby wykonac mnozenie, liczba kolumn macierzy A, musi byc rowna ilosci wierszy macierzy B.";

	int  wybor;
	cout << "\n\nJakie dzialanie chcesz wykonac?\n\n";
	cout << "1. Dodawanie lub odejmowanie. \n2. Mnozenie. \n";
	cin >> wybor;

		switch (wybor)
	{

	case 1:
	{
		cout << "Ile wierszy ma posiadac macierz? ";
		cin >> n;
		cout << "Ile kolumn ma posiadac macierz? ";
		cin >> n1;

		cout << "Podaj elementy pierwszej macierzy A: \n";
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n1; j++)
			{
				cin >> arr1[i][j];
			}
		}

		cout << "\nPodaj elementy drugiej macierzy B: \n";
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n1; j++)
			{
				cin >> arr2[i][j];
			}
		}

		cout << "\n";//odpowiada za przeniesienie wierszy do nowej linii, tak aby wyswietlalo macierz

		cout << "Wprowadziles nastepujaca macierz A: \n";
		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < n1; ++j)
			{
				cout << arr1[i][j] << " ";
			}
			cout << endl;
		}


		cout << "\nWprowadziles nastepujaca macierz B: \n";
		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < n1; ++j)
			{
				cout << arr2[i][j] << " ";
			}
			cout << endl;
		}
		cout << "Suma obu macierzy wynosi: \n";

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n1; j++)
			{
				sum[i][j] = arr1[i][j] + arr2[i][j];
				cout << "\t" << sum[i][j];
			}
			cout << "\n";//odpowiada za przeniesienie wierszy do nowej linii, tak aby wyswietlalo macierz
		}

		cout << "Roznica macierzy A i B wynosi: \n";
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n1; j++)
			{
				roz[i][j] = arr1[i][j] - arr2[i][j];
				cout << "\t" << roz[i][j];
			}
			cout << "\n";//odpowiada za przeniesienie wierszy do nowej linii, tak aby wyswietlalo macierz
		}
	}

	case 2:
	{
		int a[10][10], b[10][10], mnozenie[10][10], r1, c1, r2, c2;
		cout << "Wpisz ilosc wierszy macierzy A: ";
		cin >> r1;
		cout << "Wpisz ilosc kolumn macierzy A: ";
		cin >> c1;
		cout << "Wpisz ilosc wierszy macierzy B: ";
		cin >> r2;
		cout << "Wpisz ilosc kolumn macierzy B: ";
		cin >> c2;

		while (c1 != r2)
		{
			cout << "Aby wykonac mnozenie, liczba kolumn macierzy A, musi byc rowna ilosci wierszy macierzy B. \n";
			cout << "Okresliles: " << c1 << " kolumn macierzy A. Podaj ilosc wierszy macierzy B \n";
			cin >> r2;
			r2 = c1;
		}
		
		// Wartosci macierzy A:
		cout << endl << "Wpisz wartoœci dla macierzy A:" << endl;
		for (int i = 0; i < r1; ++i)
			for (int j = 0; j < c1; ++j)
			{
				cout << "Element " << i + 1 << j + 1 << " ma wynosic : ";
				cin >> a[i][j];
			}
		
		// Wartosci macierzy B.
		cout << endl << "Wpisz wartoœci dla macierzy B: " << endl;
		for (int i = 0; i < r2; ++i)
			for (int j = 0; j < c2; ++j)
			{
				cout << "Element " << i + 1 << j + 1 << " ma wynosic: ";
				cin >> b[i][j];
			}

		for (int i = 0; i < r1; ++i)
			for (int j = 0; j < c2; ++j)
			{
				mnozenie[i][j] = 0;
			}

		for (int i = 0; i < r1; ++i)
			for (int j = 0; j < c2; ++j)
				for (int k = 0; k < c1; ++k)
				{
					mnozenie[i][j] += a[i][k] * b[k][j];
				}
		// Wyswietlenie mnozenia.
		cout << endl << "Wynik mnozenia: " << endl;
		for (int i = 0; i < r1; ++i)
			for (int j = 0; j < c2; ++j)
			{
				cout << " " << mnozenie[i][j];
				if (j == c2 - 1)
					cout << endl;
			}
		break;
	}
	}

	return 0;
}

