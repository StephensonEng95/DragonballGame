#pragma once


class Player {
	std::string m_name;
	std::string m_username;
	int m_id = 0;
	Player(std::string name, std::string usernme, int id);
	
public:
	void signUP ()const;
	void signIN()const;
	
};
