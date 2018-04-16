/**********************************************************************
 * This is the .h file used by the Celebrity.cpp file, which will
 * implement the functions from this file.
 *
 * @author Nicholas English
 * @version 1.0
 * @date 4/4/2018
 *********************************************************************/

/* Header gaurds */
#ifndef __H_celeb__
#define __H_celeb__

/* Libraries */
#include <string>
#include <iostream>
#include <vector>

class Celebrity {

    public:

	/* Defualt Contructor */
	Celebrity();

	/* Mutators */
	// Set name
	void setName(std::string n);

	// Set score
	void setScore(int s);

	// Set areaOfWork
	void setAreaOfWork(std::string a);

	// Set ifMet
	void setIfMet(bool m);

	/* Accessors */
	// Get name
	std::string getName() const;

	// Get score
	int getScore() const;

	// Get areaOfWork
	std::string getAreaOfWork() const;

	// Get ifMet
	bool getIfMet() const;

    /*****************************************************************/

    private:

	/* Variabes used by the celebrity object */
	std::string name;
	int score;
	std::string areaOfWork;
	bool ifMet;

};

#endif // __H_celeb__
