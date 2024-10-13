

class singleton {
private:
	static singleton* instance;
	int matricule;
	singleton();
	singleton(int);
public:
	singleton(singleton&) = delete;
	singleton operator=(const singleton&) = delete;
	static singleton& create();
};

