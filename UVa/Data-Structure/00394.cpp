/******************************************
* AUTHOR : JinYee *
* EMAIL : jinyee97@gmail.com *
  _____      _               _   _             
 / ____|    | |             | | (_)            
| (___   ___| |__   __ _ ___| |_ _  __ _ _ __  
 \___ \ / _ \ '_ \ / _` / __| __| |/ _` | '_ \ 
 ____) |  __/ |_) | (_| \__ \ |_| | (_| | | | |
|_____/ \___|_.__/ \__,_|___/\__|_|\__,_|_| |_|
******************************************/

#include <bits/stdc++.h>

using namespace std;

struct Array {
public:
	string name;
	int base_address;
	int element_size;
	int dimension;
	vector<int> lower;
	vector<int> upper;
	vector<int> constant;
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int numArray, numReference;
	cin >> numArray;
	cin >> numReference;
	Array* array = new Array[numArray];

	for(int i = 0; i < numArray; i++){
		cin >> array[i].name;
		cin >> array[i].base_address;
		cin >> array[i].element_size; // CD
		cin >> array[i].dimension;
		for(int j = 0; j < array[i].dimension; j++){
			int lower;
			int upper;
			cin >> lower;
			cin >> upper;
			array[i].lower.push_back(lower);
			array[i].upper.push_back(upper);
			array[i].constant.push_back(0);
		}
		array[i].constant.push_back(0);
		array[i].constant[array[i].dimension] = array[i].element_size;

		//calculate Cd = Cd+1(Upper - Lower + 1)
		for(int j = array[i].dimension - 1; j > 0; j--) array[i].constant[j] = array[i].constant[j+1] * (array[i].upper[j] - array[i].lower[j] + 1);

		//B
		array[i].constant[0] = array[i].base_address;

		//Calculate C0 = B - C1L1 -...
		for(int j = 1; j <= array[i].dimension; j++) array[i].constant[0] -= array[i].constant[j] * (array[i].lower[j-1]);
	}


	for(int i = 0; i < numReference; i++){
		string arrname;
		cin >> arrname;
		for(int j = 0; j < numArray; j++){
			if(array[j].name == arrname){
				cout << array[j].name;
				cout << "[";
				int physical_address = array[j].constant[0];
				for(int k = 0; k < array[k].dimension; ++k){
					if(k != 0) cout << ", ";
					int ref;
					cin >> ref;
					cout << ref;
					physical_address += ref * (array[j].constant[k+1]);
				}
				cout << "] = ";
				cout << physical_address << endl;
			}
		}
	}

	return 0;
}