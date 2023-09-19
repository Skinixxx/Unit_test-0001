
#include "Unit_1.h"


template<typename T>
Game<T>::Game(int x, int y) : var_x{ x }, var_y{ y } {
	st_();
	p_data = new int* [var_x];
	for (int i = 0; i < var_x; i++)
	{
		p_data[i] = new int[var_y];


	}
}

template<typename T>
Game<T>::Game() :var_x{ 3 }, var_y{ 3 } { st_(); }

template<typename T>
Game<T>::Game(const Game<T>& p) : var_x{ p.var_x }, var_y{ p.var_y } {
	st_();
	this->p_data = p.p_data;
}


template<typename T>
void Game<T>::print_chek_d() {
	for (int i = 0; i < var_x; i++) {
		for (int j = 0; j < var_y; j++) {
			std::cout << p_data[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

/*
void Game::randomise_test() {
	srand(time(NULL));

	for (int i = 0; i < var_x; i++) {
		for (int j = 0; j < var_y; j++) {
			p_data[i][j]=rand()%100;
		}
	}
}*/


template<typename T>
Game<T>::~Game() {
	for (int i = 0; i < var_x; i++)
	{
		delete[] p_data[i];
	}

	p_data = nullptr;
}

template<typename T>
T** Game<T>::get_data_frame() {
	return this->p_data;
}

template<typename T>
void Game<T>::render() {

	OorX val = OorX::val_unknow;
	Game<T>::fChenge(val);
	bool bruh = 0;
	//!!!!
	int count = 0;
	int num_key;

	while (bruh == 0) {

		for (int i = 0; i < var_x; i++) {
			for (int j = 0; j < var_y; j++) {
				std::cout << "---" << " ";
			}
			std::cout << std::endl;
			for (int j = 0; j < var_y; j++) {
				std::cout << "| |" << " ";
			}
			std::cout << std::endl;
			for (int j = 0; j < var_y; j++) {
				std::cout << "---" << " ";
			}
			std::cout << std::endl;
		}

		std::cin >> num_key;
	}
}

template<typename T>
void Game<T>::funBrush(const int val_x, const int val_y, OorX& type) {
	auto buf = ' ';
	if (type == OorX::val_o) {
		buf = 'O';
	}
	if (type == OorX::val_x) {
		buf = 'X';
	}

	p_data[val_x][val_y] = buf;


}

template<typename T>
void Game<T>::change(OorX& val) {
	if (val == OorX::val_o) {
		val = OorX::val_x;
	}
	else {
		val = OorX::val_o;
	}
}

template<typename T>
void Game<T>::fChenge(OorX& val) {




	srand(time(NULL));

	if (val == OorX::val_unknow) {
		if (rand() % 1 == 0) {
			val = OorX::val_o;
		}
		else {
			val = OorX::val_x;
		}
	}
}



template<typename T>
void Game<T>::st_() {
	this-> activ = true;
}