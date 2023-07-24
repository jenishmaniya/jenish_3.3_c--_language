/*WAP to get and display N numbers of Diamond
companies information using encapsulation and use of
parameterised constructor by including below
mentioned attributes:
- comp_id
- comp_name
- comp_staff_quantity
- comp_revenue (per year)
- comp_import_raw_diamonds (no. of raw diamonds
imported per year)
- comp_export_diamonds (no. of diamonds per year)
- comp_ceo (name of CEO of the company)
*/
#include<iostream>
using namespace std;
class diamond{
	private:
		int id;
		string name;
		int comp_staff_quantity;
		int comp_revenue;
		int comp_import_raw_diamonds;
		int comp_export_diamonds;
		string comp_ceo;
	public:
		diamond(){
			cout << "Enter the id:";
			cin >> this->id;
			cout << "Enter the name of the company:";
			cin >> this->name;
			cout << "Enter the quantity of the staff in the company:";
			cin >> this->comp_staff_quantity;
			cout << "Enter the revenue of the company:";
			cin >> this->comp_revenue;
			cout << "Enter the per year import of raw diamond in a company:";
			cin >> this->comp_import_raw_diamonds;
			cout << "Enter the number of export diamond per years:";
			cin >> this->comp_export_diamonds;
			cout << "Enter the name of the CEO of the company:";
			cin >> this->comp_ceo;
			
		}
		diamond(int id,
		string name,
		int comp_staff_quantity,int comp_revenue,int comp_import_raw_diamonds,int comp_export_diamonds,string comp_ceo){
			this->id=id;
			this->name=name;
			this->comp_staff_quantity=comp_staff_quantity;
			this->comp_revenue=comp_revenue;
			this->comp_import_raw_diamonds=comp_import_raw_diamonds;
			this->comp_export_diamonds=comp_export_diamonds;
			this->comp_ceo=comp_ceo;
		}
		getdata(){
			cout << "ID:" << this->id << endl;
			cout << "NAME OF THE COMPANY:" << this->name << endl;
			cout << "Enter the quantity of the staff in the company:" << this->comp_staff_quantity << endl;
			cout << "Enter the revenue of the company:" << this->comp_revenue << endl;
			cout << "Enter the per year import of raw diamond in a company:" << this->comp_import_raw_diamonds << endl;
			cout << "Enter the number of export diamond per years:" << this->comp_export_diamonds << endl;
			cout << "Enter the name of the CEO of the company:" << this->comp_ceo << endl;
		}
			
};
int main(){
	int i,n;
	cout << "Enter the numbers of diamond company:";
	cin >> n; 
	diamond d[n];
	for(i=0;i<n;i++){
		d[i].getdata();
	}
	return 0;
}
