// //#include <bits/stdc++.h>
// ou work for an animal shelter and you are responsible for feeding the animals. You already prepared D
// D
//  portions of dog food and C
// C
//  portions of cat food.
// There are a total of N
// N
//  animals waiting in a line, some of which are dogs and others are cats. It might be possible that all the animals in the line are dogs or all the animals are cats. A string S
// S
//  of N
// N
//  characters C and D represents the order of cats and dogs in the line. The i
// i
// -th character is equal to C if the i
// i
// -th animal in the line is a cat. Similarly, the i
// i
// -th character is equal to D if the i
// i
// -th animal in the line is a dog.
// The animals are fed in the order they stay in the line. Each dog eats exactly 1
// 1
//  portion of dog food and similarly each cat eats exactly 1
// 1
//  portion of cat food. Moreover, you have extra portions of cat food. Every time a dog eats food, you bring M
// M
//  extra portions of cat food for cats.
// Animals have to be fed in the order they wait in line and an animal can only eat if the animal before it has already eaten. That means that if you run out of dog (or cat) food portions and a dog (or a cat) is about to get fed, the line will not move, as all the animals will wait patiently.
// You need to determine if in this scenario all the dogs in the line will be fed. Note that this means that some cats might remain in the line, but worry not, you will eventually feed them later!
// Input
// The first line of the input gives the number of test cases, T
// T
// . T
// T
//  test cases follow.
// The first line of each test case contains four integers N
// N
// , D
// D
// , C
// C
// , and M
// M
// : the number of animals, the initial number of dog food portions, the initial number of cat food portions, and the additional portions of cat food that we add after a dog eats a portion of dog food, respectively.
// The next line contains a string S
// S
//  of length N
// N
//  representing the arrangement of animals.
// Output
// For each test case, output one line containing Case #x
// x
// : y
// y
// , where x
// x
//  is the test case number (starting from 1
// 1
// ) and y
// y
//  is YES if all the dogs will be fed and NO otherwise.


#include <iostream>
#include <string>
#include <stack>

using namespace std;

 // number of animals, dog portions, cat portions and amount of Portions.
int solve (int numAnimals, int dogPortions, int catPortions, int numPortions, std::string sSequence) {
	
	stack<char> stk;
	std::string str = sSequence;
	
	for(int i = 0; i < str.length(); i++)
		stk.push(str.at(i));
	std::reverse = "";
	while(!stk.empty())
	{
		reverse = "";
		reverse.push_back(stk.top());
		std::cout << reverse;
		stk.pop();
	}
	
}

int main () 
{
	
	solve(6, 10, 4, 0, "CCDCDD");
}
