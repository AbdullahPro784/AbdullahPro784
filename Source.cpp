#include<iostream>

using namespace std;

int main()
	{

	//Hotel Reception System:

	int id, password, floor1 = 10, floor2 = 10, floor3 = 10,floor,  bookedroom1 = 0, bookedroom2 = 0, bookedroom3 = 0, room;	
	char option = 'y';
	bool flag = false;
	while (true)
		{
		if (flag == true)
			{
			break;
			}
		cout << "\t\t\t\t\t$************************************$" << endl;
		cout << "\t\t\t\t\t     \\\\\\\\\\\\\\\($$Hotel$$)/////////" << endl << endl;
		cout << "\t\t\t\t\t\t$Welcome to Hotel :)$" << endl << endl;
		cout << "\t\t\t\t\t$************************************$" << endl << endl;
		cout << "\t\t\t\t\tEnter your Employee ID----> ";
		cin >> id;
		cout << "\t\t\t\t\tEnter Your Password----> ";
		cin >> password;
		cout << endl;


		if (id == 323 && password == 7384 || id == 211 && password == 8754)
			{
			cout << "\t\t\t\t       Welcome!You have successfully signed in! :) " << endl << endl;
			cout << "\t\t\t\t\t*************************************" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t#(User logged in:" << id << ")#" << endl;



			do
				{

				cout << "\t\t\t\t\tDo you want to exit?If yes then Press 0!" << endl;

				cout << "\t\t\t\t\tSelect from floor 1 to 3 from the following floors: \n";
				cout << "\t\t\t\t\t1. Floor 1 \n";
				cout << "\t\t\t\t\t2. Floor 2 \n";
				cout << "\t\t\t\t\t3. Floor 3 \n";
				cout << "\t\t\t\t\t";
				cin >> floor;
				cout << endl;
				cout << "\t\t\t\t\t***************************************************" << endl;
				if (floor == 0)
					{
					flag = true;
					break;
					}
				if (floor >= 1 && floor <= 3)
					{

					if (floor == 1)
						{
						cout << "\t\t\t\t\tThere are " << floor1 << " free rooms on the selected floor! " << endl << endl;
						cout << "\t\t\t\t\tTotal Booked rooms on the selected floor are: " << bookedroom1 << endl << endl;

						while (true)
							{
							cout << "\t\t\t\t\tDo you want to book a room? If yes press y else n for no! \n";
							cout << "\t\t\t\t\t";
							cin >> option;
							if (option == 'n')
								{
								break;
								}
							else if (option == 'y')
								{
								cout << "\t\t\t\t\tEnter the number of rooms you want to book on the selected floor ! " << endl;
								cout << "\t\t\t\t\t";
								cin >> room;
								if (room > floor1)
									{
									cout << "\t\t\t\t\tPlease try again! Not enough available rooms!" << endl;
									break;
									}

								bookedroom1 += room;
								floor1 -= room;

								break;
								}
							else
								cout << "\t\t\t\t\tPlease Try Again! ";
							}
						}
					else if (floor == 2)
						{
						cout << "\t\t\t\t\tThere are " << floor2 << " free rooms on the selected floor! " << endl << endl;
						cout << "\t\t\t\t\tTotal Booked rooms on the selected floor are: " << bookedroom2 << endl << endl;

						while (true)
							{
							cout << "\t\t\t\t\tDo you want to book a room? If yes press y else n for no! \n";
							cout << "\t\t\t\t\t";
							cin >> option;
							if (option == 'n')
								{
								break;
								}
							else if (option == 'y')
								{
								cout << "\t\t\t\t\tEnter the number of rooms you want to book on the selected floor ! " << endl;
								cout << "\t\t\t\t\t";
								cin >> room;
								if (room > floor2)
									{
									cout << "\t\t\t\t\tPlease try again! Not enough available rooms!" << endl;
									break;
									}
								bookedroom2 += room;
								floor2 -= room;

								break;
								}
							}
						}
					else if (floor == 3)
						{
						cout << "\t\t\t\t\tThere are " << floor3 << " free rooms on the selected floor! " << endl << endl;
						cout << "\t\t\t\t\tTotal Booked rooms on the selected floor are: " << bookedroom3 << endl << endl;

						while (true)
							{
							cout << "\t\t\t\t\tDo you want to book a room? If yes press y else n for no! \n";
							cout << "\t\t\t\t\t";
							cin >> option;
							if (option == 'n')
								{
								break;
								}
							else if (option == 'y')
								{
								cout << "\t\t\t\t\tEnter the number of rooms you want to book on the selected floor ! " << endl;
								cin >> room;
								if (room > floor3)
									{
									cout << "\t\t\t\t\tPlease try again! Not enough available rooms!" << endl;
									break;
									}
								bookedroom3 += room;
								floor3 -= room;

								break;
								}
							}
						}
					}
				else if (floor > 3)
					{
					cout << "\t\t\t\t\tIncorrect option!\n\t\t\t\t\tPlease try again!:( \n" << endl;
					floor = 1;
					}
				} while (floor == 1 || floor == 2 || floor == 3);

			}
		else
			cout << "\t\t\t\t\t!!!!!!!!!!Invalid ID or Password :(!!!!!!!\n\t\t\t\t\t!!!!!!!!!!!Please try again!!!!!!!!!!!!" << endl << endl;

		} 


		return 0;
	}
