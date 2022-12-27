#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,rate,amount,interest,total,nb=0;
	int i=1;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> amount;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	cout << fixed << setprecision(2);
	while(true)
	{
		cout << setw(13) << left << i; 
		cout << setw(13) << left << loan;
		interest=loan*(rate/100);
		cout << setw(13) << left << interest;
		total=loan+interest;
		cout << setw(13) << left << total;
		if(total<=amount) amount=total;
		cout << setw(13) << left << amount;
		nb= total-amount;
		cout << setw(13) << left << nb;
		loan=nb;
		i++;
		cout << "\n";
		if(nb==0) break;
		
	}
	
	/*cout << fixed << setprecision(2);  //fixทศนิยมสองตำแหน้ง
	cout << setw(13) << left << 1; 
	cout << setw(13) << left << 1000.0;
	cout << setw(13) << left << 50.0;
	cout << setw(13) << left << 1050.0;
	cout << setw(13) << left << 100.0;
	cout << setw(13) << left << 950.0;
	cout << "\n";*/
	
	return 0;
}
