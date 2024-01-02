#include"player.h"
#include<iostream>
#include<memory>
#include<cppconn/connection.h>
#include<cppconn/prepared_statement.h>
#include"mysql_connection.h"
#include <mysql_driver.h>
#include<cppconn/exception.h>

Player::Player(std::string name, std::string usernme, int id):m_name{name},m_username{usernme},m_id{id}{}

std::unique_ptr<sql::Connection> sqlConnection;
sql::Driver* driver;

void Player::signUP()const
{
	std::string n;
	std::string u;
	int id;

	std::cout << "Enter player details" << "name,username and id" << std::endl;
	std::cin >> n;
	std::cin >> u;
	std::cin >> id;

	Player p(n, u, id);
	try {
		driver = get_driver_instance();
		sqlConnection=driver->connect()
	}
	catch (...)
	{ }
}
 