#pragma once
#include <iostream>
#include<vector>
#include <string>
#include "Card.h"
using std::vector;
using std::cout;
using std::cin;
using std::string;
using std::endl;
class Client
{
protected:

	double Balance;
	const char* imageName;
	Card card;

public:

	string Name;
	vector<Client>newclient;
	Client() = default;
	Client(string _Name, double _Balance, Card _CArd);
	Client(string _Name, double _Balance, Card _CArd, const char* _imageName);
	Client(string _Name, double _Balance);
	void addclient(Client _client);
	Card GetCard();
	string GetName();
	double GetBalance();
	void SetBalance(double _balance);


};