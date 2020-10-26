class Complex {
	private:
		// Feel free to edit _real, _imag to whatever variable you want
		double _real;
		double _imag;

	public: //Unparam Constructor
		Complex() : _real{0}, _imag{0} {
			
		}

		// Param Constructor
		Complex(double real, double imag) : _real{real}, _imag{imag} {
			
		}

		// Copy Constructor
		Complex(const Complex &c) : _real{c._real}, _imag{c._imag} {
			
		}

		// Get Real
		double real() const {
			return _real;
		}
		// Get Imag
		double imag() const {
			return _imag;
		}
		//Print Method
		void print() {
			std::cout << "Real: " << _real << " Imaginary: " << _imag << "j";
			std::cout << std::endl;
		}

		Complex add(const Complex &c2) {
                        Complex temp;
                        temp._real = _real + c2._real;
                        temp._imag = _imag + c2._imag;

                        return temp;
		}

                Complex sub(const Complex &c2) {
                        Complex temp;
                        temp._real = _real - c2._real;
                        temp._imag = _imag - c2._imag;

                        return temp;
                }

                Complex mult(const Complex &c2) {
                        Complex temp;
                        temp._real = (_real * c2._real) - (_imag * c2._imag);
                        temp._imag = (_imag * c2._real) + (c2._imag * _real);

                        return temp;

                }

                Complex div(const Complex &c2) {
                        Complex temp;
                        if ( (c2.real() == 0) || (c2.imag() == 0) ) {
                                throw std::overflow_error("Divide by zero");
                        }
			else {

                        temp._real = ((_real * c2._real) + (_imag * c2._imag)) / ((c2._real * c2._real) + (c2._imag * c2._imag));
                        temp._imag = ((c2._real * _imag)-(_real * c2._imag)) / ((c2._real * c2._real) + (c2._imag * c2._imag));

			}

			return temp;
                }

		Complex conj(const Complex &c) {
			Complex temp;
			temp._real = c._real;
			temp._imag = 0 - c._imag;

			return temp;
		}

		double magnitude() const {
		double m = (_real * _real) + (_imag * _imag);
		return sqrt(m);
		}
		double phase() const {
			double p;
			if (_real >= 0 && _imag >= 0) {
			p = (180/M_PI) * atan(_imag / _real);
			}
                        if (_real <= 0 && _imag >= 0) {
                        p = (180/M_PI) * atan(_imag / _real) + 90;
                        }
                        if (_real <= 0 && _imag <= 0) {
                        p = (180/M_PI) * atan(_imag / _real) + 180;
                        }
                        if (_real >= 0 && _imag <= 0) {
                        p = (180/M_PI) * atan(_imag / _real) + 270;
                  	}
                        if (_real == 0 && _imag == 0) {
                        p = 0;
                        }

			return p;
		}



		Complex operator+(const Complex &c) {
			Complex temp;
			temp._real = _real + c._real;
			temp._imag = _imag + c._imag;

			return temp;
		}

		Complex operator-(const Complex &c) {
			Complex temp;
			temp._real = _real - c._real;
			temp._imag = _imag - c._imag;

			return temp;
		}
		
		Complex operator*(const Complex &c) {
                        Complex temp;
                        temp._real = (_real * c._real) - (_imag * c._imag);
                        temp._imag = (_real * c._imag) + (c._real * _imag);

                        return temp;
                }


		Complex operator/(const Complex &c) {
                        Complex temp;
			if ( (c.real() == 0) || (c.imag() == 0) ) {
				throw std::overflow_error("Divide by zero");
			}
                        temp._real = ((_real * c._real) + (_imag * c._imag)) / ((c._real * c._real) + (c._imag * c._imag));
                        temp._imag = ((c._real * _imag)-(_real * c._imag)) / ((c._real * c._real) + (c._imag * c._imag));

                        return temp;
                }

		Complex operator=(const Complex &c) {
			_real = (c.real());
			_imag = (c.imag());
			
			return *this;
		}

		friend std::ostream &operator<<(std::ostream &out, const Complex &c) {
			out << c.real() << ' ' << c.imag();
			return out;
		}

		friend std::istream &operator>>(std::istream &in, Complex &c) {
			double temp;
			in >> temp;
			c._real = (temp);
			in >> temp;
			c._imag = (temp);
			return in; 
		}
};
