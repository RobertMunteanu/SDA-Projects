#include "personal.h"
using namespace std;
 ostream& operator << (ostream& out, const personal& x)
{
	out << "CNP: " << x.cnp << endl;
	out << " Nume: " << x.nume << endl;
	out << "Nume film: " << x.nume_film << endl;
	out << "Incasari:  " << x.incasare << endl;
	out << "Procent: " << x.procent << endl;
	return out;
}
 istream& operator >> (istream& in, personal& x)
{
	cout << " Introduceti CNP : " << endl;
	in >> x.cnp;

	cout << "Introduceti Numele : " << endl;
	getline(in, x.nume);

	cout << " Introduceti numele filmului: " << endl;
	getline(in, x.nume_film);

	cout << "Introduceti incasarea " << endl;
	in >> x.incasare;

	cout << "Introduceti procentul castigat: " << endl;
	in >> x.procent;
	return in;
}

personal& personal ::operator = (const personal& x)
{
	cnp = x.cnp;
	procent = x.procent;
	nume.clear();
	nume.assign(x.nume);
	nume_film.clear();
	nume_film.assign(x.nume_film);
	incasare = x.incasare;

	return *this;
}