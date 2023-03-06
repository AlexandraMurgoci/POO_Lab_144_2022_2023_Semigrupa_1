#include <iostream>

class Complex {
    double real;
    double imaginary;
public:
    //constructori
    Complex(): real(0), imaginary(0) {}
    Complex(double real) { this -> real = real; this -> imaginary = 0; }
    Complex(double real, double imaginary): real(real), imaginary(imaginary) {
//        std::cout << "S-a apelat constructorul de initializare cu doi parametri double" << std::endl;
    }

    //constructor de copiere
    Complex(const Complex &complex): real(complex.real) {
        imaginary = complex.imaginary;
//        std::cout << "S-a apelat constructorul de copiere" << std::endl;
    }



    //destructor
    ~Complex() {
        //nu trebuie nimic dezalocat manual
//        std::cout << "S-a apelat destructorul" << std::endl;
    }

    Complex operator=(Complex complex) {
        real = complex.GetReal();
        imaginary = complex.imaginary;
        return *this;
    }

    //setter
    void SetReal(double real) { this -> real = real; }
    void SetImaginary(double imaginary) { this -> imaginary = imaginary; }
    //getter
    double GetReal() { return real; }
    double GetImaginary() { return imaginary; }

    double Abs() {return 0;}

    //operatori

    //functie friend care poate accesa membri si metode private
    //dar care nu este metoda a clase!!!!
    friend Complex operator+(Complex complex1, Complex complex2) {
        //complex1 este transmis prin valoare, nu se modifica cel extern
        complex1.real += complex2.real;
        complex1.imaginary +=complex2.imaginary;
        return complex1;
    }

    //operator ca membru al clasei
    Complex operator/(Complex complex2) {
        //argumentul este al doilea membru al operatiei, exp c2 din c1 + c2, iar c1 este instanta in sine
        Complex result;
        //TODO mate
        return result;
    }

    friend std::istream& operator>>(std::istream &in, Complex &c) {
        in >> c.real >> c.imaginary;
        return in;
    }

    friend std::ostream& operator<<(std::ostream &out, Complex c) {
        out << c.real << " " << c.imaginary;
        return out;
    }

};

//operator ca functie
Complex operator*(Complex complex1, Complex complex2) {
    Complex result;
    result.SetReal(complex1.GetReal() * complex2.GetReal() - complex1.GetImaginary() * complex2.GetImaginary());
    result.SetImaginary(complex1.GetReal() * complex2.GetImaginary() + complex1.GetImaginary() * complex2.GetReal());
    return result;
}

struct Vector {
    int lungime;
    int *vector;
    Complex c;

    Vector(Complex c): c(5) {Complex c1(5); c=5;}
};

void TestGetterAndSetter() {
    Complex c;

    c.SetReal(1);
    c.SetImaginary(0.5);

    std::cout << c.GetReal() << " " << c.GetImaginary() << std::endl;
}

void TestConstructorInit() {
    Complex zero;
    Complex cinci(5);
    Complex c(0.5, 1);

    std::cout << zero.GetReal() << " " << zero.GetImaginary() << std::endl;
    std::cout << cinci.GetReal() << " " << cinci.GetImaginary() << std::endl;
    std::cout << c.GetReal() << " " << c.GetImaginary() << std::endl;
}

void FunctieExempluParametruPrinValoare(Complex c) {
    std::cout << c.GetReal() << " " << c.GetImaginary() << std::endl;
}
void FunctieExempluParametruPrinReferinta(Complex &c) {
    std::cout << c.GetReal() << " " << c.GetImaginary() << std::endl;
}
void TestConstructorCopiere() {
    Complex c(5, 1);
    std::cout << std::endl;
    FunctieExempluParametruPrinValoare(c);
    std::cout << std::endl;
    FunctieExempluParametruPrinReferinta(c);
    std::cout << std::endl;
    std::cout << "S-a terminat functia de test" << std::endl;
}

void TestOperatorPlus() {
    Complex c1(5, 1), c2(2, 1), c3;
    c3 = c1 + c2;
    std::cout << c3.GetReal() << " " << c3.GetImaginary() << std::endl;
    std::cout << c1.GetReal() << " " << c1.GetImaginary() << std::endl;
}

void TestOperatorInmultire() {
    Complex c1(5, 1), c2(2, 1), c3;
    c3 = c1 * c2;
    std::cout << c3.GetReal() << " " << c3.GetImaginary() << std::endl;
}

void TestOperatorImpartire() {
    Complex c1(5, 1), c2(2, 1), c3;
    c3 = c1 / c2;
    std::cout << c3.GetReal() << " " << c3.GetImaginary() << std::endl;
}

void TestOperatorEgal() {
    Complex c1(5, 1), c2(2, 1);
    c1 = c2;
    std::cout << c1.GetReal() << " " << c1.GetImaginary() << std::endl;
}

void TestOperatorCitire() {
    Complex c;
    std::cin >> c;
    std::cout << c.GetReal() << " " << c.GetImaginary() << std::endl;
}

void TestOperatorAfisare() {
    Complex c(1, 0.5);
    std::cout << c;
}

int main() {
//    TestGetterAndSetter();
//    TestConstructorInit();
//    TestConstructorCopiere();
//    TestOperatorPlus();
//    TestOperatorInmultire();
//    TestOperatorImpartire();
//    TestOperatorEgal();
//    TestOperatorCitire();
//    TestOperatorAfisare();
    return 0;
}
