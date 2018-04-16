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
#include "Celebrity.h"
#include <string>

/* Implements the Celebrity.h file */
Celebrity::Celebrity(){}

/* Getters */
std::string Celebrity::getName() const {return name;}

int Celebrity::getScore() const {return score;}

std::string Celebrity::getAreaOfWork() const {return areaOfWork;}

bool Celebrity::getIfMet() const {return ifMet;}

/* Setters */
void Celebrity::setName(std::string n) {name = n;}

void Celebrity::setScore(int s) {score = s;}

void Celebrity::setAreaOfWork(std::string a) {areaOfWork = a;}

void Celebrity::setIfMet(bool m) {ifMet = m;}

