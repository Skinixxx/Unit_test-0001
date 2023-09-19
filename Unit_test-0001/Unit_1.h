#pragma once
#include<sddl.h>
#include<vector>
#include <iostream>
#include <cstring>
#include <cassert>
#include <sstream>
#include<cmath>

#include<random>
#include<chrono>


enum class OorX
{
	val_o,
	val_x,
	val_unknow,

	val_lose,
	val_win,
	val_draw
};

template<typename T=int>
class Game
{
private:
	const int var_x;
	const int var_y;
	int key = 999;

	bool activ;

	T** p_data;
	///int p_lenght;

	void st_();
public:



	/// <summary>
	/// <c> winsapp</c> is the method in the <c> Game </c>
	/// </summary>
	/// <param name="">win || lose || draw</param>


	

	Game(const Game<T>& p);
	Game();

	Game(int buf_x, int buf_y);

	void set_data_type();
	T** get_data_frame();
	void render();
	void print_chek_d();
	void settings();

	~Game();

	void change(OorX& val);
	void fChenge(OorX& val);
	void funBrush(const int val_x, const int val_y, OorX& type);


	///for TEST!!!
	void randomise_test();


};
