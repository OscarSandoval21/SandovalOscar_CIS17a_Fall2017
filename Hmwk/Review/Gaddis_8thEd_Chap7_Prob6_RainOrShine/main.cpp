/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on September 17th, 2017, 7:20 PM
 * Purpose: 
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>  //Formatting output
#include <string>   //For strings

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int MONTH = 3;
    const int DAYS = 30;
    char data[MONTH] [DAYS];
    float total = 0;
    float average;
    int number;
    int number2;
    int total1 = 0;
    int total2 = 0;
    int total3 = 0;
    int highest;
    int lowest;
    
    //Input data
    cout << "This program will create a report that displays how many days "
            "were rainy, how many were cloudy, how many were sunny." << endl;
    
    for(int i = 0; i < MONTH; i++)
    {
        for(int j = 0; j < DAYS; j++)
        {
            do
            {
                cout << "Input the number of pounds of food that monkey " 
                     << i + 1 << " ate during day " << j + 1 << ": ";
                cin >> data[i] [j];
                if (data[i] [j] < 0)
                    cout << "Invalid input. Enter a positive number." << endl;
            } while(data[i] [j] < 0) ;
        }
        cout << endl;
    }
    
    // Calculate total amount of food eaten by whole family of monkeys
    for(int i = 0; i < DAYS; i++)
    {
        total = 0;
        for(int j = 0; j < MONTH; j++)
            total += data[j] [i];
        
        // Calculate average amount of food eaten per day by the whole family of monkeys
        average = total / MONTH;
        cout << "The average amount of food eaten in day " << i + 1 << " by the "
                "whole family of monkeys is " << average << " pounds." << endl;
    }
    
    
    //Find the highest and lowest amounts
    for(int i = 0; i < MONTH; i++)
    {
        for(int j = 0; j < DAYS; j++)
        {
            if(i == 0)
                total1 += data[i] [j];
            else if(i == 1)
                total2 += data[i] [j];
            else
                total3 += data[i] [j];
        }
    }
    if(total1 > total2 && total1 > total3)
    {
        highest = total1;
        number = 1;
    }
    else if(total2 > total1 && total2 > total3)
    {
        highest = total2;
        number = 2;
    }
    else
    {
        highest = total3;
        number = 3;
    }
    
    cout << "\nMonkey " << number << " ate the highest amount of "
            "food during the week with an amount of " << highest << endl;
    total1 = 0;
    total2 = 0;
    total3 = 0;
    // Find the lowest value in the array
    for(int i = 0; i < MONTH; i++)
    {
        for(int j = 0; j < DAYS; j++)
        {
            if(i == 0)
                total1 += data[i] [j];
            else if(i == 1)
                total2 += data[i] [j];
            else
                total3 += data[i] [j];
        }
    }
    if(total1 < total2 && total1 < total3)
    {
        lowest = total1;
        number2 = 1;
    }
    else if(total2 < total1 && total2 < total3)
    {
        lowest = total2;
        number2 = 2;
    }
    else
    {
        lowest = total3;
        number2 = 3;
    }
    
    cout << "Monkey " << number2 << " ate the lowest amount of "
            "food during the week with an amount of " << lowest << endl;
    
    
    //Exit stage right!
    return 0;
}