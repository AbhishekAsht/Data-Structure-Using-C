

#include <iostream>
#include <string>
#include <vector>

using namespace std;


int lsp(string& s)
{
	// array not allowed define variable value use only const value
	//int LSP[s.size() + 1];
	//int str[s.size() + 1];

	vector<int> LSP(s.size() + 1);
	vector<int> str(s.size() + 1);

	for (int i = 0; i < s.size(); i++)
	{
		str[i + 1] = s[i];
		LSP[i] = 0;
	}

	//last index asigned zero
	LSP[s.size()] = 0;

	int first = 0, second = 2;

	while (second <= s.size())
	{
		if (str[first + 1] == str[second]) 
		{
			LSP[second] = first + 1;
			first++;
			second++;
		}
		else
		{
			if (first == 0)
			{
				second++;
				
			}
			else
			{
				first = LSP[first];
			}
		}
	}

	return LSP[s.size()];
}

int main()
{
	string str1;

	cout << "Enter a String" << endl;
	cin >> str1;

	int LSP;

	LSP = lsp(str1);

	cout << "Largest Preffix Suffix is: "<< LSP << endl;
}
