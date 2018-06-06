#include "car.h"
#include "bus.h"


int main()
{
	setlocale(LC_ALL, "russian");
	short nz, answer;
	do
	{
		cout << "which task? \n: ";
		cin >> nz;
		system("cls");

		switch (nz)
		{
		case 1:
		{
			set<int> s;
			s.insert(12);
			s.insert(4);
			s.emplace(5);
			//	s.erase(5); //������� �������� �� ��������
				//s.erase(s.begin());//�������� �������� �� ���������

			for (set<int> ::iterator it = s.begin(); it != s.end(); it++)
				cout << *it << endl;

		}break;

		case 2:
		{
			/*set<car, cmpByNo> s;
			s.insert(car("12","white"));
			s.insert(car("4", "blue"));
			s.insert(car("12", "silver"));
			for (set<car> ::iterator it = s.begin(); it != s.end(); it++)
				cout << *it << endl;*/
		}break;

		case 3:
		{
			set<car, cmpByNo> s;
			s.insert(car("12", "white"));
			s.insert(car("4", "blue"));
			s.emplace(car("12", "silver"));
			for (set<car> ::iterator it = s.begin(); it != s.end(); it++)
				cout << *it << endl;
		}break;

		case 4:
		{
			ifstream in_file("bus.txt");

			short a;
			cout << "������ ���������� �� ������ �������� ��� �� ������ ��������?1/2";
			cin >> a;
			switch (a)
			{
			case 1:
			{
				set<bus, cmpByBusMarshrut>b;
				bus bs;
				while (!in_file.eof())
				{
					in_file >> bs;
					b.emplace(bs);
				}
				for (set<bus> ::iterator it = b.begin(); it != b.end(); it++)
					cout << *it << endl;

			}break;

			case 2:
			{
				set<bus, cmpByBusNo>b;
				bus bs;
				while (!in_file.eof())
				{
					in_file >> bs;
					b.emplace(bs);
				}
				for (set<bus> ::iterator it = b.begin(); it != b.end(); it++)
					cout << *it << endl;
			}break;
			}

		
		}break;

		case 5:
		{
			ifstream in_file("bus.txt");
			short a;
			set<bus, cmpByBusNo>b;
			bus bs;
			while (!in_file.eof())
			{
				in_file >> bs;
				b.emplace(bs);
			}
			for (set<bus> ::iterator it = b.begin(); it != b.end(); it++)
				cout << *it << endl;

			cout << "\n\n�� ������ �������� ������ ������ �����?" << endl
				<< "1 - ���\n2 - �������\n3 - �������\n4 - ���-�� ���� � ��������\n5 - ����� ��������" << endl;
			cin >> a;
			string buff;
			int bf;

			switch (a)
			{
			case 1:
			{
				cout << "������� ���: "; cin >> buff;
				for (set<bus> ::iterator it = b.begin(); it != b.end(); it++)
				{
					if (it->getName() == buff)
						cout << *it << endl;
				}
			}break;

			case 2:
			{
				cout << "������� �������: "; cin >> buff;
				for (set<bus> ::iterator it = b.begin(); it != b.end(); it++)
				{
					if (it->getSname() == buff)
						cout << *it << endl;
				}
			}break;

			case 3:
			{
				cout << "������� �������: "; cin >> bf;
				for (set<bus> ::iterator it = b.begin(); it != b.end(); it++)
				{
					if (it->getMarshrut() == bf)
						cout << *it << endl;
				}
			}break;
			case 4:
			{
				cout << "������� ���-�� ����: "; cin >> bf;
				for (set<bus> ::iterator it = b.begin(); it != b.end(); it++)
				{
					if (it->getPlaces() == bf)
						cout << *it << endl;
				}
			}break;

			case 5:
			{
				cout << "������� ������ ��������: "; cin >> bf;
				for (set<bus> ::iterator it = b.begin(); it != b.end(); it++)
				{
					if (it->getMarshrut() == bf)
						cout << *it << endl;
				}
			}break;

			}
		}break;

		}
		cout << endl;
		cout << endl;
		cout << "������ ����������?1/0 ";
		cin >> answer;
		system("cls");
	} while (answer != 0);


	system("pause");
	return 0;
}