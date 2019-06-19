/*
 * Main.cpp
 *
 *  Created on: 18 Jun 2019
 *      Author: Dave
 */


#include<iostream>

using namespace std;

int main()
{
	string texts[] = {"one", "two", "three"};

	cout << "Each string holds " << sizeof(string) << " bytes."  << endl;

	cout << "Total bytes in the array = " << sizeof(texts)<< endl;

	cout << "Number of elements in the array = " << sizeof(texts)/sizeof(string) << endl;

	string *pTexts = texts;		/*
								 * This pointer is pointing to the first element of the text
								 * array, it only knows how much data that particular element
								 * holds and does not know or have access to how many elements
								 * the array has, unlike the array declaration itself, which
								 * does have access to how many elements the total array holds
								 * this is how we are able to access information by using the
								 * sizeof() function.
								 */

	int arraySize = sizeof(texts)/sizeof(string);

	for(int i = 0; i < arraySize; i ++)
	{
		cout << pTexts[i] << ", " << flush;
	}

	cout << endl << "#######################" << endl;

	for(int i = 0; i < arraySize; i ++)
	{
		cout << *pTexts << ", " << flush;

		pTexts ++;
	}

	/*
	 * This initially only prints out the first elements three
	 * times because thats all the pointer knows
	 * when using it directly.
	 *
	 * However on line 46 we tell 'pTexts' to add one to whatever element it is at
	 * and then print that.
	 */


	cout << endl << "#######################" << endl;

//	for(int i = 0; i < arraySize; i++, pTexts++)
//	{
//		cout << *pTexts << ", " << flush;
//	}

	/*
	 * This is similar as above only the incrementor has been moved into the for loop
	 * declaration.
	 */

	string *pElement = &texts[0];	/* As on line 23 this is addressing the first element in the array
									 * Although this form is slightly easier to understand.
									 */
	string *pEnd = &texts[2];	// This returns the address of the last element in the array

	while(true)
	{
		cout << *pElement << ", " << flush;

		if(pElement == pEnd)
		{
			break;
		}

		pElement ++;
	}



	return 0;
}

