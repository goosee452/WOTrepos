#include <iostream>
#include <string>

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
