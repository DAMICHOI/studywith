#include <iostream>
#include <string>

int minPartitions(std::string n)
{
	int max_data = 0;
	int _size = n.size();

	for (int i = 0; i < _size; i++)
	{
		int data = (int)(n[i] - '0');
		if (max_data < data)
			max_data = data;
	}

	return max_data;
}

int main()
{
	std::string test_data = "27346209830709182346";
	minPartitions(test_data);

	return 0;
}

/*
					=== ���� ��� ===

	- 0 �� 1�θ� ������ ���̸� '0011' �� ���� �����ʹ� ���x
	- �� �ڸ� �� �� ���� ū ���� ������ ��
	- atoi �Լ��� �������� �ʾ� ������ ������ �����ϴ� ��� ���
*/