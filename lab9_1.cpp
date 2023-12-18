#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double loan, rate, Payment;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> Payment;

	cout << setw(13) << left << "EndOfYear#";
	cout << setw(13) << left << "PrevBalance";
	cout << setw(13) << left << "Interest";
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	double Interest, NewBalance = loan, Total;
	int i = 1;
	do
	{
		if (NewBalance != 0)
		{
			Interest = NewBalance * rate / 100;
			Total = NewBalance + Interest;
			cout << fixed << setprecision(2);
			cout << setw(13) << left << i;
			cout << setw(13) << left << NewBalance;
			cout << setw(13) << left << Interest;
			cout << setw(13) << left << Total;
			if (NewBalance >= 100 && Total > Payment)
			{
				NewBalance = Total - Payment;
				cout << setw(13) << left << Payment;
			}
			else
			{
				Payment = Total;
				NewBalance = Total - Payment;
				cout << setw(13) << left << Payment;
			}
			cout << setw(13) << left << NewBalance;
			cout << "\n";
			i++;
			if (NewBalance == 0)
				break;
		}
	} while (true);
	return 0;
}
