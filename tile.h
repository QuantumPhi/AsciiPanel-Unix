class Tile
{
public:
	Tile(char glyph_, int color_)
	{
		glyph = glyph_;
		color = color_;
	}

	Tile() : Tile('.', WHITE) { }

	char getGlyph() { return glyph; }
	void setGlyph(char glyph_) { glyph = glyph_; }
	int getColor() { return color; }
	void setColor(int color_) { color = color_; }

protected:
	char glyph;
	unsigned int color;
};
