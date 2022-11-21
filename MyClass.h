class MyClass {
public:
	float a(); // accessor for a_
	float b(); // accessor for b_



	MyClass(); //default constructeur 
	MyClass( float a, float b);  //custom constructor

	MyClass sum(MyClass MC); // fct sum
	MyClass sum(float val);

protected:
	float a_ = 0;
	float b_ = 0;

};
