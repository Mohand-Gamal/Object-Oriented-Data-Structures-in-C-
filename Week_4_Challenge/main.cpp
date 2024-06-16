#include<iostream>
/* Class Pair has already been
 * declared and defined with the
 * following constructor:
 *
 *   Pair(int,int)
 *
 * that stores its two arguments in
 * two private member variables of Pair.
 *
 * Class sumPair has also already been
 * defined as follows:
 *
 * class sumPair : public Pair {
 * public:
 *   int sum;
 *   sumPair(int,int);
 * };
 */
class Pair {
    public:
    Pair(int, int);
    private:
    int a,b;
    };
class sumPair : public Pair {
    public:
    int sum;
    sumPair(int,int);
    };
 /*
 * Implement the constructor
 * sumPair(int,int) such that it
 * loads the two member variables of
 * the base Pair class with its
 * arguments, and initializes the
 * member variable sum with their sum.
 */
Pair::Pair (int num1, int num2){
    this->a=num1;
    this->b=num2;
}
sumPair::sumPair(int num1, int num2):Pair(num1,num2){
    this -> sum =  num1 + num2;
}


/* Below is a main() function
 * you can use to test your
 * implementation of the
 * sumPair constructor.
 */
 
int main() {
  sumPair sp(15,16);
  std::cout << "sp(15,16).sum =" << sp.sum << std::endl;
  return 0;
}