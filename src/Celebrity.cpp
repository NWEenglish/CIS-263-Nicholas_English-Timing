/**********************************************************************
 * This file holds the celebrity class and will be instantiated with
 * ten starting celebrity objects. After the initial ten, if more are
 * needed then they will be randomly generated.
 *
 * @author Nicholas English
 * @version 1.0
 * @date 4/4/2018
 *********************************************************************/

/* Libraries */
#include <string>
#include "Celebrity.h"

/* Implements the Celebrity.h file */
Celebrity::Celebrity(){}

/* Getters */
std::string getName() const {return name:}

int getScore() const {return score;}

std::string getAreaOfWork() const {return area;}

bool getIfMet() const {return ifMet;}

/* Setters */
void setName(std::string n) {name = n;}

void setScore(int s) {score = s;}

void setAreaOfWork(std::string a) {areaOfWork = a;}

void setIfMet(bool m) {ifMet = m;}

