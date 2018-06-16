#include <iostream>
using namespace std;

class Complex{
	int real;
	int img;

public:
	Complex(){
		real = 0;
		img = 0;
	}
	//Parameterised constructor.
	Complex(int r, int i){
		real = r;
		img = i;
	}
	//Copy constructor
	//It exists by default.
	//There won't be any difference in deep copy and shallow copy here.
	
	void setReal(const int r){
		real = r;
	}
	void setImg(const int i){
		img = i;
	}
	int getReal() const{
		return real;
	}
	int getImg() const{
		return img;
	}
	void print(){
		if(img > 0){
			cout << real << " + " << img << "i" << endl;
		}

		else{
			cout << real << " - " << -img <<"i" << endl;
		}
	}

};

int main() {
	Complex c1(5,3);
	Complex c2;
	c2.setImg(4);
	c2.setReal(1);

	c1.print();
	c2.print();
	
	return 0;
}
