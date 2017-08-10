#include<iostream>

using namespace std;


void welcome()
{
	system("clear");
	printf("------------------------------------------------------------------------\n");
	
	for(int i=0;i<15;i++)printf("|\t\t\t\t\t\t\t\t\t|\n");
	cout << "\t\t\t\033[1;31mWELCOME TO CANDY SHOP\033[0m\n";
	for(int i=0;i<15;i++)printf("|\t\t\t\t\t\t\t\t\t|\n");
	printf("------------------------------------------------------------------------\n");
	
	cout<<"Press 'c' to continue or 'e' to exit...";
	char input;
	cin>>input;
	


}


class cashRegister
{
private:
	int cashOnHand;
public:
	cashRegister()
	{
		cashOnHand=500;
	}
	cashRegister(int cash)
	{
		cashOnHand=cash;
	}
	int getCurrentBalance()
	{
		return cashOnHand;
	}
	void acceptAmount(int cash)
	{
		cashOnHand=cashOnHand+cash;
	}

};

class dispenserType
{
private:
	int numberOfItem;
	int cost;

public:

	dispenserType()
	{
		numberOfItem=50;
		cost=50;
	}
	dispenserType(int n1,int n2)
	{
		numberOfItem=n1;
		cost=n2;
	}
	int getNoOfItems()
	{
		return numberOfItem;
	}
	int getCost()
	{
		return cost;
	}
	void makeSale()
	{
		numberOfItem--;
	}
};



int showSelection()
{
	dispenserType price[]=new dispenserType(4);
	printf("************************************************************************************")
	printf("\t\t\t\tHello User !!!\n\n");
	printf("To select an item , enter\n\n");
	printf("1.  Candy\n");
	printf("2.  Chips\n");
	printf("3.  Gum\n");
	printf("4.  Cookies\n");
	printf("Enter any other key to exit...");
	int choice;
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<price[1].getCost();
			if(getNoOfItems>0)
			{
				cout<<"Hurry up!!!\n Grab it quickly....\nTo buy it press 'y' or to back press 'b'  or return to Home press 'H'\n";
				char check;
				cin>>check;
				if(check=='y' || check=='Y')
				{
					sellProduct(1);
				}
			}
			else
				(
					cout<<"Sorry... Item Unavailable!!!\n";
					cout<<"Come later...\n";
				)
		case 2:
			cout<<price[2].getCost();
		case 3:
			cout<<price[3].getcost();
		case 4:
			cout<<price[4].getcost();
		default:
			return 1;

	}
}



int sellProduct()
{
	dispenserType dispenser = new dispenserType();
	cashRegister cashDetail = new cashRegister();
	cout<<"You have Rs "<<cashDetail.getCurrentBalance()<< i"in your account.\n";
	if(dispenser.getCost()<cashDetail.getCurrentBalance())
	{
		cout<<"Confirm to Buy... press 'y'\n";
		char check;
		cin>>check;
		if(check=='y'||check=='Y')
		{
			dispenser.makeSale();
			cashDetail.acceptAmount();
			cout<<"Thank you !!!\n Come again!!!\n";
		}
		else
		{
			cout<<"Invalid choice\n";
			cout<<"Press 'y' to buy or to Home press 'h'\n";
			char check1;
			cin>>check1;
			if(check1=='y' || check1=='Y')
			{
				dispenser.makeSale();
				cashDetail.acceptAmount(-(dispenser.getCost());
				cout<<"Thank you !!!\n Come again!!!\n";
			}

		}

	}
	else
	{
		cout<<"Your account balance is low!!!";
		cout<<"Your current balance is : "<<cashDetail.getCurrentBalance()<<endl;
		cout<<"Cost of selected item is : "<<dispenser.getCost()<<endl;
		cout<<"Add "<<dispenser.getCost()-cashDetail.getCurrentBalance()<<" more to buy this item.\n";
		cout<<"Do you want to add!!!\n";
		cout<<"press 'y' for yes or 'n' for no\n";
		char check;
		cin>>check;
		if(check=='y'||check=='Y')
		{
			int amount;
			cin>>amount;
			cashDetail.acceptAmount(int amount);
			cout<<"Your current balance is : "<<cashDetail.getCurrentBalance()<<endl;

		}
	}


}




int main()
{
	char check=welcome();
	if(check=='y'||check=='Y')
	{
		showSelection();
	}


}