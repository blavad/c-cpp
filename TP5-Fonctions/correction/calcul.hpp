#ifndef __CALCUL_HPP__
#define __CALCUL_HPP__

#include <iostream>
#include <vector>

using namespace std;

/**
 * Calculates the sum of two integers.
 *
 * @param a The first integer.
 * @param b The second integer.
 * @return The sum of the two integers.
 */
int somme(int a, int b);

/**
 * Calculates the square of a given number.
 *
 * @param a The number to calculate the square of.
 * @return The square of the given number.
 */
int carre(int a);

/**
 * Calculates the average of three numbers.
 *
 * @param a The first number.
 * @param b The second number.
 * @param c The third number.
 * @return The average of the three numbers.
 */
float moyenne(float a, float b, float c);

/**
 * Checks if a given number is even.
 *
 * @param n The number to check.
 * @return True if the number is even, false otherwise.
 */
bool estPair(int n);

/**
 * Calculates the sum of all even numbers in the given vector.
 *
 * @param vecteur The vector of integers.
 * @return The sum of all even numbers in the vector.
 */
int sommeNombresPairs(const std::vector<int> &vecteur);

#endif // __CALCUL_HPP__
