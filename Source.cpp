#include <iostream>
#include <string>

using namespace std;

class Tank {

public:

	string model;
	string country;
	double mass;
	string type;
	double cost;


	Tank() {

		model = "unknown";
		country = "unknown";
		mass = 0;
		type = "unknown";
		cost = 0;

	}

	Tank(string init_model, string init_country, double init_mass, string init_type, double init_cost) {

		model = init_model;
		country = init_country;
		mass = init_mass;
		type = init_type;
		cost = init_cost;

	}

	string info() {

		return "model: " + model + "\n" + "country: " + country + "\n" + "mass: " + to_string(mass) + "\n" + "type: " + type + "\n" + "cost in dollars: " + to_string(cost);
	}

	~Tank() {

	}
};


int main() {
	Tank tank0;
	cout << endl << tank0.info() << "\n\n";

	Tank tank1("Centurion 7/1", "Britain", 60, "Medium", 4000);
	cout << tank1.info() << "\n\n";

	Tank tank2;

	cout << "\nenter tank model:";
	getline(cin, tank2.model);

	cout << "\nenter tank country:";
	getline(cin, tank2.country);

	cout << "\nenter tank mass:";
	cin >> tank2.mass;

	cout << "\nenter tank type:";
	cin >> tank2.type;

	cout << "\nenter tank cost:";
	cin >> tank2.cost;

	cout << tank2.info();


	return 0;
}