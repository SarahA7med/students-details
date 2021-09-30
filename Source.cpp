#include<iostream>
#include <string>
using namespace std;
struct student
{
	int r;
	string n;
	int a;
	float m[5];

};
void input(student s[], int n)
{
	for (int j = 0; j < 2; j++)
	{
		cin >> s[j].r >> s[j].n >> s[j].a;
		for (int i = 0; i < 5; i++)
		{
			cin >> s[j].m[i];
		}
		cout << endl;
	}

}
void output(student s[], int n)
{
	for (int j = 0; j < 15; j++)
	{
		cout << s[j].r << " " << s[j].n << " " << s[j].a << " ";
		for (int i = 0; i < 5; i++)
		{
			cout << s[j].m[i] << " ";
		}
		cout << endl;
	}
}
void print14(student s[], int n)
{
	for (int j = 0; j < 15; j++)
	{
		if (s[j].a == 14)
		{
			cout << s[j].n;
		}
		cout << endl;
	}

}
void evenroll(student s[], int n)
{
	for (int j = 0; j < 15; j++)
	{
		if (s[j].r % 2 == 0)
		{
			cout << s[j].n << " ";

		}
		cout << endl;
	}
}
void details(student s[], int n, double x)
{
	for (int j = 0; j < 15; j++)
	{
		if (s[j].r == x)
		{
			cout << s[j].n << " " << s[j].a << " ";
			for (int i = 0; i < 5; i++)
			{
				cout << s[j].m[i] << " ";
			}
		}
		cout << endl;
	}

}
void top(student s[], int n)
{
	for (int i = 0; i < 5; i++)
	{
		int mx = 0;
		for (int j = 0; j < 15; j++)
		{
			if (s[j].m[i] > s[mx].m[mx])
			{
				mx = i;
			}
		}
		cout << s[mx].n;
	}
	     
}
void main()
{
	student s[15];
	input(s, 15);
	output(s, 15);
	print14(s, 15);
	evenroll(s, 15);
	details(s, 15, 101);
	top(s, 15);
}