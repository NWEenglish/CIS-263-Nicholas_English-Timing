/**********************************************************************
 * This set of codes is used to test the different sorting algorithms.
 * Specifically, this will test the bubble sort, selection sort,
 * insertion sort, merge sort, and quick sort. The code will be ran 
 * I, as the user, will log how long it took to run and upload that in
 * an excel document with a line graph of how the time changes as the
 * number of elements increases.
 *
 * @author Nicholas English
 * @version 1.0
 * @date 4/4/2018
 *********************************************************************/

/* Libraries */
#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <algorithm>
#include <sstream>
#include "Celebrity.h"
#include "sorts.h"

/* Main */
int main(int argc, char *argv[]) {

    /* Variable(s) */
    // Holds which sort the user is running.
    unsigned int sort;

    // Holds the number of items to be generated and then sorted.
    unsigned int numOfCelebs;

    // Holds the celebrity's name.
    std::string name;

    // Holds how much someone wants to meet the celebrity.
    unsigned int score;

    // Holds the field that the celebrity works in.
    std::string areaOfWork;

    // Holds a boolean value of if they have been met before.
    bool ifMet;

    // Holds a Celebrity object.
    // A simple letter is easier than writing "Celebrity" a bunch.
    Celebrity c;

    // Holds a vector of celebrities.
    std::vector<Celebrity> vect;

    /* Takes in the users choice of sort. */
    std::istringstream iss(argv[1]);
    iss >> sort;

    /* Takes in the number of items by command line. */
    // (1) https://www.geeksforgeeks.org/command-line-arguments-in-c-cpp/
    // (2) https://stackoverflow.com/questions/2797813/how-to-convert-a-command-line-argument-to-int
    std::istringstream iss2 (argv[2]);
    iss2 >> numOfCelebs;

    /* Random Celebrity generator. */
    for(int i = 0; i < numOfCelebs; i++) {

	/* name */
	// Generates random character values for the capitol letter of name.
	std::random_device rd;
	std::mt19937 gen( rd() );
	std::uniform_int_distribution<> dis( 65, 90 );

	// Generates random characters for lowercase letters.
	std::uniform_int_distribution<> dis1(97, 122);

	// Loops to create an 8 character name
	for(int i = 1; i < 8; i++) {
	    name[i] = dis1( gen );
	}

	/* score */
	// Generates a random score
	std::uniform_int_distribution<> dis2(0, 10);
	score = dis2( gen );

	/* areaOfWork */
	areaOfWork = "Random Inc";

	/* ifMet */
	// Generates if true or false
	std::uniform_int_distribution<> dis3(0, 1);
	ifMet = dis3( gen );

	/* set these variables to an object. */
	c.setName(name);
	c.setScore(score);
	c.setAreaOfWork(areaOfWork);
	c.setIfMet(ifMet);

	/* Adds object to a vector. */
	vect.push_back(c);
    }

    /* Sort choice is determined from the command line prompt. */

	/* Sort 1 - Bubble Sort */
	if(sort == 1)
	    bubble_sort(vect);

	/* Sort 2 - Selection Sort */
	if(sort == 2)
	    selection_sort(vect);

	/* Sort 3 - Insertion Sort */
	if(sort == 3)
	    insertion_sort(vect);

	/* Sort 4 - Merge Sort */
	if(sort == 4)
	    mergeSort(vect);

	/* Sort 5 - Quick Sort */
	if(sort == 5)
	    quicksort(vect, 0, numOfCelebs);

    /* End of program reached */
    std::cout <<  "\n\n\n" << std::endl;
    return 0;
}

/**** Overloaded functions ****/
// (1) https://stackoverflow.com/questions/21510349/overload-less-than-operator-in-c-got-an-error

/* Overloeaded operator< function */
bool operator< (const Celebrity& c1, const Celebrity& c2) {
    return c1.getScore() < c2.getScore();
}

/* Overloeaded operator<= function */
bool operator<= (const Celebrity& c1, const Celebrity& c2) {
    if(c1.getScore() == c2.getScore() ) {
	if(c1.getIfMet() == c2.getIfMet() )
		return c1.getName()[0] <= c2.getName()[0];
	else
	    return c1.getIfMet() < c2.getIfMet();
    }

    else
	return c1.getScore() < c2.getScore();
}


