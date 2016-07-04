#include <vector>
#include <array>
#include "basique.hpp"

using namespace std;

struct Partition
{
	array<int,n> suite;
	array<bool,n-1> barres;
};


vector<Partition> get_partitions();