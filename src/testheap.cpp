/*
 * testheap.cpp
 *
 *  Created on: May 5, 2017
 *      Author: Julia Willson
 */
#include <iostream>
#include <cstring>
using namespace std;

namespace testheap
{
	void assert_it(bool test) {
		try {
			if ( !test ) {
				throw "Test failed!";
			}
		}
		catch (const char* msg) {
			cout << msg << endl;
		}
	}

	void assert_equal(int a, int b) {
		assert_it(a == b);
	}

	void assert_equal(char *a, char *b) {
		assert_it(!(bool)strcmp(a,b));
	}
}

int main() {
	using namespace testheap;

	char a[] = "String a";
	char b[] = "String b";
	assert_equal(a, b);
	return 0;
}
