#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * struct cmplx - struct for complex numbers
 * @re: real part.
 * @im: lateral part.
 */
typedef struct cmplx
{
	double re;
	double im;
} complex;

double modulus(complex c);
void addition(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);

#endif /*HOLBERTON_H*/
