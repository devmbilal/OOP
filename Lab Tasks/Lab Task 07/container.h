
#include<string>
class Monitor
{
private:
	int size;
	double price;
	string comname;
public:
	Monitor(int s, double p, string st)
	{
		size = s;
		price = p;
		comname = st;
	}
	void setsize(int s)
	{
		size = s;
		
	}
	void setprice(int p)
	{
		price = p;

	}
	void setstring(string st)
	{
		comname = st;

	}
};

class Cpu
{
private:
	int size;
	double price;
	string comname;
public:
	Cpu(int s, double p, string st)
	{
		size = s;
		price = p;
		comname = st;
	}
	void setsize(int s)
	{
		size = s;

	}
	void setprice(int p)
	{
		price = p;

	}
	void setstring(string st)
	{
		comname = st;

	}
};

class Mouse
{
private:
	int size;
	double price;
	string comname;
public:
	Mouse(int s, double p, string st)
	{
		size = s;
		price = p;
		comname = st;
	}
	void setsize(int s)
	{
		size = s;

	}
	void setprice(int p)
	{
		price = p;

	}
	void setstring(string st)
	{
		comname = st;

	}
};

class Usbdrive
{
private:
	int size;
	double price;
	string comname;
public:
	Usbdrive(int s, double p, string st)
	{
		size = s;
		price = p;
		comname = st;
	}
	void setsize(int s)
	{
		size = s;

	}
	void setprice(int p)
	{
		price = p;

	}
	void setstring(string st)
	{
		comname = st;

	}
};

class Keyboard
{
private:
	int size;
	double price;
	string comname;
public:
	Keyboard(int s, double p, string st)
	{
		size = s;
		price = p;
		comname = st;
	}
	void setsize(int s)
	{
		size = s;

	}
	void setprice(int p)
	{
		price = p;

	}
	void setstring(string st)
	{
		comname = st;

	}
};

class Container
{
private:
	Monitor m;
	Keyboard k;
	Usbdrive u;
	Mouse ms;
	Cpu c;
public:
	Container(int s, double p, string st) :m(s, p, st), k(s, p, st), u(s, p, st), c(s, p, st), ms(s, p, st)
	{}

};



