#include <random>
#include <iostream>
#include <string>
using namespace std;

 string randDNA (int seed,string bases,int n)
 {
	 mt19937 eng(seed);// adds string to engine
	 uniform_int_distribution<int> un(0,bases.size()-1);// distribution of the bases
	 string dna;
	 
	 
	 for (int i=0; i<n; i++)
	 {
		 dna+= bases[un(eng)];
		 
	 }
	 return dna;
 }
 
 
 
