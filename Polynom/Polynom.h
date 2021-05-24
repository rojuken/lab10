#ifndef _POLYNOM_
#define _POLYNOM_

#include "Monom.h"
#include "List.h"

#include <iostream>

using namespace std;

class TPolynomial : public TList<TMonomData>
{
public:
	TPolynomial();
	TPolynomial( TPolynomial& _v);
	~TPolynomial();

	TPolynomial& operator +=(TMonom & _v);

	TPolynomial operator *(TPolynomial& _v);
	TPolynomial operator +(TPolynomial & _v);
	TPolynomial operator -(TPolynomial & _v);

	void LoadToFile();

};

#endif // !_POLYNOM_
