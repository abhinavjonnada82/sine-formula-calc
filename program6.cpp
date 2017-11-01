// File Name: program6.cpp
// Author: Abhinav Jonnada
// Student ID: B956d578
// Assignment Number: 6
// Description: Write a C++ program which uses an array of numbers to 
// store pre-calculated values of the sine function of certain values,
// and can then display values of various different formulas further  
// claculated from the stored values.
// Last Changed: July 14, 2017



#include <iostream>
#include <cmath>
#include <iomanip>
#include <cctype>

using namespace std;

void fill_array(double array[]); //the function is used to fill up the 
//the values of X and Y

const int SIZE = 20; // size of the array

int main ()

{
	
	
	double a, b;
	int choices;
	
	double sine_values[SIZE]; //this has pre-calculated values of sine of 20
	
	fill_array(sine_values); // declaring the function with sine values
	
	
	
 do{// making sure the whole program is executed atleast once
	 // displaying the list of options available to the user.
	cout<< "Formulas for which you can display: "<< endl;
	cout << " 1. y = a sin(x) " << endl;
	cout << " 2. y = sin(x) + b " << endl;
	cout << " 3. y = a sin(x) + b " << endl;
	cout << " 4. Quit " << endl;
	
	cout<< "Enter the number of your choices: ";
	cin >> choices;
	cout<<endl; //taking the user choice and proceeding towards 
	            //the switch case
	
	switch (choices)
	{ 
		case 1 :
		
		cout<< "Enter the value of a: ";
		cin>> a; //taking thevalue of a from the user
		
		cout << "X" << setw(12) << "Y" << endl;
		cout<<"---"<<setw(10)<<"-----"<< endl;
		
			for (int i=0; i<SIZE ; i++)
			// to repeat x from 0 to 19
			{
				cout.setf(ios::fixed);//to display the values with three decimal places
	            cout.setf (ios::showpoint);
	            cout.precision (3);
				cout << endl << i
				<<setw(12) << a*sine_values[i] << endl ; 
				//displaying the result for the equation y=a sin(x)
				
								
			}
		break;
		
		case 2 :
		
		cout<< "Enter the value of b: ";
		cin>> b;
		
		cout << "X" << setw(12) << "Y" << endl;
		cout<<"---"<<setw(10)<<"-----"<< endl;
		
		      for (int i=0; i<SIZE ; i++)
			{
				
				cout.setf(ios::fixed);   //to display the values with three decimal places
	            cout.setf (ios::showpoint);
	            cout.precision (3);
				cout << endl << i
				<<setw(12) << sine_values[i] + b << endl ;
				//displaying the result for the equation y= sin(x)+b			
			}
			break;
			
		case 3 :
		
		cout<< "Enter the value of a: ";
		cin>> a;
		cout<< "Enter the value of b: ";
		cin>> b;
		
		cout << "X" << setw(12) << "Y" << endl;
		cout<<"---"<<setw(10)<<"-----"<< endl;
		
		for (int i=0; i<SIZE ; i++)
			{
				cout.setf(ios::fixed);   //to display the values with three decimal places
	            cout.setf (ios::showpoint);
	            cout.precision (3);
				cout << endl << i
				<<setw(12) << ((a* sine_values[i]) + b) << endl ;
			//displaying the result for the equation y= asin(x)+b			
			}
			break;
			
		case 4 :
		
		cout<<"Quit";
		break;
		
		default :
		cout << "Invalid Entry"<<endl; 
	 }
   }while (choices != 4);
   // if any other option is pressed other than 4 it redisplays the menu
	// else if 4 is pressed then it quits the program
   return 0;
   
 }

void fill_array(double array[]) 
//this function is used to fill up the array with values of sin and its 
//result
{
	for(int i=0; i<SIZE; i++)//for loop is used to list out the values
	// for 20 times
	{
		//the value of sin index is assigned to the array index i.e.,
		// 1=0.841(sin(i)) etc.
		array[i] = sin(i); // the value of the array elements must be 
		//set to the sine of their index
		
	}
}
	
