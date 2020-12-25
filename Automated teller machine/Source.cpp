#include <iostream>			//input and output
#include <string>			//library of words that will be written by client
#include <fstream>			//library of i/o files
#include <ctime>			//the library of time (wait)
#include <windows.h>		//for Sleeping,coloring and play sounds while the application is running
#include <conio.h>			//library of password in *******
#include <sstream>          //to convert the number from string type to long type
#pragma comment (lib,"winmm.lib")		//enables me to play 'wav' sounds while the application is running
using namespace std;
string GetPassword()                   // Get the password from the user */
{
	string input;
	const char RETURN = 13;
	const char BACKSPACE = 8;
	char temp;
	do                                //loop exited when RETURN is pressed */
	{
		temp = _getch();               // Get the current character of the password */
		if (temp == RETURN)           // If the user has pressed return */
		{
			cout << endl;
			return input;
		}                             // Exit the function */
		else if (temp == BACKSPACE && input.length() > 0)
		{
			cout << "\b \b";
			input.resize(input.length() - 1);
		}
		else if (temp != BACKSPACE)
		{
			input += temp;
			cout << '*';             // Print a star */	        
		}
	} while (temp != RETURN);
}
void wait(int wait_time);             //belongs to time
int main(int argc, char* argv[]) //to convert the number from string type to long type
{
	HANDLE hConsole;    //cloloring text
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	srand(time(NULL));
	long x = rand() % 9999999;
	string name, address, email, line, line2, ID, testID, password, testpassword, telephone, mobile, balance, inbalance, outbalance, finalbalance;
	string newname, newaddress, newemail, newtelephone, newmobile;
	ofstream outfile;
	ifstream infile;
	int y;
	int cho;
	int cho2;
	int lang;
	cout << endl;
	system("Color B");
	cout << "          ------------------------------------------------------------" << endl;
	cout << "	  <<Please Chose The Language You Want The App To Speak With>>" << endl;
	cout << "	  ------------------------------------------------------------" << endl << endl << endl << endl;
	cout << "       -------------------------------------------------------------------" << endl;
	cout << "       <<Press One(1) For Arabic Language Or Two(2) For English Language>>" << endl;
	cout << "       -------------------------------------------------------------------" << endl << endl << endl;
	SetConsoleTextAttribute(hConsole, 2);
	cin >> lang;
	if (lang == 1)
	{
		system("cls");
		system("Color A");
		PlaySound(TEXT("awelcome.wav"), NULL, SND_FILENAME | SND_ASYNC);
		cout << "            --------------------------------------------------------" << endl;
		cout << "	    << Welcome sir to Bank Automatic Teller Machine (ATM) >>	 " << endl;
		cout << "	    --------------------------------------------------------" << endl;
		cout << "                          &&&&&&&&&&&&&&&&&&& &&&                       &&&" << endl;
		cout << "                          &&&&&&&&&&&&&&&&&&& &&&&                     &&&&" << endl;
		cout << "                          &&&&&&&&&&&&&&&&&&& &&&&&                   &&&&&" << endl;
		cout << "             &            &&&&&&&&&&&&&&&&&&& &&&&&&                 &&&&&&" << endl;
		cout << "            &&&           &&&&&&&&&&&&&&&&&&& &&&&&&&               &&&&&&&" << endl;
		cout << "           &&&&&                 &&&&         &&&& &&&             &&& &&&&" << endl;
		cout << "          &&&&&&&                &&&&         &&&&  &&&           &&&  &&&&" << endl;
		cout << "         &&&& &&&&               &&&&         &&&&   &&&         &&&   &&&&" << endl;
		cout << "        &&&&   &&&&              &&&&         &&&&    &&&       &&&    &&&&" << endl;
		cout << "       &&&&     &&&&             &&&&         &&&&     &&&     &&&     &&&&" << endl;
		cout << "      &&&&&&&&&&&&&&&            &&&&         &&&&      &&&   &&&      &&&&" << endl;
		cout << "     &&&&         &&&&           &&&&         &&&&       &&& &&&       &&&&" << endl;
		cout << "    &&&&           &&&&          &&&&         &&&&        &&&&&        &&&&" << endl;
		cout << "   &&&&             &&&&         &&&&         &&&&         &&&         &&&&" << endl << endl;
		cout << "                          ----------------------------" << endl;
		cout << "                          Press Any Key To Continue... " << endl;
		cout << "                          ----------------------------" << endl;
		system("color A");
		Sleep(300);

		system("color 8");
		Sleep(300);

		system("color A");
		Sleep(300);

		system("color 8");             //changing a color in the screen
		Sleep(300);

		system("color A");
		Sleep(300);

		system("color 8");
		Sleep(300);

		system("color A");
		Sleep(300);

		system("color 8");
		Sleep(300);

		system("color A");
		_getch();
		Sleep(500);
		cout << "******";
		Sleep(100);
		cout << "**";
		Sleep(200);
		cout << "********************************";
		Sleep(200);
		cout << "**";                        //loading stars
		Sleep(150);
		cout << "*";
		Sleep(500);
		cout << "********";
		Sleep(500);
		cout << "*****************************" << endl;

		PlaySound(TEXT("apress.wav"), NULL, SND_FILENAME | SND_ASYNC);
		SetConsoleTextAttribute(hConsole, 7);
		cout << "------------------------" << endl;
		SetConsoleTextAttribute(hConsole, 1);
		cout << "press 1 for new client : " << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "------------------------" << endl << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "                                                  ----------------------------" << endl;
		SetConsoleTextAttribute(hConsole, 8);
		cout << "                                                  press 2 for existing client : " << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "                                                  ------------------------------" << endl;
		cin >> y;
		cin.get();
		if (y == 1)
		{
			system("cls");
			outfile.open(("User Data.txt"), ofstream::app);
			PlaySound(TEXT("a1.wav"), NULL, SND_FILENAME | SND_ASYNC);
			cout << "			    ---------------------------" << endl;
			cout << "			     Your Account ID Is : " << x << endl;
			cout << "			    ---------------------------" << endl;
			ID = x;
			outfile << x << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "---------------" << endl;
			SetConsoleTextAttribute(hConsole, 9);
			cout << "Chose APassword :----->> " << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "---------------" << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "--------------------" << endl;
			SetConsoleTextAttribute(hConsole, 2);
			password = GetPassword();
			SetConsoleTextAttribute(hConsole, 7);
			cout << "--------------------" << endl;
			outfile << password << endl;
			PlaySound(TEXT("a2.wav"), NULL, SND_FILENAME | SND_ASYNC);
			SetConsoleTextAttribute(hConsole, 7);
			cout << "----------------------" << endl;
			SetConsoleTextAttribute(hConsole, 9);
			cout << "Please Write Your Name >> :----->> " << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "----------------------" << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "--------------------------------------" << endl;
			SetConsoleTextAttribute(hConsole, 2);
			getline(cin, name);
			SetConsoleTextAttribute(hConsole, 7);
			cout << "--------------------------------------" << endl;
			outfile << name << endl;
			PlaySound(TEXT("a3.wav"), NULL, SND_FILENAME | SND_ASYNC);
			SetConsoleTextAttribute(hConsole, 7);
			cout << "-------------------" << endl;
			SetConsoleTextAttribute(hConsole, 9);
			cout << "What's Your Address >> :----->>" << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "-------------------" << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "----------------------------" << endl;
			SetConsoleTextAttribute(hConsole, 2);
			getline(cin, address);
			SetConsoleTextAttribute(hConsole, 7);
			cout << "----------------------------" << endl;
			outfile << address << endl;
			PlaySound(TEXT("a4.wav"), NULL, SND_FILENAME | SND_ASYNC);
			SetConsoleTextAttribute(hConsole, 7);
			cout << "--------------------------" << endl;
			SetConsoleTextAttribute(hConsole, 9);
			cout << "Your Home Telephone Number >> :----->> " << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "--------------------------" << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "-----------------" << endl;
			SetConsoleTextAttribute(hConsole, 2);
			getline(cin, telephone);
			SetConsoleTextAttribute(hConsole, 7);
			cout << "-----------------" << endl;
			outfile << telephone << endl;
			PlaySound(TEXT("a5.wav"), NULL, SND_FILENAME | SND_ASYNC);
			SetConsoleTextAttribute(hConsole, 7);
			cout << "------------------------" << endl;
			SetConsoleTextAttribute(hConsole, 9);
			cout << "Write Your Mobile Number >> :----->> " << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "------------------------" << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "-------------------" << endl;
			SetConsoleTextAttribute(hConsole, 2);
			getline(cin, mobile);
			SetConsoleTextAttribute(hConsole, 7);
			cout << "-------------------" << endl;
			outfile << mobile << endl;
			PlaySound(TEXT("a6.wav"), NULL, SND_FILENAME | SND_ASYNC);
			SetConsoleTextAttribute(hConsole, 7);
			cout << "-------------------------" << endl;
			SetConsoleTextAttribute(hConsole, 9);
			cout << "What's Your Email Address >> :----->> " << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "-------------------------" << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "------------------------------------" << endl;
			SetConsoleTextAttribute(hConsole, 2);
			getline(cin, email);
			SetConsoleTextAttribute(hConsole, 7);
			cout << "------------------------------------" << endl;
			outfile << email << endl;
			PlaySound(TEXT("a7.wav"), NULL, SND_FILENAME | SND_ASYNC);
			SetConsoleTextAttribute(hConsole, 7);
			cout << "---------------------------------------------------------" << endl;
			SetConsoleTextAttribute(hConsole, 9);
			cout << "Enter The Amount Of Balance You Want To Save Your Account >> :----->> " << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "---------------------------------------------------------" << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "-------------" << endl;
			SetConsoleTextAttribute(hConsole, 2);
			getline(cin, balance);
			SetConsoleTextAttribute(hConsole, 7);
			cout << "-------------" << endl;
			outfile << balance << endl;
			PlaySound(TEXT("acongratulations.wav"), NULL, SND_FILENAME | SND_ASYNC);
			SetConsoleTextAttribute(hConsole, 9);
			cout << "	   << Congratulations ^_^ you have registered succesfully >>" << endl << endl;
			SetConsoleTextAttribute(hConsole, 6);
			cout << "			   Your Account ID Is :----->> " << x << endl;
			outfile.close();
			cout << "Do You Want To Log In Your Account Now ? (y/n) : ";
			char choice2;
			cin >> choice2;
			if (choice2 == 'n')
			{
				while (choice2 == 'n')
					break;
			}
			else if (choice2 != 'y' && choice2 != 'n')
			{
				SetConsoleTextAttribute(hConsole, 4);
				cout << "Wrong Choice!!!!" << endl;
				cout << "\a\a\a\a\a\a" << endl;
			}
			else
			{
				system("cls");
				PlaySound(TEXT("a8.wav"), NULL, SND_FILENAME | SND_ASYNC);
				SetConsoleTextAttribute(hConsole, 7);
				cin.get();
				cout << "------------------------" << endl;
				SetConsoleTextAttribute(hConsole, 9);
				cout << "What's Your Account ID :----->> " << endl;
				SetConsoleTextAttribute(hConsole, 7);
				cout << "------------------------" << endl;
				SetConsoleTextAttribute(hConsole, 2);
				getline(cin, testID);
				PlaySound(TEXT("a9.wav"), NULL, SND_FILENAME | SND_ASYNC);
				SetConsoleTextAttribute(hConsole, 7);
				cout << "-------------------" << endl;
				SetConsoleTextAttribute(hConsole, 9);
				cout << "Write Your Password :----->>" << endl;
				SetConsoleTextAttribute(hConsole, 7);
				cout << "-------------------" << endl;
				SetConsoleTextAttribute(hConsole, 2);
				testpassword = GetPassword();
				infile.open("User Data.txt");
				while (infile.good())
				{
					getline(infile, line);
					getline(infile, line2);
					if (line == testID && line2 == testpassword)
					{
						getline(infile, name);
						getline(infile, address);
						getline(infile, telephone);
						getline(infile, mobile);
						getline(infile, email);
						getline(infile, balance);
						break;
					}

				}
				if (line != testID && line2 != testpassword)
				{
					PlaySound(TEXT("a10.wav"), NULL, SND_FILENAME | SND_ASYNC);
					SetConsoleTextAttribute(hConsole, 4);
					cout << "------------------------------------------------------" << endl;
					cout << "WRONG PassWord Or Wrong ID Please Try Again Later....." << endl;
					cout << "------------------------------------------------------" << endl;

				}
				infile.close();
				if (line == testID && line2 == testpassword)
				{
					while (true)
					{
						system("cls");
						SetConsoleTextAttribute(hConsole, 8);
						cout << endl;
						PlaySound(TEXT("a12.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "press 1 to check your balance amount >> :" << endl << endl;
						cout << "press 2 to input some money to your balance >> :" << endl << endl;
						cout << "press 3 to withdraw some money from your balance >> : " << endl << endl;
						cout << "press 4 to edit your information >> :" << endl << endl;
						cin >> cho;
						if (cho == 1)
						{
							SetConsoleTextAttribute(hConsole, 2);
							Sleep(500);
							cout << "******";
							Sleep(100);
							cout << "**";
							Sleep(200);
							cout << "********************************";
							Sleep(200);
							cout << "**";                        //loading stars
							Sleep(150);
							cout << "*";
							Sleep(500);
							cout << "********";
							Sleep(500);
							cout << "*****************************" << endl;
							SetConsoleTextAttribute(hConsole, 9);
							PlaySound(TEXT("a11.wav"), NULL, SND_FILENAME | SND_ASYNC);
							cout << "Your Balance Now Is : " << balance << endl;
						}
						else if (cho == 2)
						{
							PlaySound(TEXT("a13.wav"), NULL, SND_FILENAME | SND_ASYNC);
							SetConsoleTextAttribute(hConsole, 5);
							cout << "Your Balance Now Is : " << balance << endl << endl;
							cout << "Please Enter The Amount Of Money You Want To Add To Your Balance : ";
							cin.get();
							SetConsoleTextAttribute(hConsole, 2);
							getline(cin, inbalance);
							long int inbalance2 = strtol(inbalance.c_str(), NULL, 0);
							long int balance2 = strtol(balance.c_str(), NULL, 0);
							finalbalance = to_string((long long)balance2 + inbalance2);

							SetConsoleTextAttribute(hConsole, 2);
							Sleep(500);
							cout << "******";
							Sleep(100);
							cout << "**";
							Sleep(200);
							cout << "********************************";
							Sleep(200);
							cout << "**";                        //loading stars
							Sleep(150);
							cout << "*";
							Sleep(500);
							cout << "********";
							Sleep(500);
							cout << "*****************************" << endl;
							SetConsoleTextAttribute(hConsole, 9);
							PlaySound(TEXT("a14.wav"), NULL, SND_FILENAME | SND_ASYNC);
							cout << "Your Balance Became : " << finalbalance << endl;
						}
						else if (cho == 3)
						{
							SetConsoleTextAttribute(hConsole, 5);
							PlaySound(TEXT("a15.wav"), NULL, SND_FILENAME | SND_ASYNC);
							cout << "Your Balance Now Is : " << balance << endl << endl;
							cout << "Please Enter The Amount Of Money You Want To Take From Your Balance : ";
							cin.get();
							SetConsoleTextAttribute(hConsole, 2);
							getline(cin, outbalance);
							long int outbalance2 = strtol(outbalance.c_str(), NULL, 0);
							long int balance2 = strtol(balance.c_str(), NULL, 0);
							balance = to_string((long long)balance2 - outbalance2);
							SetConsoleTextAttribute(hConsole, 2);
							Sleep(500);
							cout << "******";
							Sleep(100);
							cout << "**";
							Sleep(200);
							cout << "********************************";
							Sleep(200);
							cout << "**";                        //loading stars
							Sleep(150);
							cout << "*";
							Sleep(500);
							cout << "********";
							Sleep(500);
							cout << "*****************************" << endl;
							SetConsoleTextAttribute(hConsole, 9);
							PlaySound(TEXT("a14.wav"), NULL, SND_FILENAME | SND_ASYNC);
							cout << "Your Balance Became : " << balance << endl;
						}
						else if (cho == 4)
						{
							system("cls");
							SetConsoleTextAttribute(hConsole, 6);
							PlaySound(TEXT("a16.wav"), NULL, SND_FILENAME | SND_ASYNC);
							cout << "Press 1 To Change Your Name >> : " << endl << endl;
							cout << "Press 2 To Change Your Address >> : " << endl << endl;
							cout << "Press 3 To Change Your Home Phone Number >> : " << endl << endl;
							cout << "Press 4 To Change Your Mobile Number >> : " << endl << endl;
							cout << "Press 5 To Change Your Email Address >> : " << endl << endl;
							cin >> cho2;
							if (cho2 == 1)
							{
								while (infile.good())
								{
									getline(infile, line);
									getline(infile, line2);
									if (line == testID && line2 == testpassword)
									{
										getline(infile, password);
										break;
									}

								}
								PlaySound(TEXT("a17.wav"), NULL, SND_FILENAME | SND_ASYNC);
								cout << "Your Name IS : " << name << endl << endl;
								cout << "Please Write The New Name >> : " << endl << endl;
								cin.get();
								SetConsoleTextAttribute(hConsole, 2);
								getline(cin, newname);
								Sleep(500);
								cout << "******";
								Sleep(100);
								cout << "**";
								Sleep(200);
								cout << "********************************";
								Sleep(200);
								cout << "**";                        //loading stars
								Sleep(150);
								cout << "*";
								Sleep(500);
								cout << "********";
								Sleep(500);
								cout << "*****************************" << endl;
								SetConsoleTextAttribute(hConsole, 9);
								PlaySound(TEXT("a18.wav"), NULL, SND_FILENAME | SND_ASYNC);
								cout << "The Operation Done Well And Your Name Became : " << newname << endl;
							}
							else if (cho2 == 2)
							{
								while (infile.good())
								{
									getline(infile, line);
									getline(infile, line2);
									if (line == testID && line2 == testpassword)
									{
										getline(infile, password);
										getline(infile, name);
										break;
									}

								}
								SetConsoleTextAttribute(hConsole, 5);
								PlaySound(TEXT("a19.wav"), NULL, SND_FILENAME | SND_ASYNC);
								cout << "Your Address IS : " << address << endl << endl;
								cout << "Please Write The New Address >> : " << endl;
								cin.get();
								SetConsoleTextAttribute(hConsole, 2);
								getline(cin, newaddress);
								Sleep(500);
								cout << "******";
								Sleep(100);
								cout << "**";
								Sleep(200);
								cout << "********************************";
								Sleep(200);
								cout << "**";                        //loading stars
								Sleep(150);
								cout << "*";
								Sleep(500);
								cout << "********";
								Sleep(500);
								cout << "*****************************" << endl;
								SetConsoleTextAttribute(hConsole, 9);
								PlaySound(TEXT("a20.wav"), NULL, SND_FILENAME | SND_ASYNC);
								cout << "The Operation Done Well And Your Address Became : " << newaddress << endl;
							}
							else if (cho2 == 3)
							{
								while (infile.good())
								{
									getline(infile, line);
									getline(infile, line2);
									if (line == testID && line2 == testpassword)
									{
										getline(infile, password);
										getline(infile, name);
										getline(infile, address);
										break;
									}

								}
								SetConsoleTextAttribute(hConsole, 5);
								PlaySound(TEXT("a21.wav"), NULL, SND_FILENAME | SND_ASYNC);
								cout << "Your Home Phone Number IS : " << telephone << endl << endl;
								cout << "Please Write The New Home Phone Number >> : " << endl;
								cin.get();
								SetConsoleTextAttribute(hConsole, 2);
								getline(cin, newtelephone);
								Sleep(500);
								cout << "******";
								Sleep(100);
								cout << "**";
								Sleep(200);
								cout << "********************************";
								Sleep(200);
								cout << "**";                        //loading stars
								Sleep(150);
								cout << "*";
								Sleep(500);
								cout << "********";
								Sleep(500);
								cout << "*****************************" << endl;
								SetConsoleTextAttribute(hConsole, 9);
								PlaySound(TEXT("a22.wav"), NULL, SND_FILENAME | SND_ASYNC);
								cout << "The Operation Done Well And Your Home Phone Number Became : " << newtelephone << endl;
							}
							else if (cho2 == 4)
							{
								while (infile.good())
								{
									getline(infile, line);
									getline(infile, line2);
									if (line == testID && line2 == testpassword)
									{
										getline(infile, password);
										getline(infile, name);
										getline(infile, address);
										getline(infile, telephone);
										break;
									}

								}
								SetConsoleTextAttribute(hConsole, 5);
								PlaySound(TEXT("a23.wav"), NULL, SND_FILENAME | SND_ASYNC);
								cout << "Your Mobile Number IS : " << mobile << endl << endl;
								cout << "Please Write The New mobile Number >> : " << endl;
								cin.get();
								SetConsoleTextAttribute(hConsole, 2);
								getline(cin, newmobile);
								Sleep(500);
								cout << "******";
								Sleep(100);
								cout << "**";
								Sleep(200);
								cout << "********************************";
								Sleep(200);
								cout << "**";                        //loading stars
								Sleep(150);
								cout << "*";
								Sleep(500);
								cout << "********";
								Sleep(500);
								cout << "*****************************" << endl;
								SetConsoleTextAttribute(hConsole, 9);
								PlaySound(TEXT("a24.wav"), NULL, SND_FILENAME | SND_ASYNC);
								cout << "The Operation Done Well And Your Mobile Number Became : " << newmobile << endl;
							}
							else if (cho2 == 5)
							{
								while (infile.good())
								{
									getline(infile, line);
									getline(infile, line2);
									if (line == testID && line2 == testpassword)
									{
										getline(infile, password);
										getline(infile, name);
										getline(infile, address);
										getline(infile, telephone);
										getline(infile, mobile);
										break;
									}

								}
								SetConsoleTextAttribute(hConsole, 5);
								PlaySound(TEXT("a25.wav"), NULL, SND_FILENAME | SND_ASYNC);
								cout << "Your Email Address IS : " << email << endl << endl;
								cout << "Please Write The New Email Address >> : " << endl;
								cin.get();
								SetConsoleTextAttribute(hConsole, 2);
								getline(cin, newemail);
								Sleep(500);
								cout << "******";
								Sleep(100);
								cout << "**";
								Sleep(200);
								cout << "********************************";
								Sleep(200);
								cout << "**";                        //loading stars
								Sleep(150);
								cout << "*";
								Sleep(500);
								cout << "********";
								Sleep(500);
								cout << "*****************************" << endl;
								SetConsoleTextAttribute(hConsole, 9);
								PlaySound(TEXT("a26.wav"), NULL, SND_FILENAME | SND_ASYNC);
								cout << "The Operation Done Well And Your Email Address Became : " << newemail << endl;
							}
							else
							{
								SetConsoleTextAttribute(hConsole, 4);
								cout << "Wrong Choice!!!!" << endl;
								cout << "\a\a\a\a\a\a" << endl;
							}
						}
						else
						{
							SetConsoleTextAttribute(hConsole, 4);
							cout << "Wrong Choice!!!!" << endl;
							cout << "\a\a\a\a\a\a" << endl;
						}
						cout << "Do You Want To Back To Options Again ? (y/n) : ";
						char cho4;
						cin >> cho4;
						if (cho4 == 'y')
							continue;
						else if (cho4 == 'n')
							break;
						else
						{
							cout << "Wrong Choice !!!" << endl;
							cout << "\a\a\a\a\a" << endl;
							wait(2);
						}
					}

				}
			}
		}
		else if (y == 2)
		{
			system("cls");
			PlaySound(TEXT("a8.wav"), NULL, SND_FILENAME | SND_ASYNC);
			SetConsoleTextAttribute(hConsole, 7);
			cout << "------------------------" << endl;
			SetConsoleTextAttribute(hConsole, 9);
			cout << "What's Your Account ID :----->> " << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "------------------------" << endl;
			SetConsoleTextAttribute(hConsole, 2);
			getline(cin, testID);
			PlaySound(TEXT("a9.wav"), NULL, SND_FILENAME | SND_ASYNC);
			SetConsoleTextAttribute(hConsole, 7);
			cout << "-------------------" << endl;
			SetConsoleTextAttribute(hConsole, 9);
			cout << "Write Your Password :----->>" << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "-------------------" << endl;
			SetConsoleTextAttribute(hConsole, 2);
			testpassword = GetPassword();
			infile.open("User Data.txt");
			while (infile.good())
			{
				getline(infile, line);
				getline(infile, line2);
				if (line == testID && line2 == testpassword)
				{
					getline(infile, name);
					getline(infile, address);
					getline(infile, telephone);
					getline(infile, mobile);
					getline(infile, email);
					getline(infile, balance);
					break;
				}

			}
			if (line != testID && line2 != testpassword)
			{
				PlaySound(TEXT("a10.wav"), NULL, SND_FILENAME | SND_ASYNC);
				SetConsoleTextAttribute(hConsole, 4);
				cout << "------------------------------------------------------" << endl;
				cout << "WRONG PassWord Or Wrong ID Please Try Again Later....." << endl;
				cout << "------------------------------------------------------" << endl;

			}
			infile.close();
			if (line == testID && line2 == testpassword)
			{
				system("cls");
				SetConsoleTextAttribute(hConsole, 8);
				cout << endl;
				PlaySound(TEXT("a12.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "press 1 to check your balance amount >> :" << endl << endl;
				cout << "press 2 to input some money to your balance >> :" << endl << endl;
				cout << "press 3 to withdraw some money from your balance >> : " << endl << endl;
				cout << "press 4 to edit your information >> :" << endl << endl;
				cin >> cho;
				if (cho == 1)
				{
					SetConsoleTextAttribute(hConsole, 2);
					Sleep(500);
					cout << "******";
					Sleep(100);
					cout << "**";
					Sleep(200);
					cout << "********************************";
					Sleep(200);
					cout << "**";                        //loading stars
					Sleep(150);
					cout << "*";
					Sleep(500);
					cout << "********";
					Sleep(500);
					cout << "*****************************" << endl;
					SetConsoleTextAttribute(hConsole, 9);
					PlaySound(TEXT("a11.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "Your Balance Now Is : " << balance << endl;
				}
				else if (cho == 2)
				{
					PlaySound(TEXT("a13.wav"), NULL, SND_FILENAME | SND_ASYNC);
					SetConsoleTextAttribute(hConsole, 5);
					cout << "Your Balance Now Is : " << balance << endl << endl;
					cout << "Please Enter The Amount Of Money You Want To Add To Your Balance : ";
					cin.get();
					SetConsoleTextAttribute(hConsole, 2);
					getline(cin, inbalance);
					long int inbalance2 = strtol(inbalance.c_str(), NULL, 0);
					long int balance2 = strtol(balance.c_str(), NULL, 0);
					finalbalance = to_string((long long)balance2 + inbalance2);

					SetConsoleTextAttribute(hConsole, 2);
					Sleep(500);
					cout << "******";
					Sleep(100);
					cout << "**";
					Sleep(200);
					cout << "********************************";
					Sleep(200);
					cout << "**";                        //loading stars
					Sleep(150);
					cout << "*";
					Sleep(500);
					cout << "********";
					Sleep(500);
					cout << "*****************************" << endl;
					SetConsoleTextAttribute(hConsole, 9);
					PlaySound(TEXT("a14.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "Your Balance Became : " << finalbalance << endl;
				}
				else if (cho == 3)
				{
					SetConsoleTextAttribute(hConsole, 5);
					PlaySound(TEXT("a15.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "Your Balance Now Is : " << balance << endl << endl;
					cout << "Please Enter The Amount Of Money You Want To Take From Your Balance : ";
					cin.get();
					SetConsoleTextAttribute(hConsole, 2);
					getline(cin, outbalance);
					long int outbalance2 = strtol(outbalance.c_str(), NULL, 0);
					long int balance2 = strtol(balance.c_str(), NULL, 0);
					balance = to_string((long long)balance2 - outbalance2);
					SetConsoleTextAttribute(hConsole, 2);
					Sleep(500);
					cout << "******";
					Sleep(100);
					cout << "**";
					Sleep(200);
					cout << "********************************";
					Sleep(200);
					cout << "**";                        //loading stars
					Sleep(150);
					cout << "*";
					Sleep(500);
					cout << "********";
					Sleep(500);
					cout << "*****************************" << endl;
					SetConsoleTextAttribute(hConsole, 9);
					PlaySound(TEXT("a14.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "Your Balance Became : " << balance << endl;
				}
				else if (cho == 4)
				{
					system("cls");
					SetConsoleTextAttribute(hConsole, 6);
					PlaySound(TEXT("a16.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "Press 1 To Change Your Name >> : " << endl << endl;
					cout << "Press 2 To Change Your Address >> : " << endl << endl;
					cout << "Press 3 To Change Your Home Phone Number >> : " << endl << endl;
					cout << "Press 4 To Change Your Mobile Number >> : " << endl << endl;
					cout << "Press 5 To Change Your Email Address >> : " << endl << endl;
					cin >> cho2;
					if (cho2 == 1)
					{
						while (infile.good())
						{
							getline(infile, line);
							getline(infile, line2);
							if (line == testID && line2 == testpassword)
							{
								getline(infile, password);
								break;
							}

						}
						PlaySound(TEXT("a17.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "Your Name IS : " << name << endl << endl;
						cout << "Please Write The New Name >> : " << endl << endl;
						cin.get();
						SetConsoleTextAttribute(hConsole, 2);
						getline(cin, newname);
						Sleep(500);
						cout << "******";
						Sleep(100);
						cout << "**";
						Sleep(200);
						cout << "********************************";
						Sleep(200);
						cout << "**";                        //loading stars
						Sleep(150);
						cout << "*";
						Sleep(500);
						cout << "********";
						Sleep(500);
						cout << "*****************************" << endl;
						SetConsoleTextAttribute(hConsole, 9);
						PlaySound(TEXT("a18.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "The Operation Done Well And Your Name Became : " << newname << endl;
					}
					else if (cho2 == 2)
					{
						while (infile.good())
						{
							getline(infile, line);
							getline(infile, line2);
							if (line == testID && line2 == testpassword)
							{
								getline(infile, password);
								getline(infile, name);
								break;
							}

						}
						SetConsoleTextAttribute(hConsole, 5);
						PlaySound(TEXT("a19.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "Your Address IS : " << address << endl << endl;
						cout << "Please Write The New Address >> : " << endl;
						cin.get();
						SetConsoleTextAttribute(hConsole, 2);
						getline(cin, newaddress);
						Sleep(500);
						cout << "******";
						Sleep(100);
						cout << "**";
						Sleep(200);
						cout << "********************************";
						Sleep(200);
						cout << "**";                        //loading stars
						Sleep(150);
						cout << "*";
						Sleep(500);
						cout << "********";
						Sleep(500);
						cout << "*****************************" << endl;
						SetConsoleTextAttribute(hConsole, 9);
						PlaySound(TEXT("a20.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "The Operation Done Well And Your Address Became : " << newaddress << endl;
					}
					else if (cho2 == 3)
					{
						while (infile.good())
						{
							getline(infile, line);
							getline(infile, line2);
							if (line == testID && line2 == testpassword)
							{
								getline(infile, password);
								getline(infile, name);
								getline(infile, address);
								break;
							}

						}
						SetConsoleTextAttribute(hConsole, 5);
						PlaySound(TEXT("a21.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "Your Home Phone Number IS : " << telephone << endl << endl;
						cout << "Please Write The New Home Phone Number >> : " << endl;
						cin.get();
						SetConsoleTextAttribute(hConsole, 2);
						getline(cin, newtelephone);
						Sleep(500);
						cout << "******";
						Sleep(100);
						cout << "**";
						Sleep(200);
						cout << "********************************";
						Sleep(200);
						cout << "**";                        //loading stars
						Sleep(150);
						cout << "*";
						Sleep(500);
						cout << "********";
						Sleep(500);
						cout << "*****************************" << endl;
						SetConsoleTextAttribute(hConsole, 9);
						PlaySound(TEXT("a22.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "The Operation Done Well And Your Home Phone Number Became : " << newtelephone << endl;
					}
					else if (cho2 == 4)
					{
						while (infile.good())
						{
							getline(infile, line);
							getline(infile, line2);
							if (line == testID && line2 == testpassword)
							{
								getline(infile, password);
								getline(infile, name);
								getline(infile, address);
								getline(infile, telephone);
								break;
							}

						}
						SetConsoleTextAttribute(hConsole, 5);
						PlaySound(TEXT("a23.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "Your Mobile Number IS : " << mobile << endl << endl;
						cout << "Please Write The New mobile Number >> : " << endl;
						cin.get();
						SetConsoleTextAttribute(hConsole, 2);
						getline(cin, newmobile);
						Sleep(500);
						cout << "******";
						Sleep(100);
						cout << "**";
						Sleep(200);
						cout << "********************************";
						Sleep(200);
						cout << "**";                        //loading stars
						Sleep(150);
						cout << "*";
						Sleep(500);
						cout << "********";
						Sleep(500);
						cout << "*****************************" << endl;
						SetConsoleTextAttribute(hConsole, 9);
						PlaySound(TEXT("a24.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "The Operation Done Well And Your Mobile Number Became : " << newmobile << endl;
					}
					else if (cho2 == 5)
					{
						while (infile.good())
						{
							getline(infile, line);
							getline(infile, line2);
							if (line == testID && line2 == testpassword)
							{
								getline(infile, password);
								getline(infile, name);
								getline(infile, address);
								getline(infile, telephone);
								getline(infile, mobile);
								break;
							}

						}
						SetConsoleTextAttribute(hConsole, 5);
						PlaySound(TEXT("a25.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "Your Email Address IS : " << email << endl << endl;
						cout << "Please Write The New Email Address >> : " << endl;
						cin.get();
						SetConsoleTextAttribute(hConsole, 2);
						getline(cin, newemail);
						Sleep(500);
						cout << "******";
						Sleep(100);
						cout << "**";
						Sleep(200);
						cout << "********************************";
						Sleep(200);
						cout << "**";                        //loading stars
						Sleep(150);
						cout << "*";
						Sleep(500);
						cout << "********";
						Sleep(500);
						cout << "*****************************" << endl;
						SetConsoleTextAttribute(hConsole, 9);
						PlaySound(TEXT("a26.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "The Operation Done Well And Your Email Address Became : " << newemail << endl;
					}
					else
					{
						SetConsoleTextAttribute(hConsole, 4);
						cout << "Wrong Choice!!!!" << endl;
						cout << "\a\a\a\a\a\a" << endl;
					}
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 4);
					cout << "Wrong Choice!!!!" << endl;
					cout << "\a\a\a\a\a\a" << endl;
				}
			}
		}
	}
	else if (lang == 2)
	{
		system("cls");
		system("Color A");
		PlaySound(TEXT("welcome.wav"), NULL, SND_FILENAME | SND_ASYNC);
		cout << "            --------------------------------------------------------" << endl;
		cout << "	    << Welcome sir to Bank Automatic Teller Machine (ATM) >>	 " << endl;
		cout << "	    --------------------------------------------------------" << endl;
		cout << "                          &&&&&&&&&&&&&&&&&&& &&&                       &&&" << endl;
		cout << "                          &&&&&&&&&&&&&&&&&&& &&&&                     &&&&" << endl;
		cout << "                          &&&&&&&&&&&&&&&&&&& &&&&&                   &&&&&" << endl;
		cout << "             &            &&&&&&&&&&&&&&&&&&& &&&&&&                 &&&&&&" << endl;
		cout << "            &&&           &&&&&&&&&&&&&&&&&&& &&&&&&&               &&&&&&&" << endl;
		cout << "           &&&&&                 &&&&         &&&& &&&             &&& &&&&" << endl;
		cout << "          &&&&&&&                &&&&         &&&&  &&&           &&&  &&&&" << endl;
		cout << "         &&&& &&&&               &&&&         &&&&   &&&         &&&   &&&&" << endl;
		cout << "        &&&&   &&&&              &&&&         &&&&    &&&       &&&    &&&&" << endl;
		cout << "       &&&&     &&&&             &&&&         &&&&     &&&     &&&     &&&&" << endl;
		cout << "      &&&&&&&&&&&&&&&            &&&&         &&&&      &&&   &&&      &&&&" << endl;
		cout << "     &&&&         &&&&           &&&&         &&&&       &&& &&&       &&&&" << endl;
		cout << "    &&&&           &&&&          &&&&         &&&&        &&&&&        &&&&" << endl;
		cout << "   &&&&             &&&&         &&&&         &&&&         &&&         &&&&" << endl << endl;
		cout << "                          ----------------------------" << endl;
		cout << "                          Press Any Key To Continue... " << endl;
		cout << "                          ----------------------------" << endl;
		system("color A");
		Sleep(300);

		system("color 8");
		Sleep(300);

		system("color A");
		Sleep(300);

		system("color 8");             //changing a color in the screen
		Sleep(300);

		system("color A");
		Sleep(300);

		system("color 8");
		Sleep(300);

		system("color A");
		Sleep(300);

		system("color 8");
		Sleep(300);

		system("color A");
		_getch();
		Sleep(500);
		cout << "******";
		Sleep(100);
		cout << "**";
		Sleep(200);
		cout << "********************************";
		Sleep(200);
		cout << "**";                        //loading stars
		Sleep(150);
		cout << "*";
		Sleep(500);
		cout << "********";
		Sleep(500);
		cout << "*****************************" << endl;

		PlaySound(TEXT("press.wav"), NULL, SND_FILENAME | SND_ASYNC);
		SetConsoleTextAttribute(hConsole, 7);
		cout << "------------------------" << endl;
		SetConsoleTextAttribute(hConsole, 1);
		cout << "press 1 for new client : " << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "------------------------" << endl << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "                                                   -----------------------------" << endl;
		SetConsoleTextAttribute(hConsole, 8);
		cout << "                                                   press 2 for existing client : " << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "                                                   -----------------------------" << endl;
		cin >> y;
		cin.get();
		if (y == 1)
		{
			system("cls");
			outfile.open(("User Data.txt"), ofstream::app);
			PlaySound(TEXT("1.wav"), NULL, SND_FILENAME | SND_ASYNC);
			cout << "			    ---------------------------" << endl;
			cout << "			     Your Account ID Is : " << x << endl;
			cout << "			    ---------------------------" << endl;
			ID = x;
			outfile << x << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "---------------" << endl;
			SetConsoleTextAttribute(hConsole, 9);
			cout << "Chose APassword :----->> " << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "---------------" << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "--------------------" << endl;
			SetConsoleTextAttribute(hConsole, 2);
			password = GetPassword();
			SetConsoleTextAttribute(hConsole, 7);
			cout << "--------------------" << endl;
			outfile << password << endl;
			PlaySound(TEXT("2.wav"), NULL, SND_FILENAME | SND_ASYNC);
			SetConsoleTextAttribute(hConsole, 7);
			cout << "----------------------" << endl;
			SetConsoleTextAttribute(hConsole, 9);
			cout << "Please Write Your Name >> :----->> " << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "----------------------" << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "--------------------------------------" << endl;
			SetConsoleTextAttribute(hConsole, 2);
			getline(cin, name);
			SetConsoleTextAttribute(hConsole, 7);
			cout << "--------------------------------------" << endl;
			outfile << name << endl;
			PlaySound(TEXT("3.wav"), NULL, SND_FILENAME | SND_ASYNC);
			SetConsoleTextAttribute(hConsole, 7);
			cout << "-------------------" << endl;
			SetConsoleTextAttribute(hConsole, 9);
			cout << "What's Your Address >> :----->>" << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "-------------------" << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "----------------------------" << endl;
			SetConsoleTextAttribute(hConsole, 2);
			getline(cin, address);
			SetConsoleTextAttribute(hConsole, 7);
			cout << "----------------------------" << endl;
			outfile << address << endl;
			PlaySound(TEXT("4.wav"), NULL, SND_FILENAME | SND_ASYNC);
			SetConsoleTextAttribute(hConsole, 7);
			cout << "--------------------------" << endl;
			SetConsoleTextAttribute(hConsole, 9);
			cout << "Your Home Telephone Number >> :----->> " << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "--------------------------" << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "-----------------" << endl;
			SetConsoleTextAttribute(hConsole, 2);
			getline(cin, telephone);
			SetConsoleTextAttribute(hConsole, 7);
			cout << "-----------------" << endl;
			outfile << telephone << endl;
			PlaySound(TEXT("5.wav"), NULL, SND_FILENAME | SND_ASYNC);
			SetConsoleTextAttribute(hConsole, 7);
			cout << "------------------------" << endl;
			SetConsoleTextAttribute(hConsole, 9);
			cout << "Write Your Mobile Number >> :----->> " << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "------------------------" << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "-------------------" << endl;
			SetConsoleTextAttribute(hConsole, 2);
			getline(cin, mobile);
			SetConsoleTextAttribute(hConsole, 7);
			cout << "-------------------" << endl;
			outfile << mobile << endl;
			PlaySound(TEXT("6.wav"), NULL, SND_FILENAME | SND_ASYNC);
			SetConsoleTextAttribute(hConsole, 7);
			cout << "-------------------------" << endl;
			SetConsoleTextAttribute(hConsole, 9);
			cout << "What's Your Email Address >> :----->> " << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "-------------------------" << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "------------------------------------" << endl;
			SetConsoleTextAttribute(hConsole, 2);
			getline(cin, email);
			SetConsoleTextAttribute(hConsole, 7);
			cout << "------------------------------------" << endl;
			outfile << email << endl;
			PlaySound(TEXT("7.wav"), NULL, SND_FILENAME | SND_ASYNC);
			SetConsoleTextAttribute(hConsole, 7);
			cout << "---------------------------------------------------------" << endl;
			SetConsoleTextAttribute(hConsole, 9);
			cout << "Enter The Amount Of Balance You Want To Save Your Account >> :----->> " << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "---------------------------------------------------------" << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "-------------" << endl;
			SetConsoleTextAttribute(hConsole, 2);
			getline(cin, balance);
			SetConsoleTextAttribute(hConsole, 7);
			cout << "-------------" << endl;
			outfile << balance << endl;
			PlaySound(TEXT("congratulations.wav"), NULL, SND_FILENAME | SND_ASYNC);
			SetConsoleTextAttribute(hConsole, 9);
			cout << "	   << Congratulations ^_^ you have registered succesfully >>" << endl << endl;
			SetConsoleTextAttribute(hConsole, 6);
			cout << "			   Your Account ID Is :----->> " << x << endl;
			outfile.close();
			cout << "Do You Want To Log In Your Account Now ? (y/n) : ";
			char choice1;
			cin >> choice1;
			if (choice1 == 'n')
			{
				while (choice1 == 'n')
					break;
			}
			else if (choice1 != 'y' && choice1 != 'n')
			{
				SetConsoleTextAttribute(hConsole, 4);
				cout << "Wrong Choice!!!!" << endl;
				cout << "\a\a\a\a\a\a" << endl;
			}
			else
			{
				system("cls");
				PlaySound(TEXT("8.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cin.get();
				SetConsoleTextAttribute(hConsole, 7);
				cout << "------------------------" << endl;
				SetConsoleTextAttribute(hConsole, 9);
				cout << "What's Your Account ID : " << endl;
				SetConsoleTextAttribute(hConsole, 7);
				cout << "------------------------" << endl;
				SetConsoleTextAttribute(hConsole, 2);
				getline(cin, testID);
				PlaySound(TEXT("9.wav"), NULL, SND_FILENAME | SND_ASYNC);
				SetConsoleTextAttribute(hConsole, 7);
				cout << "-------------------" << endl;
				SetConsoleTextAttribute(hConsole, 9);
				cout << "Write Your Password :" << endl;
				SetConsoleTextAttribute(hConsole, 7);
				cout << "-------------------" << endl;
				SetConsoleTextAttribute(hConsole, 2);
				testpassword = GetPassword();
				infile.open("User Data.txt");
				while (infile.good())
				{
					getline(infile, line);
					getline(infile, line2);
					if (line == testID && line2 == testpassword)
					{
						getline(infile, name);
						getline(infile, address);
						getline(infile, telephone);
						getline(infile, mobile);
						getline(infile, email);
						getline(infile, balance);
						break;
					}

				}
				if (line != testID && line2 != testpassword)
				{
					PlaySound(TEXT("10.wav"), NULL, SND_FILENAME | SND_ASYNC);
					SetConsoleTextAttribute(hConsole, 4);
					cout << "------------------------------------------------------" << endl;
					cout << "WRONG PassWord Or Wrong ID Please Try Again Later....." << endl;
					cout << "------------------------------------------------------" << endl;

				}
				infile.close();
				if (line == testID && line2 == testpassword)
				{
					system("cls");
					SetConsoleTextAttribute(hConsole, 8);
					cout << endl;
					PlaySound(TEXT("12.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "press 1 to check your balance amount >> :" << endl << endl;
					cout << "press 2 to input some money to your balance >> :" << endl << endl;
					cout << "press 3 to withdraw some money from your balance >> : " << endl << endl;
					cout << "press 4 to edit your information >> :" << endl << endl;
					cin >> cho;
					if (cho == 1)
					{
						SetConsoleTextAttribute(hConsole, 2);
						Sleep(500);
						cout << "******";
						Sleep(100);
						cout << "**";
						Sleep(200);
						cout << "********************************";
						Sleep(200);
						cout << "**";                        //loading stars
						Sleep(150);
						cout << "*";
						Sleep(500);
						cout << "********";
						Sleep(500);
						cout << "*****************************" << endl;
						SetConsoleTextAttribute(hConsole, 9);
						PlaySound(TEXT("11.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "Your Balance Now Is : " << balance << endl;
					}
					else if (cho == 2)
					{
						PlaySound(TEXT("13.wav"), NULL, SND_FILENAME | SND_ASYNC);
						SetConsoleTextAttribute(hConsole, 5);
						cout << "Your Balance Now Is : " << balance << endl << endl;
						cout << "Please Enter The Amount Of Money You Want To Add To Your Balance : ";
						cin.get();
						SetConsoleTextAttribute(hConsole, 2);
						getline(cin, inbalance);
						long int inbalance2 = strtol(inbalance.c_str(), NULL, 0);
						long int balance2 = strtol(balance.c_str(), NULL, 0);
						finalbalance = to_string((long long)balance2 + inbalance2);

						SetConsoleTextAttribute(hConsole, 2);
						Sleep(500);
						cout << "******";
						Sleep(100);
						cout << "**";
						Sleep(200);
						cout << "********************************";
						Sleep(200);
						cout << "**";                        //loading stars
						Sleep(150);
						cout << "*";
						Sleep(500);
						cout << "********";
						Sleep(500);
						cout << "*****************************" << endl;
						SetConsoleTextAttribute(hConsole, 9);
						PlaySound(TEXT("14.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "Your Balance Became : " << finalbalance << endl;
					}
					else if (cho == 3)
					{
						SetConsoleTextAttribute(hConsole, 5);
						PlaySound(TEXT("15.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "Your Balance Now Is : " << balance << endl << endl;
						cout << "Please Enter The Amount Of Money You Want To Take From Your Balance : ";
						cin.get();
						SetConsoleTextAttribute(hConsole, 2);
						getline(cin, outbalance);
						long int outbalance2 = strtol(outbalance.c_str(), NULL, 0);
						long int balance2 = strtol(balance.c_str(), NULL, 0);
						balance = to_string((long long)balance2 - outbalance2);
						SetConsoleTextAttribute(hConsole, 2);
						Sleep(500);
						cout << "******";
						Sleep(100);
						cout << "**";
						Sleep(200);
						cout << "********************************";
						Sleep(200);
						cout << "**";                        //loading stars
						Sleep(150);
						cout << "*";
						Sleep(500);
						cout << "********";
						Sleep(500);
						cout << "*****************************" << endl;
						SetConsoleTextAttribute(hConsole, 9);
						PlaySound(TEXT("14.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "Your Balance Became : " << balance << endl;
					}
					else if (cho == 4)
					{
						system("cls");
						SetConsoleTextAttribute(hConsole, 6);
						PlaySound(TEXT("16.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "Press 1 To Change Your Name >> : " << endl << endl;
						cout << "Press 2 To Change Your Address >> : " << endl << endl;
						cout << "Press 3 To Change Your Home Phone Number >> : " << endl << endl;
						cout << "Press 4 To Change Your Mobile Number >> : " << endl << endl;
						cout << "Press 5 To Change Your Email Address >> : " << endl << endl;
						cin >> cho2;
						if (cho2 == 1)
						{
							while (infile.good())
							{
								getline(infile, line);
								getline(infile, line2);
								if (line == testID && line2 == testpassword)
								{
									getline(infile, password);
									break;
								}

							}
							PlaySound(TEXT("17.wav"), NULL, SND_FILENAME | SND_ASYNC);
							cout << "Your Name IS : " << name << endl << endl;
							cout << "Please Write The New Name >> : " << endl << endl;
							cin.get();
							SetConsoleTextAttribute(hConsole, 2);
							getline(cin, newname);
							Sleep(500);
							cout << "******";
							Sleep(100);
							cout << "**";
							Sleep(200);
							cout << "********************************";
							Sleep(200);
							cout << "**";                        //loading stars
							Sleep(150);
							cout << "*";
							Sleep(500);
							cout << "********";
							Sleep(500);
							cout << "*****************************" << endl;
							SetConsoleTextAttribute(hConsole, 9);
							PlaySound(TEXT("18.wav"), NULL, SND_FILENAME | SND_ASYNC);
							cout << "The Operation Done Well And Your Name Became : " << newname << endl;
						}
						else if (cho2 == 2)
						{
							while (infile.good())
							{
								getline(infile, line);
								getline(infile, line2);
								if (line == testID && line2 == testpassword)
								{
									getline(infile, password);
									getline(infile, name);
									break;
								}

							}
							SetConsoleTextAttribute(hConsole, 5);
							PlaySound(TEXT("19.wav"), NULL, SND_FILENAME | SND_ASYNC);
							cout << "Your Address IS : " << address << endl << endl;
							cout << "Please Write The New Address >> : " << endl;
							cin.get();
							SetConsoleTextAttribute(hConsole, 2);
							getline(cin, newaddress);
							Sleep(500);
							cout << "******";
							Sleep(100);
							cout << "**";
							Sleep(200);
							cout << "********************************";
							Sleep(200);
							cout << "**";                        //loading stars
							Sleep(150);
							cout << "*";
							Sleep(500);
							cout << "********";
							Sleep(500);
							cout << "*****************************" << endl;
							SetConsoleTextAttribute(hConsole, 9);
							PlaySound(TEXT("20.wav"), NULL, SND_FILENAME | SND_ASYNC);
							cout << "The Operation Done Well And Your Address Became : " << newaddress << endl;
						}
						else if (cho2 == 3)
						{
							while (infile.good())
							{
								getline(infile, line);
								getline(infile, line2);
								if (line == testID && line2 == testpassword)
								{
									getline(infile, password);
									getline(infile, name);
									getline(infile, address);
									break;
								}

							}
							SetConsoleTextAttribute(hConsole, 5);
							PlaySound(TEXT("21.wav"), NULL, SND_FILENAME | SND_ASYNC);
							cout << "Your Home Phone Number IS : " << telephone << endl << endl;
							cout << "Please Write The New Home Phone Number >> : " << endl;
							cin.get();
							SetConsoleTextAttribute(hConsole, 2);
							getline(cin, newtelephone);
							Sleep(500);
							cout << "******";
							Sleep(100);
							cout << "**";
							Sleep(200);
							cout << "********************************";
							Sleep(200);
							cout << "**";                        //loading stars
							Sleep(150);
							cout << "*";
							Sleep(500);
							cout << "********";
							Sleep(500);
							cout << "*****************************" << endl;
							SetConsoleTextAttribute(hConsole, 9);
							PlaySound(TEXT("22.wav"), NULL, SND_FILENAME | SND_ASYNC);
							cout << "The Operation Done Well And Your Home Phone Number Became : " << newtelephone << endl;
						}
						else if (cho2 == 4)
						{
							while (infile.good())
							{
								getline(infile, line);
								getline(infile, line2);
								if (line == testID && line2 == testpassword)
								{
									getline(infile, password);
									getline(infile, name);
									getline(infile, address);
									getline(infile, telephone);
									break;
								}

							}
							SetConsoleTextAttribute(hConsole, 5);
							PlaySound(TEXT("23.wav"), NULL, SND_FILENAME | SND_ASYNC);
							cout << "Your Mobile Number IS : " << mobile << endl << endl;
							cout << "Please Write The New mobile Number >> : " << endl;
							cin.get();
							SetConsoleTextAttribute(hConsole, 2);
							getline(cin, newmobile);
							Sleep(500);
							cout << "******";
							Sleep(100);
							cout << "**";
							Sleep(200);
							cout << "********************************";
							Sleep(200);
							cout << "**";                        //loading stars
							Sleep(150);
							cout << "*";
							Sleep(500);
							cout << "********";
							Sleep(500);
							cout << "*****************************" << endl;
							SetConsoleTextAttribute(hConsole, 9);
							PlaySound(TEXT("24.wav"), NULL, SND_FILENAME | SND_ASYNC);
							cout << "The Operation Done Well And Your Mobile Number Became : " << newmobile << endl;
						}
						else if (cho2 == 5)
						{
							while (infile.good())
							{
								getline(infile, line);
								getline(infile, line2);
								if (line == testID && line2 == testpassword)
								{
									getline(infile, password);
									getline(infile, name);
									getline(infile, address);
									getline(infile, telephone);
									getline(infile, mobile);
									break;
								}

							}
							SetConsoleTextAttribute(hConsole, 5);
							PlaySound(TEXT("25.wav"), NULL, SND_FILENAME | SND_ASYNC);
							cout << "Your Email Address IS : " << email << endl << endl;
							cout << "Please Write The New Email Address >> : " << endl;
							cin.get();
							SetConsoleTextAttribute(hConsole, 2);
							getline(cin, newemail);
							Sleep(500);
							cout << "******";
							Sleep(100);
							cout << "**";
							Sleep(200);
							cout << "********************************";
							Sleep(200);
							cout << "**";                        //loading stars
							Sleep(150);
							cout << "*";
							Sleep(500);
							cout << "********";
							Sleep(500);
							cout << "*****************************" << endl;
							SetConsoleTextAttribute(hConsole, 9);
							PlaySound(TEXT("26.wav"), NULL, SND_FILENAME | SND_ASYNC);
							cout << "The Operation Done Well And Your Email Address Became : " << newemail << endl;
						}
						else
						{
							SetConsoleTextAttribute(hConsole, 4);
							cout << "Wrong Choice!!!!" << endl;
							cout << "\a\a\a\a\a\a" << endl;
						}
					}
					else
					{
						SetConsoleTextAttribute(hConsole, 4);
						cout << "Wrong Choice!!!!" << endl;
						cout << "\a\a\a\a\a\a" << endl;
					}
				}
			}

		}
		else if (y == 2)
		{
			system("cls");
			PlaySound(TEXT("8.wav"), NULL, SND_FILENAME | SND_ASYNC);
			SetConsoleTextAttribute(hConsole, 7);
			cout << "------------------------" << endl;
			SetConsoleTextAttribute(hConsole, 9);
			cout << "What's Your Account ID : " << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "------------------------" << endl;
			SetConsoleTextAttribute(hConsole, 2);
			getline(cin, testID);
			PlaySound(TEXT("9.wav"), NULL, SND_FILENAME | SND_ASYNC);
			SetConsoleTextAttribute(hConsole, 7);
			cout << "-------------------" << endl;
			SetConsoleTextAttribute(hConsole, 9);
			cout << "Write Your Password :" << endl;
			SetConsoleTextAttribute(hConsole, 7);
			cout << "-------------------" << endl;
			SetConsoleTextAttribute(hConsole, 2);
			testpassword = GetPassword();
			infile.open("User Data.txt");
			while (infile.good())
			{
				getline(infile, line);
				getline(infile, line2);
				if (line == testID && line2 == testpassword)
				{
					getline(infile, name);
					getline(infile, address);
					getline(infile, telephone);
					getline(infile, mobile);
					getline(infile, email);
					getline(infile, balance);
					break;
				}

			}
			if (line != testID && line2 != testpassword)
			{
				PlaySound(TEXT("10.wav"), NULL, SND_FILENAME | SND_ASYNC);
				SetConsoleTextAttribute(hConsole, 4);
				cout << "------------------------------------------------------" << endl;
				cout << "WRONG PassWord Or Wrong ID Please Try Again Later....." << endl;
				cout << "------------------------------------------------------" << endl;

			}
			infile.close();
			if (line == testID && line2 == testpassword)
			{
				while (true)
				{
					system("cls");
					SetConsoleTextAttribute(hConsole, 8);
					cout << endl;
					PlaySound(TEXT("12.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "press 1 to check your balance amount >> :" << endl << endl;
					cout << "press 2 to input some money to your balance >> :" << endl << endl;
					cout << "press 3 to withdraw some money from your balance >> : " << endl << endl;
					cout << "press 4 to edit your information >> :" << endl << endl;
					cin >> cho;
					if (cho == 1)
					{
						SetConsoleTextAttribute(hConsole, 2);
						Sleep(500);
						cout << "******";
						Sleep(100);
						cout << "**";
						Sleep(200);
						cout << "********************************";
						Sleep(200);
						cout << "**";                        //loading stars
						Sleep(150);
						cout << "*";
						Sleep(500);
						cout << "********";
						Sleep(500);
						cout << "*****************************" << endl;
						SetConsoleTextAttribute(hConsole, 9);
						PlaySound(TEXT("11.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "Your Balance Now Is : " << balance << endl;
					}
					else if (cho == 2)
					{
						PlaySound(TEXT("13.wav"), NULL, SND_FILENAME | SND_ASYNC);
						SetConsoleTextAttribute(hConsole, 5);
						cout << "Your Balance Now Is : " << balance << endl << endl;
						cout << "Please Enter The Amount Of Money You Want To Add To Your Balance : ";
						cin.get();
						SetConsoleTextAttribute(hConsole, 2);
						getline(cin, inbalance);
						long int inbalance2 = strtol(inbalance.c_str(), NULL, 0);
						long int balance2 = strtol(balance.c_str(), NULL, 0);
						finalbalance = to_string((long long)balance2 + inbalance2);

						SetConsoleTextAttribute(hConsole, 2);
						Sleep(500);
						cout << "******";
						Sleep(100);
						cout << "**";
						Sleep(200);
						cout << "********************************";
						Sleep(200);
						cout << "**";                        //loading stars
						Sleep(150);
						cout << "*";
						Sleep(500);
						cout << "********";
						Sleep(500);
						cout << "*****************************" << endl;
						SetConsoleTextAttribute(hConsole, 9);
						PlaySound(TEXT("14.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "Your Balance Became : " << finalbalance << endl;
					}
					else if (cho == 3)
					{
						SetConsoleTextAttribute(hConsole, 5);
						PlaySound(TEXT("15.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "Your Balance Now Is : " << balance << endl << endl;
						cout << "Please Enter The Amount Of Money You Want To Take From Your Balance : ";
						cin.get();
						SetConsoleTextAttribute(hConsole, 2);
						getline(cin, outbalance);
						long int outbalance2 = strtol(outbalance.c_str(), NULL, 0);
						long int balance2 = strtol(balance.c_str(), NULL, 0);
						balance = to_string((long long)balance2 - outbalance2);
						SetConsoleTextAttribute(hConsole, 2);
						Sleep(500);
						cout << "******";
						Sleep(100);
						cout << "**";
						Sleep(200);
						cout << "********************************";
						Sleep(200);
						cout << "**";                        //loading stars
						Sleep(150);
						cout << "*";
						Sleep(500);
						cout << "********";
						Sleep(500);
						cout << "*****************************" << endl;
						SetConsoleTextAttribute(hConsole, 9);
						PlaySound(TEXT("14.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "Your Balance Became : " << balance << endl;
					}
					else if (cho == 4)
					{
						system("cls");
						SetConsoleTextAttribute(hConsole, 6);
						PlaySound(TEXT("16.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "Press 1 To Change Your Name >> : " << endl << endl;
						cout << "Press 2 To Change Your Address >> : " << endl << endl;
						cout << "Press 3 To Change Your Home Phone Number >> : " << endl << endl;
						cout << "Press 4 To Change Your Mobile Number >> : " << endl << endl;
						cout << "Press 5 To Change Your Email Address >> : " << endl << endl;
						cin >> cho2;
						if (cho2 == 1)
						{
							while (infile.good())
							{
								getline(infile, line);
								getline(infile, line2);
								if (line == testID && line2 == testpassword)
								{
									getline(infile, password);
									break;
								}

							}
							PlaySound(TEXT("17.wav"), NULL, SND_FILENAME | SND_ASYNC);
							cout << "Your Name IS : " << name << endl << endl;
							cout << "Please Write The New Name >> : " << endl << endl;
							cin.get();
							SetConsoleTextAttribute(hConsole, 2);
							getline(cin, newname);
							Sleep(500);
							cout << "******";
							Sleep(100);
							cout << "**";
							Sleep(200);
							cout << "********************************";
							Sleep(200);
							cout << "**";                        //loading stars
							Sleep(150);
							cout << "*";
							Sleep(500);
							cout << "********";
							Sleep(500);
							cout << "*****************************" << endl;
							SetConsoleTextAttribute(hConsole, 9);
							PlaySound(TEXT("18.wav"), NULL, SND_FILENAME | SND_ASYNC);
							cout << "The Operation Done Well And Your Name Became : " << newname << endl;
						}
						else if (cho2 == 2)
						{
							while (infile.good())
							{
								getline(infile, line);
								getline(infile, line2);
								if (line == testID && line2 == testpassword)
								{
									getline(infile, password);
									getline(infile, name);
									break;
								}

							}
							SetConsoleTextAttribute(hConsole, 5);
							PlaySound(TEXT("19.wav"), NULL, SND_FILENAME | SND_ASYNC);
							cout << "Your Address IS : " << address << endl << endl;
							cout << "Please Write The New Address >> : " << endl;
							cin.get();
							SetConsoleTextAttribute(hConsole, 2);
							getline(cin, newaddress);
							Sleep(500);
							cout << "******";
							Sleep(100);
							cout << "**";
							Sleep(200);
							cout << "********************************";
							Sleep(200);
							cout << "**";                        //loading stars
							Sleep(150);
							cout << "*";
							Sleep(500);
							cout << "********";
							Sleep(500);
							cout << "*****************************" << endl;
							SetConsoleTextAttribute(hConsole, 9);
							PlaySound(TEXT("20.wav"), NULL, SND_FILENAME | SND_ASYNC);
							cout << "The Operation Done Well And Your Address Became : " << newaddress << endl;
						}
						else if (cho2 == 3)
						{
							while (infile.good())
							{
								getline(infile, line);
								getline(infile, line2);
								if (line == testID && line2 == testpassword)
								{
									getline(infile, password);
									getline(infile, name);
									getline(infile, address);
									break;
								}

							}
							SetConsoleTextAttribute(hConsole, 5);
							PlaySound(TEXT("21.wav"), NULL, SND_FILENAME | SND_ASYNC);
							cout << "Your Home Phone Number IS : " << telephone << endl << endl;
							cout << "Please Write The New Home Phone Number >> : " << endl;
							cin.get();
							SetConsoleTextAttribute(hConsole, 2);
							getline(cin, newtelephone);
							Sleep(500);
							cout << "******";
							Sleep(100);
							cout << "**";
							Sleep(200);
							cout << "********************************";
							Sleep(200);
							cout << "**";                        //loading stars
							Sleep(150);
							cout << "*";
							Sleep(500);
							cout << "********";
							Sleep(500);
							cout << "*****************************" << endl;
							SetConsoleTextAttribute(hConsole, 9);
							PlaySound(TEXT("22.wav"), NULL, SND_FILENAME | SND_ASYNC);
							cout << "The Operation Done Well And Your Home Phone Number Became : " << newtelephone << endl;
						}
						else if (cho2 == 4)
						{
							while (infile.good())
							{
								getline(infile, line);
								getline(infile, line2);
								if (line == testID && line2 == testpassword)
								{
									getline(infile, password);
									getline(infile, name);
									getline(infile, address);
									getline(infile, telephone);
									break;
								}

							}
							SetConsoleTextAttribute(hConsole, 5);
							PlaySound(TEXT("23.wav"), NULL, SND_FILENAME | SND_ASYNC);
							cout << "Your Mobile Number IS : " << mobile << endl << endl;
							cout << "Please Write The New mobile Number >> : " << endl;
							cin.get();
							SetConsoleTextAttribute(hConsole, 2);
							getline(cin, newmobile);
							Sleep(500);
							cout << "******";
							Sleep(100);
							cout << "**";
							Sleep(200);
							cout << "********************************";
							Sleep(200);
							cout << "**";                        //loading stars
							Sleep(150);
							cout << "*";
							Sleep(500);
							cout << "********";
							Sleep(500);
							cout << "*****************************" << endl;
							SetConsoleTextAttribute(hConsole, 9);
							PlaySound(TEXT("24.wav"), NULL, SND_FILENAME | SND_ASYNC);
							cout << "The Operation Done Well And Your Mobile Number Became : " << newmobile << endl;
						}
						else if (cho2 == 5)
						{
							while (infile.good())
							{
								getline(infile, line);
								getline(infile, line2);
								if (line == testID && line2 == testpassword)
								{
									getline(infile, password);
									getline(infile, name);
									getline(infile, address);
									getline(infile, telephone);
									getline(infile, mobile);
									break;
								}

							}
							SetConsoleTextAttribute(hConsole, 5);
							PlaySound(TEXT("25.wav"), NULL, SND_FILENAME | SND_ASYNC);
							cout << "Your Email Address IS : " << email << endl << endl;
							cout << "Please Write The New Email Address >> : " << endl;
							cin.get();
							SetConsoleTextAttribute(hConsole, 2);
							getline(cin, newemail);
							Sleep(500);
							cout << "******";
							Sleep(100);
							cout << "**";
							Sleep(200);
							cout << "********************************";
							Sleep(200);
							cout << "**";                        //loading stars
							Sleep(150);
							cout << "*";
							Sleep(500);
							cout << "********";
							Sleep(500);
							cout << "*****************************" << endl;
							SetConsoleTextAttribute(hConsole, 9);
							PlaySound(TEXT("26.wav"), NULL, SND_FILENAME | SND_ASYNC);
							cout << "The Operation Done Well And Your Email Address Became : " << newemail << endl;
						}
						else
						{
							SetConsoleTextAttribute(hConsole, 4);
							cout << "Wrong Choice!!!!" << endl;
							cout << "\a\a\a\a\a\a" << endl;
						}
					}
					else
					{
						SetConsoleTextAttribute(hConsole, 4);
						cout << "Wrong Choice!!!!" << endl;
						cout << "\a\a\a\a\a\a" << endl;
					}
					cout << "Do You Want To Continue ? (y/n) : ";
					char cho3;
					cin >> cho3;
					if (cho3 == 'y')
						continue;
					else if (cho3 == 'n')
						break;
					else
						cout << "Wrong Choice !!" << endl;
					cout << "\a\a\a\a\a" << endl;
					wait(2);
				}
			}
		}
	}
	else
	{
		SetConsoleTextAttribute(hConsole, 4);
		cout << "Wrong Choice!!!!" << endl;
		cout << "\a\a\a\a\a\a" << endl;
	}
	system("pause");
	return 0;
}
//belongs to time to cls (clean screan)
void wait(int wait_time)
{
	long* start_time = new long;
	*start_time = time(0);

	while ((*start_time + wait_time) > time(0)) {
	};

	delete start_time;
}
//ending