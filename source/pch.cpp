#include <iostream>
#include "pch.h"
#include <string.h>

using namespace std;
Department::Department() :
	Customer_Name(""),Customerid(0),Customer_address(""), Customer_phone_number(0) {
}
Department::Department(string Customer_Name, int Customerid, string Customer_address, int Customer_phone_number) :
	Customer_Name(Customer_Name), Customerid(Customerid), Customer_address(Customer_address), Customer_phone_number(Customer_phone_number) {
}
Department::Department(const Department& ref) :
	Customer_Name(ref.Customer_Name), Customerid(ref.Customerid), Customer_address(ref.Customer_address), Customer_phone_number(ref.Customer_phone_number) {
}
std::string Department::getCustomer_name(std::string Customer_name)
{
	
	return Customer_Name;
	
}
int Department::getCustomerid(int customer_id )
{
	
	return customer_id;
	
}
std::string Department::getCustomer_address(std::string Customer_address)
{
	
	return Customer_address;
}
int Department::getCustomer_phone_number(int customer_phone_number)
{
	
	return customer_phone_number;
	
}
