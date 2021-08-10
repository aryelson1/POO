#include <iostream>

using namespace std;
class hugeinteger
{
private:
	int tamanho;
	int hugeInt[40];
public:
	hugeinteger();
	hugeinteger(char[]);
	void input();
	void output();
	hugeinteger add(const hugeinteger&,const hugeinteger&);
  
	bool isEqualTo(const hugeinteger&,const hugeinteger&);
	bool isNotEqualTo(const hugeinteger&,const hugeinteger&);
	bool isGreaterThan(const hugeinteger&,const hugeinteger&);
	bool isLessThan(const hugeinteger&,const hugeinteger&);
	bool isGreaterThanOrEqualTo(const hugeinteger&,const hugeinteger&);
	bool isLessThanOrEqualTo(const hugeinteger&,const hugeinteger&);
	
};



