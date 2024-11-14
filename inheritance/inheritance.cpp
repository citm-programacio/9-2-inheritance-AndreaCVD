//Buildings of Rome

#include <iostream>;
using namespace std;

//Implement the class Building with the string name as protected member, a constructor that receives a string name and a public method getName() that returns the name of the building.

class Building {
protected:
	string name;

public:
	Building(string name_) : name(name_) {};

	const string getName() const {
		return name;
	}
};

//Implement the class Warehouse derived from Building that contains :
	//The members wood, rocks and wheat(integers) that cannot be accessed from outside the class
	//A constructor that receives a string name, and three integers(wood, rocks and wheat).
	//A public method printResources() that prints on the screen the value of the members of the class (in the same way as it can be seen in the screenshot of the next page).

class Warehouse : public Building{
private:
	int wood, rocks, wheat;
public:

	//I called the Building constructor to set the name
	Warehouse(string name_, int wood_, int rocks_, int wheat_) : Building(name_), wood(wood_), rocks(rocks_), wheat(wheat_) {};

	void printResources() {
		cout << "------------------------------------" << endl;
		cout << "Warehouse " << getName() << " information..." << endl;
		cout << "Wood: " << wood << " | Rocks: " << rocks << " | Wheat: " << wheat << endl;
	}
};

//Implement the class House derived from Building that contains :
	//The members floors, inhabitants and servants(integers) that cannot be accessed from outside the class
	//A constructor that receives a string name, and three integers(floors, inhabitants and servants).
	//A public method printHouse() that prints on the screen the value of the members of the class.

class House : public Building {
private:
	int floors, inhabitants, servants;

public:
	House(string name_, int floors_, int inhabitants_, int servants_) : Building(name_), floors(floors_), inhabitants(inhabitants_), servants(servants_) {};

	void printHouse() {
		cout << "------------------------------------" << endl;
		cout << "House " << getName() << " information..." << endl;
		cout << "Floors: " << floors << " | Inhabitants: " << inhabitants << " | Servants: " << servants << endl;
	};
};


//Implement the class Temple derived from Building that contains :
	//The members god(string) and priests(integer) that cannot be accessed from outside the class
	//A constructor that receives a string name, a string god and the number of priests of the temple(an integer called priest).
	//A public method printTemple() that prints on the screen the value of the members of the class.

class Temple : public Building {
private:
	string god;
	int priests;

public:
	Temple(string name_, string god_, int priests_) : Building(name_), god(god_), priests(priests_) {};

	void printTemple() {
		cout << "------------------------------------" << endl;
		cout << "Temple: " << getName() << " information..." << endl;
		cout << "God: " << god << " | Priests: " << priests << endl;
	};
};

//Your program must create one of each class and use their print function to display the data

int main() {
	Warehouse warehouse("Central Warehouse", 1000, 500, 300);
	warehouse.printResources();

	// Create a House object
	House house("Villa Margarita", 3, 6, 2);
	house.printHouse();

	// Create a Temple object
	Temple temple("Pantheon", "Jupiter", 10);
	temple.printTemple();
}
