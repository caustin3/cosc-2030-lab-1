//Chase Austin
//COSC 2030-10 
//lab 1

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;
using std::getline;

#include <fstream>
using std::ifstream;
using std::ofstream;
using std::fstream;

int main()
{
	string filename;	
	ifstream myflie;
	int count(0);
	double temp(0.0),tempLast(0.0), first(0.0), secend(0.0), third(0.0), fourth(0.0);

	cout << "inputa file name" << endl;
	cin >> filename;	
	myflie.open(filename);
	
	if (myflie.is_open())
	{	
		while (!myflie.fail())
		{	
			
			if (myflie.eof())
			{
				myflie.close();
			}
			else
			{
				if (myflie >> temp)
				{
					if (count == 0) first = temp;
					if (count == 1) secend = temp;
					fourth = temp;					
					count++;
				}

			}
		}
	}

	 cout <<"the number of munbers is "<< count << endl;
	 cout <<"the first number in the file is " << first << endl;
	 cout << "the secend number  in the file is " << secend << endl;
	 cout << "the secend last number in the file is " << third << endl;
	 cout << "the last number  in the file is " << fourth << endl;
	 system("pause");
	return 0;
}
