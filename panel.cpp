#include "panel.h"
#include "tile.h"

void Panel::flush(char glyph, Tile::ColorValue color)
{
    flushGlyph(glyph);
    flushColor(color);
}

void Panel::flushGlyph(char glyph)
{
    for(int i = 0; i < width; i++)
    {
        for(int j = 0; j < height; j++)
            values[i][j].setGlyph(glyph);
    }
}

void Panel::flushColor(int color)
{
    for(int i = 0; i < width; i++)
    {
        for(int j = 0; j < height; j++)
            values[i][j].setColor(color);
    }
}

void Panel::paint(unsigned int srcX, unsigned int srcY, unsigned int endX,
    unsigned int endY, unsigned int posX, unsigned int posY)
{
    for(int i = srcX; i < width && i <= endX; i++)
    {
        for(int j = srcY; j < height && j <= endY; j++)
        {
            mov(posX + i - srcX, posY + j - srcY);
            addch(values[i][j].getGlyph() | COLOR_PAIR(1));
        }
    }
}
