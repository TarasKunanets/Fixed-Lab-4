#include <iostream>
#include<cstdlib>
using namespace std;

class Farm
{
private:
  string Location;
  double Number_of_animals;
  double Power_of_fans;
protected:
  int Square;
  int Price;
public:
  string Name;
  int Number_of_workers;

  void SetPublic(string name, int number_of_workers )
  {
    Name = name ;
    Number_of_workers = number_of_workers;
  }
  void Set (string location, double number_of_animals, double power_of_fans)
  {
    Location = location;
    Number_of_animals = number_of_animals;
    Power_of_fans = power_of_fans;
  }
  void SetProtected(int square, int price )
  {
  Square = square;
  Price = price;
  }


  void Get()
  {
    cout << "location is - " << Location << endl << "number of animals is - " << Number_of_animals << endl<< "power of fans is - " << Power_of_fans << endl;

  }
  void GetPublic()
  {
    cout<<"Name is - "<< Name <<endl<<"Numbe of workers is  - "<<Number_of_workers<<endl;
  }
   void GetPrivate()
   {
     cout<< "Square is- "<<Square<<endl<<"Price is - "<< Price<<endl;
   }
    Farm ()
  {
    Location = "Ukraine";
    Number_of_animals = 222;
   Power_of_fans = 233;

  }
  ~Farm(){ };

};

