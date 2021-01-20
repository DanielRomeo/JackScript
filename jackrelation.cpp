#include <iostream>
#include <vector>
#include <cmath>
#include <set>
#include <string>
#include <iterator>
#include <functional>
#include "jackrelation.h"
	

namespace js{

	// create an iterator:
	std::set<std::pair<int, int>>::iterator it1;
	std::set<std::pair<int, int>>::iterator it2;

	void Set::add(std::pair<int, int> newSet){
		mainSet.insert(newSet);
		sum++;
	};


	int Set::size(){
		int count;
		for(auto const &i : mainSet){
			count++;
		}
		return count;
	}


	bool operator ==(const Set& set1, const Set& set2){
	 	if(set1.size() != set2.size()){
	 		return false;
	 	}
	 	//for(auto const &i : set1){
		//if(i ){

		// 	}
		// }
		for(; it1 != set1.end() && it2 != set2.end(); ++it1, ++it2 ){
			// *it1;
			std::cout << *it1 << " " << *it2;
		} 
		// for(auto const &i : set1){
		// 	std::cout << i.first << " " << i.first; 
		// }  

		return false;
	}



}

/*void TemporaryFunction ()
{
    Set<int> TempObj;
}*/

	