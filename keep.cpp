#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
	char* url = argv[1];
	char* user = argv[2];
	char* pass = argv[3];
	char* path = argv[4];

	string command = "java -jar KeepPass.jar ";
	command = command + url + " ";
	command = command + user + " ";
	command = command + pass + " ";
	command = command + path + " ";
	
	string confirmation = cin << "Confirm password: " << endl;
	if((confirmation == pass) != true)
	{
		cout << "Password and confirmation do not match!" << endl;
		main(argc, argv);
	}
	
	system((command).c_str());
}
