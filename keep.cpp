#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int i = 0;

int main(int argc, char** argv)
{
	if(i >= 3)
	{
		cout << "Maximum password attempts surpassed." << endl;
		exit(0);
	}else if(i <= 3)
	{
		i = i + 1;
	}
	char* url = argv[1];
	char* user = argv[2];
	char* pass = argv[3];
	char* path = argv[4];

	string command = "java -jar KeepPass.jar ";
	command = command + url + " ";
	command = command + user + " ";
	command = command + pass + " ";
	command = command + path + " ";
	

	cout << "Confirm password: ";
	string confirm = "";
	cin >> confirm;

	if((confirm == pass) == false)
	{
		cout << "Password & confirmation does not match" << endl;
		main(argc, argv);
	}

	system((command).c_str());
}
