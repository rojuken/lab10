#pragma once

#include "List.h"

class TMonomData
{
public:
	double* data;
	double K;
	int dim; // var number

	TMonomData(int t);
	TMonomData(double* _data = 0, int _dim = 0, double _K = 0);
	TMonomData(TMonomData& _v);
	~TMonomData();

};

class TMonom : public TListElem<TMonomData>
{ // K * x_0 ^ data[0] * x_1 ^ data[1] ... x_(dim-1) ^ data[dim-1]
protected:

public:

	TMonom(TMonomData _data);
	TMonom(double* _data = 0, int _dim = 0, double _K=0);
	TMonom(TMonom& _v);
	~TMonom();

	bool operator ==(const TMonom& _v);
	bool operator !=(const TMonom& _v);
	
	TMonomData& operator * (int);
	TMonomData& operator * ();

	double GetK();
	void SetK(double _k);

	int GetDim();
	void SetDim(int _dim);

	TMonom& operator=(const TMonom& _v);
	double& operator [] (int i);
	
	TMonom operator *(const TMonom& _v);
	TMonom operator /(const TMonom& _v);

	TMonom* operator -(const TMonom& _v);
	TMonom* operator +(const TMonom& _v);

	bool operator >(const TMonom& _v);
	bool operator <(const TMonom& _v);

	friend ostream& operator<<(ostream& ostr, const TMonom& A);
	friend istream& operator>>(istream& istr, TMonom A);

	virtual TMonom* Clone();
	
};