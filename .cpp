#include<iostream>
#include <windows.h>
using namespace std;

int code, bill = 0, juice = 80, chips = 50, ketchup = 130, oil = 180, soap = 48, shampo = 290, surf = 400, tea = 540, cocke = 85,
eggDozen = 120, salt = 10, milk = 50, chocolate = 50, ghee = 160;
bool flag = true;


void display_items()
{
	cout << "\t \t \t \t WELCOME TO GROCERY STORE" << endl;
	cout << "*****************************HERE ARE THE ONLY ITEMS IN OUR SRORE*********************************** " << endl;
	cout << "Press 1 for Juice priced at " << juice << "PKR" << endl;
	cout << "Press 2 for chips priced at " << chips << "PKR" << endl;
	cout << "Press 3 for ketchup priced at " << ketchup << "PKR" << endl;
	cout << "Press 4 for oil priced at " << oil << "PKR" << endl;
	cout << "Press 5 for soap priced at " << soap << "PKR" << endl;
	cout << "Press 6 for shampo priced at " << shampo << "PKR" << endl;
	cout << "Press 7 for surf priced at " << surf << "PKR" << endl;
	cout << "Press 8 for tea priced at " << tea << "PKR" << endl;
	cout << "Press 9 for cold drink priced at " << cocke << "PKR" << endl;
	cout << "Press 10 for eggDozen priced at " << eggDozen << "PKR" << endl;
	cout << "Press 15 for total bill " << endl;
	cout << "\n \n";
}

int calculate_bill()
{
	while (flag)
	{
		cin >> code;
		if (code == 1)
		{
			int i, j, totalquantity, quantity = 100;
			cout << "how many PACKETS of juice do you want to buy = " << endl;
			cin >> j;
			for (int i = 0; i < j; i++)
				bill += juice;
			totalquantity = quantity - j;
			cout << "remaining quantity of Juice in our store is = " << totalquantity << endl;
			cout << "\n \n";
			cout << "do u want to continue shopping? = " << endl;
			cout << "Press 1 to continue " << endl;
			cout << "Press 2 for bill " << endl;
			cin >> code;
			if (code == 1)
			{
				display_items();
			}
			else if (code == 2)
			{
				break;
			}

		}
		else if (code == 2)
		{
			int i, j, totalquantity, quantity = 100;
			cout << "how much chips you want to buy = " << endl;
			cin >> j;
			for (int i = 0; i < j; i++)
				bill += chips;
			totalquantity = quantity - j;
			cout << "remaining quantity of chips in our store is = " << totalquantity << endl;
			cout << "\n \n";
			cout << "do u want to continue shopping? = " << endl;
			cout << "Press 1 to continue " << endl;
			cout << "Press 2 for bill " << endl;
			cin >> code;
			if (code == 1)
			{
				display_items();
			}
			else if (code == 2)
			{
				break;
			}

		}
		else if (code == 3)
		{
			int i, j, totalquantity, quantity = 100;
			cout << "how many PACKETS of Ketchup do you want to buy = " << endl;
			cin >> j;
			for (int i = 0; i < j; i++)
				bill += ketchup;
			totalquantity = quantity - j;
			cout << "remaining quantity of KetchUp in our store is = " << totalquantity << endl;
			cout << "\n \n";
			cout << "do u want to continue shopping? = " << endl;
			cout << "Press 1 to continue " << endl;
			cout << "Press 2 for bill " << endl;
			cin >> code;
			if (code == 1)
			{
				display_items();
			}
			else if (code == 2)
			{
				break;
			}
		}
		else if (code == 4)
		{
			int i, j, totalquantity, quantity = 100;
			cout << "how many PACKETS of Oil you want to buy = " << endl;
			cin >> j;
			for (int i = 0; i < j; i++)
				bill += oil;
			totalquantity = quantity - j;
			cout << "remaining quantity of Oil in our store is = " << totalquantity << endl;
			cout << "\n \n";
			cout << "do u want to continue shopping? = " << endl;
			cout << "Press 1 to continue " << endl;
			cout << "Press 2 for bill " << endl;
			cin >> code;
			if (code == 1)
			{
				display_items();
			}
			else if (code == 2)
			{
				break;
			}
		}
		else if (code == 5)
		{
			int i, j, totalquantity, quantity = 100;
			cout << "how many PACKETS of soap you want to buy = " << endl;
			cin >> j;
			for (int i = 0; i < j; i++)
				bill += soap;
			totalquantity = quantity - j;
			cout << "remaining quantity of Soap in our store is = " << totalquantity << endl;
			cout << "\n \n";
			cout << "do u want to continue shopping? = " << endl;
			cout << "Press 1 to continue " << endl;
			cout << "Press 2 for bill " << endl;
			cin >> code;
			if (code == 1)
			{
				display_items();
			}
			else if (code == 2)
			{
				break;
			}
		}
		else if (code == 6)
		{
			int i, j, totalquantity, quantity = 100;
			cout << "how many PACKETS of Shampo you want to buy = " << endl;
			cin >> j;
			for (int i = 0; i < j; i++)
				bill += shampo;
			totalquantity = quantity - j;
			cout << "remaining quantity of Shampo in our store is = " << totalquantity << endl;
			cout << "\n \n";
			cout << "do u want to continue shopping? = " << endl;
			cout << "Press 1 to continue " << endl;
			cout << "Press 2 for bill " << endl;
			cin >> code;
			if (code == 1)
			{
				display_items();
			}
			else if (code == 2)
			{
				break;
			}
		}
		else if (code == 7)
		{
			int i, j, totalquantity, quantity = 100;
			cout << "how many PACKETS of Surf you want to buy = " << endl;
			cin >> j;
			for (int i = 0; i < j; i++)
				bill += surf;
			totalquantity = quantity - j;
			cout << "remaining quantity of Surf in our store is = " << totalquantity << endl;
			cout << "\n \n";
			cout << "do u want to continue shopping? = " << endl;
			cout << "Press 1 to continue " << endl;
			cout << "Press 2 for bill " << endl;
			cin >> code;
			if (code == 1)
			{
				display_items();
			}
			else if (code == 2)
			{
				break;
			}
		}
		else if (code == 8)
		{
			int i, j, totalquantity, quantity = 100;
			cout << "how many PACKETS of tea you want to buy = " << endl;
			cin >> j;
			for (int i = 0; i < j; i++)
				bill += tea;
			totalquantity = quantity - j;
			cout << "remaining quantity of Tea in our store is = " << totalquantity << endl;
			cout << "\n \n";
			cout << "do u want to continue shopping? = " << endl;
			cout << "Press 1 to continue " << endl;
			cout << "Press 2 for bill " << endl;
			cin >> code;
			if (code == 1)
			{
				display_items();
			}
			else if (code == 2)
			{
				break;
			}
		}
		else if (code == 9)
		{
			int i, j, totalquantity, quantity = 100;
			cout << "how many PACKETS of Carbonated Drink you want to buy = " << endl;
			cin >> j;
			for (int i = 0; i < j; i++)
				bill += cocke;
			totalquantity = quantity - j;
			cout << "remaining quantity of Drinks in our store is = " << totalquantity << endl;
			cout << "\n \n";
			cout << "do u want to continue shopping? = " << endl;
			cout << "Press 1 to continue " << endl;
			cout << "Press 2 for bill " << endl;
			cin >> code;
			if (code == 1)
			{
				display_items();
			}
			else if (code == 2)
			{
				break;
			}
		}
		else if (code == 10)
		{
			int i, j, totalquantity, quantity = 100;
			cout << "how many eggs you want to buy = " << endl;
			cin >> j;
			for (int i = 0; i < j; i++)
				bill += eggDozen;
			totalquantity = quantity - j;
			cout << "remaining quantity of eggs in our store is = " << totalquantity << endl;
			cout << "\n \n";
			cout << "do u want to continue shopping? = " << endl;
			cout << "Press 1 to continue " << endl;
			cout << "Press 2 for bill " << endl;
			cin >> code;
			if (code == 1)
			{
				display_items();
			}
			else if (code == 2)
			{
				break;
			}
		}
		else if (code == 15)
		{
			flag = false;
		}
	}
	return bill;
}

void display_bill(int bill)
{
	cout << "\n \n";
	cout << "*****************************Thank you for shopping, Please come again!***************************** " << endl;
	cout << "\t \t \t \t Your total bill is " << bill << endl;
	cout << "****************************************************************************************************" << endl;

}




int main()
{
	int cal_bill;
	display_items();
	cal_bill = calculate_bill();
	display_bill(cal_bill);
	return 0;
}
