class MyClass {
public:
	float a(); // accessor for a_
	float b(); // accessor for b_



	MyClass(); //default constructeur 
	MyClass( float a, float b);  //custom constructor

protected:
	float a_ = 0;
	float b_ = 0;

};
