#pragma once
#include<iostream>
class Data {
	 std::string server;
	 std::string root;
	 std::string pass;

	Data()=default;
	void setServer();
	void setRoot();
	void setPass();
	
	std::string getServer();
	std::string getRoot();
	std::string getPass();
};