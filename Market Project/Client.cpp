#include "Client.h"

Client::Client(string _Name, double _Balance, Card _CArd)
{

	Balance = _Balance;
	card = _CArd;
	Name = _Name;

}
Client::Client(string _Name, double _Balance, Card _CArd, const char* _imageName)
{
	Balance = _Balance;
	card = _CArd;
	Name = _Name;
	imageName = _imageName;
}

Client::Client(string _Name, double _Balance)
{
	Balance = _Balance;
	Name = _Name;

}

string Client::GetName()
{
	return Name;
}
void Client::addclient(Client _client)
{
	newclient.push_back(_client);
}
Card Client::GetCard()
{
	return card;
}

double Client::GetBalance()
{
	return Balance;
}

void Client::SetBalance(double _balance)
{
	Balance = _balance;
}