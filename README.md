# Clothing-Size-Calculator

Contents
---------------------
* File Contents
* Introduction
* Algorithm
* Requirements

## File Contents
	
	Clothing_Size_Calculator.cpp (program file containing code)

## Introduction
Book practice project from Problem Solving With C++ Chapter 4. Project 2.
Program computes clothing sizes according to bizarre formulas based on an input of height, weight, and age. Demonstrates ability to prompt user, take input, execute math formulas, and output results in c++.

Written using Microsoft Visual Studio. 

## Algorithm

    1. do everything in do-while loop
		2. greet user and prompt for input of height in inches, weight in pounds, and age
		3. calculate hat size
			3a.weight divided by height multiplied by 2.9
		4. calculate jacket size (chest in inches)
			4a. height multiplied by weight, divided by 288
			4b. add 1/8 of an inch for every full 10 years after age 30
				4ba. determine if age is greater than 30
				4bb. if so, subtract 30 from age
				4bc. divide remaining age by 10, then multiply by 1/8
		5. calculate waist in inches
			5a. weight divided by 5.7
			5b. add 1/10 of an inch for every 2 years over age 28
				5ba. determine if age is greater than 28
				5bb. divide age - 28 by 2, then multiply by 1/10
		6. output values to user
		7. prompt to continue

## Requirements
No requirements or modules needed for running this program. 
