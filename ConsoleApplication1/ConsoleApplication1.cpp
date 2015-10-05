// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int gcd(int a, int b);
int _tmain(int argc, _TCHAR* argv[])
{
	int a,b;
	char exit='N';
	int c;
	while (true){
		a = 0;
		b = 0;
		printf("===== Greatest Common Divisor ===== \n");
		printf("a and b must be an integer || a dan b harus bilangan integer \n");
		printf("\n Input a : ");
		cin>>a;
		if (!cin) break;
		printf("\n Input b : ");
		cin>>b;
		if (!cin) break;
		printf("\n let c is the gcd of a and b, so the result of c is : ");
		c = gcd(a,b);
		cout << c <<endl;
		printf("\n Do you want to exit? [Y/N] ");
		cin>>exit;
		if (exit=='Y' || exit=='y'){break;}
		printf("\n");
	}
	return 0;
}

int gcd(int a,int b){ 
	int c = 1;
	int big,small;
	
	if (a>b){
		big = a;
		small = b;
	}else{
		big = b;
		small = a;
	}

	if (a==0 && b==0){
		return 0;
	}

	for (int i = 1 ; i <= small ; i++){
		if (a%i==0 && b%i==0){
			c = i;
		}
	}
	return c;
}