#include <iostream>
#include <fstream>

using namespace std;

class Form
{
	string userName, passWord, emailAddress;

	fstream file;

	public:

		void login();
		void SignUp();
		void ForgotPassword();

};

int main()
{
	char choice;
	Form fobj;

	
	cout<<"\n1 : Sign-up";
	cout<<"\n2 : Login";
	cout<<"\n3 : Forgot Password";
	cout<<"\n4 : Exit";

	cin>>choice;

	switch (choice)
	{
	case '1': fobj.SignUp();
		
		break;

	case '2': fobj.login();
		
		break;

	case '3': fobj.ForgotPassword();
		
		break;

	default:
		break;
	}
	
	return 0;
}

void Form::SignUp()
{
	string demoPass;
	getchar();
	cout<<"\nEnter Your user-name : \n";

	getline(cin,userName);

	cout<<"\nEnter Your email address : \n";

	getline(cin,emailAddress);

	cout<<"\nEnter Your Password : \n";

	getline(cin,passWord);

	file.open("loginData.txt",ios::out | ios::app);

	file<<userName<<"*"<<emailAddress<<"*"<<passWord<<endl;

	cout<<"\nYou are signed up successfully...!"<<endl;

	file.close();

}

void Form :: login()
{
	string demoUserName, demoEmail, demoPass;
	getchar();
	cout<<"\nEnter Your user-name : \n";
	getline(cin,demoUserName);

	// cout<<"\nEnter Your email : \n";
	// getline(cin,demoEmail);

	file.open("loginData.txt",ios::in);

	getline(file,userName,'*');
	getline(file,emailAddress,'*');	
	getline(file,passWord,'\n');

	pass:
	cout<<"\nEnter Password : \n";
	getline(cin,demoPass);

	while(!file.eof())
	{
		if(userName == demoUserName)
		{
			if(passWord != demoPass)
			{
				cout<<"\n Password is incorrect, Re-enter the password\n";

				goto pass;

			}
				cout<<"\nLogin successfull...!\n";
				cout<<"\nUsername is : "<<userName<<endl;
				cout<<"\nEmail is    : "<<emailAddress<<endl;
		}
		getline(file,userName,'*');
		getline(file,emailAddress,'*');	
		getline(file,passWord,'\n');
	}

	file.close();
}

void Form:: ForgotPassword()
{
	string demoUsername,demoPass, demoEmail,demoPass2;
	getchar();
	cout<<"\nEnter your Username : "<<endl;
	getline(cin,demoUsername);

	cout<<"\nEnter your Email : "<<endl;
	getline(cin,demoEmail);

	file.open("loginData.txt");


	while(!file.eof())
	{

		getline(file,userName,'*');
		getline(file,emailAddress,'*');	
		// getline(file,passWord,'\n');
		if(userName == demoUsername && demoEmail == emailAddress)
		{
			// cout<<"\nYour Password is : "<<passWord<<endl;

			jump:

			cout<<"\nEnter new Password : "<<endl;
			getline(cin,demoPass);

			cout<<"\nRe-enter the pass : "<<endl;
			getline(cin,demoPass2);

			if(demoPass != demoPass2)
			{
				goto jump;
			}

			else{
				file<<demoPass<<endl;

				cout<<"\nYour PASSWORD is changed Succesfully....!\n";
			}
		}

		getline(file,passWord,'\n');
	}

	file.close();
}

