#include <iostream>
#include <string>

using namespace std;

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
