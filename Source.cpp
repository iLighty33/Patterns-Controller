#include <iostream>
#include <string>
#include <list>

using namespace std;

class Entity {
public:

	void setData(string data) {
		data_ = data;
	}

	string getData() {
		return data_;
	}

	virtual void Haha() = 0;
private:
	string data_ = "";
};

class imageEntity : Entity {
public:

	void setData(string data) {
		for (int i = 0; i < 5; i++) {
			canvas_[i] = data;
		}
	}

	string getData() {
		return canvas_[0] + " " + canvas_[1] + " " + canvas_[2] + " " + canvas_[3] + " " + canvas_[4] + "\n";
	}

	void setPixel(char color) {
		color_ = color;
	}



private:
	string canvas_[5] = {};
	char color_;
	int x1_ = 0, x2_ = 0, y1_ = 0, y2_ = 0, rad_ = 0;
};

class textEntity : Entity {
public:

private:
};

int main() {



	return 0;
}