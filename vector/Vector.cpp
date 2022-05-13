#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

void display(char* str)
{
	cout << str << endl;
}



int main()
{
	setlocale(LC_ALL, "rus");



	vector<char*> arr;
	cout << "MS: " << arr.max_size() << endl;                           //������������ ������ �������
	cout << "S: " << arr.size() << endl;								//������� ������ �������
	cout << "C: " << arr.capacity() << endl;							//����������������� ������������ ��� ������

	if (arr.empty())													//���� ������ ����
		arr.push_back((char*))"String 1";								//��������� ������� � �����
	arr.resize(3, (char*)"resize");										//������� ������ ������� ������ N � ��������� ��� ����������

	cout << "S: " << arr.size() << endl;
	cout << "C: " << arr.capacity() << endl;
	arr.reserve(6);
	cout << "C: " << arr.capacity() << endl;
	arr.shrink_to_fit();
	cout << "C: " << arr.capacity() << endl;

	arr.insert(arr.begin() + 2, 3, (char*)"Insert - 2");

	cout << "Ce: " << arr.capacity() << endl;
	arr.emplace(arr.begin() + 5, (char*)"emplace");
	cout << "Ce: " << arr.capacity() << endl;

	auto iterStart = arr.begin();
	auto iterEnd = arr.end();

	cout << endl;
	for_each(iterStart, iterEnd, display);

	






	system("pause");
	return 0;
}