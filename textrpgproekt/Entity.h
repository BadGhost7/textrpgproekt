#pragma once

#include <string>

//����� �������� - ����������� ���� ��������� ��������/����������
class Entity {

protected:
	int id;
	std::string name;

	//�����������
	Entity(int id, std::string name) {
		this->id = id;
		this->name = name;
	}
};