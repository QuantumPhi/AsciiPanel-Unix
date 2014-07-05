#include <iostream>
#include <ncurses.h>
#include "tile.h"

using namespace std;

class Panel
{
public:
	Panel(unsigned int width_, unsigned int height_)
	{
		initscr();
		start_color();
		window = newwin(60, 40, )
		width = width_;
		height = height_;
		values = new Tile*[width];

		for(int i = 0; i < width; i++)
			values[i] = new Tile[height];
	}

	~Panel()
	{
		endWin();
		delete console;
		delete [] values;
	}

	void flush(char glyph, Tile::ColorValue color);
	void flushGlyph(char glyph);
	void flushColor(Tile::ColorValue color);

	void paint(unsigned int srcX, unsigned int srcY, unsigned int endX,
		unsigned int endY, unsigned int posX, unsigned int posY);
	void paintText(string text, Tile::ColorValue color, unsigned int posX, unsigned int posY);

	void toggleCursorVisible();
	bool isCursorVisible();

	int getWidth() { return width; }
	int getHeight() { return height; }

	Tile* getTile(unsigned int x, unsigned int y);
	void setTile(unsigned int x, unsigned int y, Tile* tile);
protected:
	unsigned int width, height;
	Tile** values;
	WINDOW* window;
};
