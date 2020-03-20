#pragma once
#include "Client.h"
#include "market.h"
using std::cout;
using std::cin;
using std::string;
using std::endl;
class administration
{
protected:
	string Nickname;
	string Password;
	market marketi;
	Client _client;
	Card crd;
public:
	vector<Client>newclient;
	administration() = default;
	administration(string _Nickname, string _Password);

	void addclient(Client client);
	bool checkadmin(string Password);
	void addproduct(product product);
	void deleteproduct(int id);
};

