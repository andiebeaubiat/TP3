    #include <iostream>

    #include "MyClass.h"

    using std::cout;
    using std::endl;
    
    int main() {

      MyClass a;
      cout << "object a " << a.a() << a.b() << endl;

      MyClass b(5.0,6.0);
      cout << "object b "<< b.a() << b.b() << endl;
    
      return 0;
    }