#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
	char* path = argv[1];
	char* type = argv[2];

	string command = "java -jar PassGetter.jar ";
	command = command + path + " ";
	command = command + type + " ";
	
	system((command).c_str());
}