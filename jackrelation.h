#ifndef JACKRELATION_H
#define JACKRELATION_H
#include <iostream>
#include <cmath>
#include <set>

namespace js{

	
	class Set{
		private:
			std::set<std::pair<int, int>> mainSet;
		public:
			int sum = 0;
			void add(std::pair<int, int> newSet);
			bool isEqual(Set set1, Set set2);
			int size();
			bool operator ==(const Set& set1, const Set& set2);		
	};
}

#endif