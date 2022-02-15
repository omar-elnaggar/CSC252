#include <iostream>
#include "Shape.h"

using namespace std;

int main(){
    // a.	Create a Shape object s1 and popula2e it with two circle objects. Print s1
    cout << "a." << endl;
    Shape s1(5);
    Circle circle1(5);
    Circle circle2(10);
    s1.addCircle(circle1);
    s1.addCircle(circle2);

    cout << "Shape 1" << endl;
    s1.print();

    // b.	Create a Shapes object s2 and populate it with three circle objects.  Print s2
    cout << "b." << endl;
    Shape s2(5);
    Circle circle4(3);
    Circle circle5(1);
    Circle circle6(24);
    s2.addCircle(circle4);
    s2.addCircle(circle5);
    s2.addCircle(circle6);

    cout << "Shape 2" << endl;
    s2.print();

    // c.	Create a third Shapes object s3 and initialize it with s2. Verify that the copy constructor is invoked when creating this third object. Print s3 
    cout << "c." << endl;
    Shape s3(s2);
    cout << "Shape 3" << endl;
    s3.print();

    // d.	Add a new Circle object to s2. Print s2 and s3. Has s3 Changed? 
    cout << "d." << endl;
    cout << "Adding new Circle object" << endl;
    Circle circle7(17);
    s2.addCircle(circle7);

    cout << "Shape 2" << endl;
    s2.print();

    cout << "Shape 3" << endl;
    s3.print();
    



    return 0;
}