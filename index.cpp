#include<iostream.h>

char *name;
int main() {
	homePage();
	return 0;
}

void homePage() {
	cout<<"*******************************"<<endl;
	cout<<"\tWelcome to Mall"<<endl;
	cout<<"*******************************"<<endl;
	cout<<"Enter Your Name:"<<endl;
	cin>>name;
	menuPage();
}

void menuPage() {
	int option=0;
	cout<<"*******************************"<<endl;
	cout<<"\tWelcome "<<name<<endl;
	cout<<"*******************************"<<endl;
	cout<<"Select Option:"<<endl;
	cout<<"\t1. Start Shopping"<<endl;
	cout<<"\t2. View Cart"<<endl;
	cout<<"\t3. Clear Cart"<<endl;
	cout<<"\t4. Checkout Cart"<<endl;
	cout<<"\t5. Leave"<<endl;
	cout<<"::";
	cin>>option;
	switch(option) {
		case 1:
			shoppingPage();
			break;
		case 2:
			cartPage();
			break;
		case 3:
			clearCart();
			break;
		case 4:
			checkoutCart();
			break;
		case 5:
			leavePage();
		default:
			cout<<"Oops! Invalid Choice"<<endl;
			menuPage();
	}
}

void shoppingPage() {
	int option=0;
	cout<<"*******************************"<<endl;
	cout<<"\tWelcome "<<name<<endl;
	cout<<"*******************************"<<endl;
	cout<<"Select Category:"<<endl;
	cout<<"\t1. Food and Grocery"<<endl;
	cout<<"\t2. Clothes"<<endl;
	cout<<"\t3. Beauty and Makeup"<<endl;
	cout<<"\t4. Electronics"<<endl;
	cout<<"\t5. Go Back"<<endl;
	cout<<"::";
	cin>>option;
	switch(option) {
		case 1:
		case 2:
		case 3:
		case 4:
			getProductForCategory(option);
			break;
		case 5:
			menuPage();
		default:
			cout<<"Oops! Invalid Choice"<<endl;
			shoppingPage();
	}
}

void getProductForCategory(int category) {
	cout<<"*******************************"<<endl;
	cout<<"\tWelcome "<<name<<endl;
	cout<<"*******************************"<<endl;
	cout<<"Select Product:"<<endl;
}

void cartPage() {
	cout<<"*******************************"<<endl;
	cout<<"\tWelcome "<<name<<endl;
	cout<<"*******************************"<<endl;
	cout<<"Cart Details:"<<endl;

}

void clearCart() {
	cout<<"*******************************"<<endl;
	cout<<"\tWelcome "<<name<<endl;
	cout<<"*******************************"<<endl;
	cout<<"Are you sure you want to clear cart?"<<endl;
	cout<<"\t1. Yes"<<endl;
	cout<<"\t2. No"<<endl;
}

void checkoutCart() {
	cout<<"*******************************"<<endl;
	cout<<"\tWelcome "<<name<<endl;
	cout<<"*******************************"<<endl;
	cout<<"Are you sure you want to checkout cart?"<<endl;
	cout<<"\t1. Yes"<<endl;
	cout<<"\t2. No"<<endl;
}