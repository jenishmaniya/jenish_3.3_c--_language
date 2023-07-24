/*WAP to get and display N numbers of Fast Food cafe
information using encapsulation and use of default
constructor by including below mentioned attributes:
- cafe_id
- cafe_name
- cafe_type (like rooftop or normal)
- cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
- cafe_location (city name)
- cafe_establish_year
- cafe_staff_quantity
*/
#include<iostream>
using namespace std;
class cafe{
	private:
		int id;
		string name;
		string cafe_type;
		int rating;
		string location;
		int establish_year;
		string staff_quantity;
	public:
		cafe(){
			cout << "Enter the id:";
			cin >> this->id;
			cout << "Enter the name of the cafe:";
			cin >> this->name;
			cout << "Enter the rating:";
			cin >> this->rating;
			cout << "Enter the location:";
			cin >> this->location;
			cout << "Enter the establish year of the cafe:";
			cin >> this->establish_year;
			cout << "Enter the quantity of the staff in the cafe:";
			cin >> this->staff_quantity;
			
		}
		cafe(int id,string name,string cafe_type,int rating,string location,int establish_year,string staff_quantity){
			this->id=id;
			this->name=name;
			this->cafe_type=cafe_type;
			this->rating=rating;
			this->location=location;
			this->establish_year=establish_year;
			this->staff_quantity=staff_quantity;
		}
		getdata(){
			cout << "ID:" << this->id << endl;
			cout << "NAME OF THE COMPANY:" << this->name << endl;
			cout << "Enter the type of the cafe:" << this->cafe_type << endl;
			cout << "Enter the rating of cafe:" << this->rating << endl;
			cout << "Enter the location of the cafe:" << this->location << endl;
			cout << "Enter the establis year of cafe:" << this->establish_year << endl;
			cout << "Enter the staff quantity in a cafe:" << this->staff_quantity << endl;
		}
			
};
int main(){

	
	int i,n;
	cout << "Enter the numbers of cafe company:";
	cin >> n;
		cafe c[n];
	for(i=0;i<n;i++){
		c[i].getdata();
	}
	return 0;
}
