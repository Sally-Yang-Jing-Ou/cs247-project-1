#ifndef __DECK_GUI_H
#define __DECK_GUI_H
#include <gdkmm/pixbuf.h>
#include <vector>
#include "card.h"

class DeckGUI {
public:
	DeckGUI();
	virtual ~DeckGUI();
	Glib::RefPtr<Gdk::Pixbuf> image( Rank f, Suit s ); // Returns the image for the specified card.
	Glib::RefPtr<Gdk::Pixbuf> null(); // Returns the image to use for the placeholder.

private:
	std::vector< Glib::RefPtr< Gdk::Pixbuf > > deck; // Contains the pixel buffer images.
};
#endif