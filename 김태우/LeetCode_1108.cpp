#include <iostream>
#include <string>

std::string defangIPaddr(std::string address)
{
	size_t index = -2;
	while (true)
	{
		index = address.find(".", index + 2);

		if (index == address.npos)
			break;

		address.replace(index, 1, "[.]");
	}

	return address;
}

int main()
{
	std::string address = "1.1.1.1";
	defangIPaddr(address);

	return 0;
}

/*
									=== ���� ��� ===

	- �ܼ� ���ڿ� ����
	- find �Լ��� ���� �ش� ��ġ�� ã�� ���ϴ� ��ġ���� ������ ũ�⸸ŭ ����� ���ڿ��� ġȯ
		-> ����� ���� replaceAll() �Լ� ���� ��� 
*/