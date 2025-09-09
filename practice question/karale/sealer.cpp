#ifndef SELLER_H
#define SELLER_H
#include<iostream>
#include<string>
#include<vector>
#include"product.cpp"
#include"person.cpp"
using namespace std;

class seller:public person{
	private:
		int id;
		product pdr;
		vector<product>v;
		
	public:
		
		seller()
		{
			id=0;
		}
		
		seller(int idd,string nm):person(nm)
		{
			id=idd;
		}
		
		void setid(int id)
		{
		      this->id=id;
		}
		
		int getid()
		{
			return id;
		}
		void setproduct(product pr)
		{
			v.push_back(pr);
		}
	
};
#endif
