
// define a member function 
class Rectangle{

	private:
		int width, length;
	public:
		void set(int w, int l);  // only DECLARE
		int area(){return width*length};  // define inline
}

// define outside of class
// :: scope operator
void Rectangle::set(int w, int l){
	width = w;
	length = l;
}


// CONST member function: 
// return_type func_name(para_list) const;
class Time{
	private:
		int hrs, mins, secs;
	public:
		void Write() const;  // declaration
}

// definition
void Time::Write() const{
	cout << hrs << ":" << mins << ":" << secs << endl;
}