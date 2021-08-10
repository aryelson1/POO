#include <iostream>
#include <cstring>
#include "hege_integer.h"


hugeinteger::hugeinteger()
{
	tamanho=0;
	for (int i=0;i<40;i++)
		hugeInt[i]=0;
}
hugeinteger::hugeinteger(char valor[])
{
	int i=0,j=9;
	tamanho= strlen(valor);
	for (i=39,j=(tamanho-1);j>=0;i--,j--)
		hugeInt[i]=valor[j]-48;
	for (j=i;j>=0;j--)
		hugeInt[j]=0;
}
void hugeinteger::input()
{
	tamanho=0;
	int i=0,j=0,temp;;
	char input;
	for (i=39;i>=0;i--)
	{
    cout << "Digite um numero: ";
		cin >> input ;
		if(input=='-')
			break;
		tamanho++;
		hugeInt[i]=input-48;
	}
	if(input=='-')
		for (j=i;j>=0;j--)
			hugeInt[j]=0;
	for (i=39-(tamanho-1),j=39;i<j;i++,j--)
	{
		temp=hugeInt[i];
		hugeInt[i]=hugeInt[j];
		hugeInt[j]=temp;
	}
}
void hugeinteger::output()
{
	bool check=true;
	for (int i=0;i<40;i++)
	{
		if(check==true && hugeInt[i]==0)
			continue;
		else
		{
			check=false;
			cout<<hugeInt[i];
		}
	}
	if(check==true)
		cout<<"0";
	cout<<endl;
}
hugeinteger hugeinteger::add(const hugeinteger &h1,const hugeinteger &h2)
{
	hugeinteger h;
	int mod,div=0;
	for (int i=39;((i>=40-h1.tamanho)||(i>=40-h2.tamanho));i--)
	{
		h.hugeInt[i]=h1.hugeInt[i]+h2.hugeInt[i]+div;
		h.tamanho++;
		if(h.hugeInt[i]>9)
		{
			mod=h.hugeInt[i]%10;
			div=h.hugeInt[i]/10;
			h.hugeInt[i]=mod;
		}
		else
			div=0;
	}
	cout<<endl<<"Adicionado:";
	return h;
}

bool hugeinteger::isEqualTo(const hugeinteger &h1,const hugeinteger &h2)
{
	//cout<<endl<<"É igual a:";
	int i=0;
	for (i=0;i<40;i++)
		if(h1.hugeInt[i]!=h2.hugeInt[i])
			return false;
	return true;
}
bool hugeinteger::isNotEqualTo(const hugeinteger &h1,const hugeinteger &h2)
{
	//cout<<endl<<"Não é igual a:";
	int i=0;
	for (i=0;i<40;i++)
		if(h1.hugeInt[i]!=h2.hugeInt[i])
			break;
	if(i<40)
		return true;
	return false;
}
bool hugeinteger::isGreaterThan(const hugeinteger &h1,const hugeinteger &h2)
{
	//cout<<endl<<"É maior que:";
	int i=0;
	for (i=0;i<40;i++)
	{
		if(h1.hugeInt[i]<h2.hugeInt[i])
			return false;
		if(h1.hugeInt[i]>h2.hugeInt[i])
			return true;
	}
	return false;
}
bool hugeinteger::isLessThan(const hugeinteger &h1,const hugeinteger &h2)
{
	//cout<<endl<<"É menor que:";
	int i=0;
	for (i=0;i<40;i++)
	{
		if(h1.hugeInt[i]<h2.hugeInt[i])
			return true;
		if(h1.hugeInt[i]>h2.hugeInt[i])
			return false;
	}
	return false;
}
bool hugeinteger::isGreaterThanOrEqualTo(const hugeinteger &h1,const hugeinteger &h2)
{
	//cout<<endl<<"É Maior ou igual a:";
	int i=0;
	for (i=0;i<40;i++)
	{
		if(h1.hugeInt[i]<h2.hugeInt[i])
			return false;
		if(h1.hugeInt[i]>h2.hugeInt[i])
			return true;
	}
	return true;
}
bool hugeinteger::isLessThanOrEqualTo(const hugeinteger &h1,const hugeinteger &h2)
{
	//cout<<endl<<"É menor ou igual a:";
	int i=0;
	for (i=0;i<40;i++)
	{
		if(h1.hugeInt[i]<h2.hugeInt[i])
			return true;
		if(h1.hugeInt[i]>h2.hugeInt[i])
			return false;
	}
	return true;
}