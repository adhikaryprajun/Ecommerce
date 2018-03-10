#include "Customer.h"
#include "Product.h"
#include "Bill.h"

class Cart {
private:
	int id;
	Customer customer;
	Product products[20];
public:
	void addProductToCart(Products);
	void removeProductFromCart(Products);
	void getAllProductsInCart();
	Bill checkout(Cart);
	
}