#include <iostream>
#include <string>


using namespace std;




// Create a class named Vehicle with two data member named mileage and price. Create its two subclasses
class Vehicle{
private:
	float mileage;
	float price;


public:
	Vehicle(){}




	Vehicle(float mileage,float price){
		this->mileage=mileage;
		this->price=price;
	}




	float getMileage(){
		return this->mileage;
	}
	float getPrice(){
		return this->price;
	}




	virtual void display(){
		cout<<"Mileage: "<<mileage<<"\n";
		cout<<"Price: "<<price<<"\n";
	}
};




//Car with data members to store ownership cost, warranty (by years), seating capacity and fuel type (diesel or petrol).
class Car:public Vehicle{
private:
	float ownershipCost;
	int warranty;
	int seatingCapacity;
	string fuelType;
public:
	Car(){}




	Car(float mileage,float price,float ownershipCost,int warranty,int seatingCapacity,string fuelType):Vehicle(mileage,price){
		this->ownershipCost=ownershipCost;
		this->warranty=warranty;
		this->seatingCapacity=seatingCapacity;
		this->fuelType=fuelType;
	}




	float getOwnershipCost(){
		return this->ownershipCost;
	}
	int getWarranty(){
		return this->warranty;
	}
	int getSeatingCapacity(){
		return this->seatingCapacity;
	}
	string getFuelType(){
		return this->fuelType;
	}
	void display(){
		cout<<"Car\n";
		Vehicle::display();
		cout<<"Ownership Cost: "<<ownershipCost<<"\n";
		cout<<"Warranty: "<<warranty<<"\n";
		cout<<"Seating capacity: "<<seatingCapacity<<"\n";
		cout<<"Fuel type: "<<fuelType<<"\n";
	}
};
//Bike with data members to store the number of cylinders, number of gears, cooling type (air, liquid or oil).
class Bike:public Vehicle{
private:
	int numberCylinders;
	int numberGears;
	string coolingType;
public:
	Bike(){}
	Bike(float mileage,float price,int numberCylinders,int numberGears,string coolingType):Vehicle(mileage,price){
		this->numberCylinders=numberCylinders;
		this->numberGears=numberGears;
		this->coolingType=coolingType;
	}








	int getNumberCylinders(){
		return this->numberCylinders;
	}
	int getNumberGears(){
		return this->numberGears;
	}
	string getCoolingType(){
		return this->coolingType;
	}
	void display(){
		cout<<"Bike\n";
		Vehicle::display();
		cout<<"Number cylinders: "<<numberCylinders<<"\n";
		cout<<"Number gears: "<<numberGears<<"\n";
		cout<<"Cooling type: "<<coolingType<<"\n";
	}
};


//two subclasses Audi and Ford of Car, each having a data member to store the model type. 


class Audi:public Car{
private:
	string modelType;
public:
	Audi(float mileage,float price,float ownershipCost,int warranty,int seatingCapacity,string fuelType):
	Car(mileage,price,ownershipCost,warranty,seatingCapacity,fuelType){
		this->modelType="Audi";
	}


	void display(){
		Car::display();
		cout<<"Model type: "<<modelType<<"\n";
	}
};
class Ford:public Car{
private:
	string modelType;
public:
	Ford(float mileage,float price,float ownershipCost,int warranty,int seatingCapacity,string fuelType):
	Car(mileage,price,ownershipCost,warranty,seatingCapacity,fuelType){
		this->modelType="Ford";
	}
	void display(){
		Car::display();
		cout<<"Model type: "<<modelType<<"\n";
	}
};
//Next, make two subclasses Bajaj and TVS, each having a data member to store the make-type.
class Bajaj:public Bike{
private:
	string makeType;
public:
	Bajaj(float mileage,float price,int numberCylinders,int numberGears,string coolingType):
	Bike(mileage,price,numberCylinders,numberGears,coolingType){
		this->makeType="Bajaj";
	}
	void display(){
		Bike::display();
		cout<<"The make-type: "<<makeType<<"\n";
	}
};


class TVS:public Bike{
private:
	string makeType;
public:
	TVS(float mileage,float price,int numberCylinders,int numberGears,string coolingType):
	Bike(mileage,price,numberCylinders,numberGears,coolingType){
		this->makeType="TVS";
	}
	void display(){
		Bike::display();
		cout<<"The make-type: "<<makeType<<"\n";
	}
};




int main()
{
	Audi carAudi(10000,36000,29000,10,3,"diesel");
	Audi carFord(20000,26000,19000,5,1,"petrol");
	Bajaj bikeBajaj(16000,12000,1,1,"liquid");
	TVS bikeTVS(56000,52000,6,6,"liquid");
	carAudi.display();
	cout<<"\n";
	carFord.display();
	cout<<"\n";
	bikeBajaj.display();
	cout<<"\n";
	bikeTVS.display();
	system("pause");
	return 0;
}
