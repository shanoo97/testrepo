// complex.cpp
// Multiplying complex numbers

#include <iostream>	// contains the definition of cout, endl
#include <complex>	// contains the complex class definition

using namespace std; // cout, endl, complex are all part of this namespace
typedef complex<float> complexnumb;
int main()
{
    
	auto num1 = complexnumb{2.0, 2.0};  // use auto for type deduction
	auto num2 = complexnumb{4.0, -2.0}; // use uniform initialisation syntax (curly braces)

	auto answer = num1 * num2; // type deduced for 'answer' is: complex<float>

	cout << "The answer is: " << answer << endl;
	cout << "Or in a more familiar form: " << answer.real() 
			<< " + " << answer.imag() << "j" 
			<< endl	<< endl;

	// answer++;
/*Because the operator is not overloaded. The compiler does not know what to do with the ++ */
	return 0;
}
