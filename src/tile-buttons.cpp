#pragma warning(push, 0)
#include <FL/Fl.H>
#include <FL/Fl_PNG_Image.H>
#pragma warning(pop)

#include "themes.h"
#include "main-window.h"
#include "tile-buttons.h"

static const uchar palette_bgs_png_buffer[217] = {
	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
	0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x08, 0x03, 0x00, 0x00, 0x00, 0xe9, 0xa3, 0xd0,
	0x93, 0x00, 0x00, 0x00, 0x33, 0x50, 0x4c, 0x54, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00,
	0x60, 0x60, 0x00, 0x6d, 0x00, 0x00, 0xc0, 0xc0, 0x00, 0xd8, 0x00, 0x60, 0x60, 0x00, 0x78, 0x00,
	0x78, 0x80, 0x80, 0x80, 0x84, 0x42, 0x00, 0x90, 0x90, 0xff, 0xa0, 0x00, 0x00, 0xc0, 0xc0, 0x00,
	0xf0, 0x00, 0xf0, 0xff, 0x78, 0x78, 0xff, 0x8a, 0x15, 0xff, 0xff, 0xff, 0x9c, 0x0f, 0x96, 0x9f,
	0x00, 0x00, 0x00, 0x11, 0x74, 0x52, 0x4e, 0x53, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x71, 0xa8, 0xff, 0x3f, 0x00, 0x00, 0x00,
	0x44, 0x49, 0x44, 0x41, 0x54, 0x78, 0x5e, 0xed, 0xd0, 0x47, 0x11, 0xc0, 0x30, 0x00, 0xc0, 0xb0,
	0xec, 0xd9, 0xc5, 0x1f, 0x6d, 0xff, 0x86, 0x90, 0xb3, 0x20, 0x28, 0x0c, 0x08, 0xb0, 0x21, 0x43,
	0x84, 0x06, 0x13, 0x12, 0x74, 0xf8, 0xe0, 0x81, 0x0a, 0x0b, 0x2e, 0x78, 0xa1, 0xc0, 0x0d, 0xc7,
	0x87, 0x18, 0x62, 0x88, 0x21, 0x86, 0x18, 0x62, 0x88, 0x21, 0x86, 0x18, 0x62, 0x88, 0x21, 0x86,
	0x18, 0x62, 0x88, 0x21, 0x3f, 0x74, 0x54, 0x88, 0x01, 0x13, 0x17, 0xb9, 0x23, 0x00, 0x00, 0x00,
	0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

static Fl_PNG_Image palette_bgs_image(NULL, palette_bgs_png_buffer, 217);

static const uchar palette_digits_png_buffer[265] = {
	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
	0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x07, 0x04, 0x03, 0x00, 0x00, 0x00, 0x6d, 0xb4, 0xd7,
	0xd1, 0x00, 0x00, 0x00, 0x1e, 0x50, 0x4c, 0x54, 0x45, 0xff, 0xff, 0xff, 0x00, 0x00, 0xc0, 0x00,
	0x60, 0x60, 0x00, 0x6d, 0x00, 0x32, 0x32, 0x32, 0x60, 0x60, 0x00, 0x78, 0x00, 0x78, 0x84, 0x42,
	0x00, 0xa0, 0x00, 0x00, 0xff, 0xff, 0xff, 0xe1, 0xff, 0x4f, 0x13, 0x00, 0x00, 0x00, 0x01, 0x74,
	0x52, 0x4e, 0x53, 0x00, 0x40, 0xe6, 0xd8, 0x66, 0x00, 0x00, 0x00, 0x99, 0x49, 0x44, 0x41, 0x54,
	0x78, 0x5e, 0x6d, 0x8f, 0xbb, 0x0d, 0xc3, 0x30, 0x0c, 0x44, 0xd9, 0xaa, 0x74, 0xa9, 0x36, 0x5d,
	0xea, 0x54, 0xe9, 0xbd, 0x82, 0x57, 0x30, 0xa0, 0x09, 0x0c, 0x6d, 0x10, 0x77, 0x17, 0x7d, 0x82,
	0xbc, 0x6d, 0x23, 0xd9, 0x81, 0x0d, 0x04, 0xb9, 0x8a, 0x38, 0x1e, 0x1f, 0x49, 0x03, 0x10, 0x7f,
	0xe4, 0x70, 0xc8, 0x1d, 0x5d, 0x2b, 0x23, 0x0f, 0xe5, 0x1b, 0x83, 0xaf, 0x95, 0x25, 0xa6, 0x0b,
	0x73, 0xe8, 0xde, 0xca, 0x9d, 0x01, 0x26, 0x16, 0x36, 0xcf, 0x4a, 0xe1, 0x2d, 0x32, 0xf4, 0x60,
	0x24, 0x01, 0xa1, 0x79, 0xeb, 0x9a, 0x33, 0xde, 0x57, 0x88, 0x31, 0x41, 0xa0, 0x05, 0xf5, 0x6e,
	0x44, 0x3d, 0x7d, 0x9d, 0x36, 0xa2, 0xd8, 0x89, 0x7d, 0x0b, 0x55, 0xae, 0x05, 0xaf, 0x6e, 0xd6,
	0x46, 0x24, 0x03, 0x9e, 0x3e, 0x9e, 0x92, 0x5e, 0x34, 0x8f, 0x1f, 0xa2, 0xec, 0x98, 0xf6, 0x56,
	0x77, 0xe2, 0x4b, 0x65, 0x94, 0xeb, 0xc1, 0xf3, 0xc6, 0x60, 0xc6, 0xa1, 0x6f, 0x29, 0x04, 0x72,
	0x00, 0xe7, 0xd7, 0xd8, 0x07, 0x27, 0x69, 0x8b, 0xa0, 0xbc, 0x1b, 0xf0, 0xe7, 0x00, 0x00, 0x00,
	0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

static Fl_PNG_Image palette_digits_image(NULL, palette_digits_png_buffer, 265);

static const uchar priority_png_buffer[117] = {
	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x02, 0x03, 0x00, 0x00, 0x00, 0xb9, 0x3c, 0xbf,
	0x40, 0x00, 0x00, 0x00, 0x09, 0x50, 0x4c, 0x54, 0x45, 0xff, 0xff, 0xff, 0xd6, 0xd6, 0x00, 0xff,
	0xff, 0xff, 0xbc, 0x3d, 0xfa, 0x84, 0x00, 0x00, 0x00, 0x01, 0x74, 0x52, 0x4e, 0x53, 0x00, 0x40,
	0xe6, 0xd8, 0x66, 0x00, 0x00, 0x00, 0x1a, 0x49, 0x44, 0x41, 0x54, 0x78, 0x5e, 0x63, 0x60, 0x62,
	0x60, 0xe0, 0x6c, 0x60, 0x50, 0x4d, 0x60, 0x98, 0x1a, 0x01, 0x22, 0xd5, 0x12, 0x18, 0x38, 0x1a,
	0x00, 0x20, 0x29, 0x03, 0x91, 0xd8, 0xb4, 0x96, 0xbb, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e,
	0x44, 0xae, 0x42, 0x60, 0x82
};

static Fl_PNG_Image priority_image(NULL, priority_png_buffer, 117);

static const uchar obp1_png_buffer[116] = {
	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x02, 0x03, 0x00, 0x00, 0x00, 0xb9, 0x3c, 0xbf,
	0x40, 0x00, 0x00, 0x00, 0x09, 0x50, 0x4c, 0x54, 0x45, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
	0xd6, 0xd6, 0x36, 0x26, 0xd6, 0x94, 0x00, 0x00, 0x00, 0x01, 0x74, 0x52, 0x4e, 0x53, 0x00, 0x40,
	0xe6, 0xd8, 0x66, 0x00, 0x00, 0x00, 0x19, 0x49, 0x44, 0x41, 0x54, 0x78, 0x5e, 0x63, 0x00, 0x02,
	0xd1, 0x00, 0x06, 0xa9, 0x09, 0x0c, 0x92, 0x13, 0x80, 0x24, 0x90, 0xcd, 0xc0, 0xc0, 0x00, 0x00,
	0x1c, 0x52, 0x02, 0xc8, 0x8d, 0xf6, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44,
	0xae, 0x42, 0x60, 0x82
};

static Fl_PNG_Image obp1_image(NULL, obp1_png_buffer, 116);

static const Fl_Color bg_colors[16] = {
	fl_rgb_color(0x12, 0x34, 0x56), fl_rgb_color(0x12, 0x1B, 0x56), fl_rgb_color(0x23, 0x12, 0x56), fl_rgb_color(0x3C, 0x12, 0x56),
	fl_rgb_color(0x56, 0x12, 0x56), fl_rgb_color(0x56, 0x12, 0x3D), fl_rgb_color(0x56, 0x12, 0x23), fl_rgb_color(0x56, 0x1A, 0x12),
	fl_rgb_color(0x56, 0x34, 0x12), fl_rgb_color(0x56, 0x4D, 0x12), fl_rgb_color(0x45, 0x56, 0x12), fl_rgb_color(0x2C, 0x56, 0x12),
	fl_rgb_color(0x12, 0x56, 0x12), fl_rgb_color(0x12, 0x56, 0x2B), fl_rgb_color(0x12, 0x56, 0x45), fl_rgb_color(0x12, 0x4E, 0x56),
};
static const Fl_Color fg_colors[16] = {
	fl_rgb_color(0xAB, 0xCD, 0xEF), fl_rgb_color(0xAB, 0xB4, 0xEF), fl_rgb_color(0xBC, 0xAB, 0xEF), fl_rgb_color(0xD5, 0xAB, 0xEF),
	fl_rgb_color(0xEF, 0xAB, 0xEF), fl_rgb_color(0xEF, 0xAB, 0xD6), fl_rgb_color(0xEF, 0xAB, 0xBC), fl_rgb_color(0xEF, 0xB3, 0xAB),
	fl_rgb_color(0xEF, 0xCD, 0xAB), fl_rgb_color(0xEF, 0xE6, 0xAB), fl_rgb_color(0xDE, 0xEF, 0xAB), fl_rgb_color(0xC5, 0xEF, 0xAB),
	fl_rgb_color(0xAB, 0xEF, 0xAB), fl_rgb_color(0xAB, 0xEF, 0xC4), fl_rgb_color(0xAB, 0xEF, 0xDE), fl_rgb_color(0xAB, 0xE7, 0xEF),
};

static void draw_grid(int x, int y) {
	fl_color(fl_rgb_color(0x40));
	for (int i = 1; i < TILE_SIZE_2X; i += 4) {
		fl_point(x+i, y+TILE_SIZE_2X-1);
		fl_point(x+i+1, y+TILE_SIZE_2X-1);
		fl_point(x+TILE_SIZE_2X-1, y+i);
		fl_point(x+TILE_SIZE_2X-1, y+i+1);
	}
	fl_color(fl_rgb_color(0xC0));
	for (int i = 0; i < TILE_SIZE_2X; i += 4) {
		fl_point(x+i, y+TILE_SIZE_2X-1);
		fl_point(x+i+3, y+TILE_SIZE_2X-1);
		fl_point(x+TILE_SIZE_2X-1, y+i);
		fl_point(x+TILE_SIZE_2X-1, y+i+3);
	}
}

static void draw_selection_border(int x, int y) {
	fl_rect(x, y, TILE_SIZE_2X, TILE_SIZE_2X, FL_BLACK);
	fl_rect(x+1, y+1, TILE_SIZE_2X-2, TILE_SIZE_2X-2, FL_WHITE);
	fl_rect(x+2, y+2, TILE_SIZE_2X-4, TILE_SIZE_2X-4, FL_BLACK);
}

std::vector<Tileset> *Tile_State::_tilesets = NULL;

void Tile_State::draw_tile(int x, int y, bool active, bool selected) {
	if (_tilesets) {
		for (std::vector<Tileset>::reverse_iterator it = _tilesets->rbegin(); it != _tilesets->rend(); ++it) {
			if (it->draw_tile(this, x, y, active)) {
				return;
			}
		}
	}
	uint16_t hi = (id & 0xF0) >> 4, lo = id & 0x0F;
	char l1 = (char)(hi > 9 ? 'A' + hi - 10 : '0' + hi), l2 = (char)(lo > 9 ? 'A' + lo - 10 : '0' + lo);
	const char buffer[3] = {l1, l2, '\0'};
	bool r = Config::rainbow_tiles();
	Fl_Color bg = bg_colors[r ? lo : 0];
	if (!active) { bg = fl_inactive(bg); }
	fl_rectf(x, y, TILE_SIZE_2X, TILE_SIZE_2X, bg);
	int s = OS::is_consolas() ? 11 : 10;
	fl_font(x_flip || y_flip ? FL_COURIER_ITALIC : FL_COURIER, s);
	Fl_Color fg = selected ? FL_YELLOW : x_flip ? y_flip ? FL_YELLOW : FL_MAGENTA : y_flip ? FL_CYAN : fg_colors[r ? hi : 0];
	if (!active) { fg = fl_inactive(fg); }
	fl_color(fg);
	fl_draw(buffer, x, y, TILE_SIZE_2X, TILE_SIZE_2X, FL_ALIGN_CENTER);
}

void Tile_State::draw_attributes(int x, int y) {
	palette_bgs_image.draw(x, y, TILE_SIZE_2X, TILE_SIZE_2X, TILE_SIZE_2X * (palette + 1), 0);
	if (palette > -1) {
		palette_digits_image.draw(x+1, y+1, 5, 7, 5 * palette, 0);
	}
	if (priority) {
		priority_image.draw(x+8, y+8);
	}
	if (obp1) {
		obp1_image.draw(x+8, y+1);
	}
}

// {length*2, X,Y, ...}
static const int digit_pixels[16][1+13*2] = {
	{10*2, 1,0, 2,0, 0,1, 2,1, 0,2, 2,2, 0,3, 2,3, 0,4, 1,4},                // 0
	{ 8*2, 1,0, 0,1, 1,1, 1,2, 1,3, 0,4, 1,4, 2,4},                          // 1
	{ 8*2, 0,0, 1,0, 2,1, 1,2, 0,3, 0,4, 1,4, 2,4},                          // 2
	{ 7*2, 0,0, 1,0, 2,1, 1,2, 2,3, 0,4, 1,4},                               // 3
	{ 9*2, 0,0, 2,0, 0,1, 2,1, 0,2, 1,2, 2,2, 2,3, 2,4},                     // 4
	{ 9*2, 0,0, 1,0, 2,0, 0,1, 0,2, 1,2, 2,3, 0,4, 1,4},                     // 5
	{11*2, 1,0, 2,0, 0,1, 0,2, 1,2, 2,2, 0,3, 2,3, 0,4, 1,4, 2,4},           // 6
	{ 7*2, 0,0, 1,0, 2,0, 2,1, 2,2, 1,3, 1,4},                               // 7
	{13*2, 0,0, 1,0, 2,0, 0,1, 2,1, 0,2, 1,2, 2,2, 0,3, 2,3, 0,4, 1,4, 2,4}, // 8
	{11*2, 0,0, 1,0, 2,0, 0,1, 2,1, 0,2, 1,2, 2,2, 2,3, 0,4, 1,4},           // 9
	{10*2, 1,0, 0,1, 2,1, 0,2, 1,2, 2,2, 0,3, 2,3, 0,4, 2,4},                // A
	{10*2, 0,0, 1,0, 0,1, 2,1, 0,2, 1,2, 0,3, 2,3, 0,4, 1,4},                // B
	{ 7*2, 1,0, 2,0, 0,1, 0,2, 0,3, 1,4, 2,4},                               // C
	{10*2, 0,0, 1,0, 0,1, 2,1, 0,2, 2,2, 0,3, 2,3, 0,4, 1,4},                // D
	{11*2, 0,0, 1,0, 2,0, 0,1, 0,2, 1,2, 2,2, 0,3, 0,4, 1,4, 2,4},           // E
	{ 9*2, 0,0, 1,0, 2,0, 0,1, 0,2, 1,2, 2,2, 0,3, 0,4},                     // F
};

static void print_digit(int x, int y, uchar d) {
	const int *pixels = digit_pixels[d];
	int n = pixels[0];
	for (int i = 1; i <= n; i += 2) {
		int dx = pixels[i], dy = pixels[i+1];
		fl_point(x + dx, y + dy);
	}
}

void Tile_State::print(int x, int y) {
	if (_tilesets) {
		for (std::vector<Tileset>::reverse_iterator it = _tilesets->rbegin(); it != _tilesets->rend(); ++it) {
			if (it->print_tile(this, x, y)) {
				return;
			}
		}
	}
	char hi = (char)((id & 0xF0) >> 4), lo = (char)(id & 0x0F);
	bool r = Config::rainbow_tiles();
	Fl_Color bg = bg_colors[r ? lo : 0];
	fl_rectf(x, y, TILE_SIZE, TILE_SIZE, bg);
	Fl_Color fg = x_flip ? y_flip ? FL_YELLOW : FL_MAGENTA : y_flip ? FL_CYAN : fg_colors[r ? hi : 0];
	fl_color(fg);
	print_digit(x, y+1, hi);
	print_digit(x+4, y+2, lo);
}

Tile_Swatch::Tile_Swatch(int x, int y, int w, int h) : Tile_Thing(), Fl_Box(x, y, w, h), _attributes() {
	user_data(NULL);
	box(OS_SPACER_THIN_DOWN_FRAME);
	labeltype(FL_NO_LABEL);
}

void Tile_Swatch::draw() {
	draw_box();
	_state.draw(x() + Fl::box_dx(box()), y() + Fl::box_dy(box()), !_attributes, _attributes, !!active());
}

Tile_Tessera::Tile_Tessera(int x, int y, size_t row, size_t col, uint16_t id, bool x_flip, bool y_flip,
	bool priority, bool obp1, int palette) :
	Tile_Thing(id, x_flip, y_flip, priority, obp1, palette), Fl_Box(x, y, TILE_SIZE_2X, TILE_SIZE_2X),
	_row(row), _col(col) {
	user_data(NULL);
	box(FL_NO_BOX);
	labeltype(FL_NO_LABEL);
	when(FL_WHEN_RELEASE);
}

void Tile_Tessera::draw() {
	_state.draw(x(), y(), true, Config::attributes(), !!active());
	if (Config::grid()) {
		draw_grid(x(), y());
	}
	if (this == Fl::belowmouse()) {
		draw_selection_border(x(), y());
	}
}

int Tile_Tessera::handle(int event) {
	Main_Window *mw = (Main_Window *)user_data();
	switch (event) {
	case FL_ENTER:
		if (Fl::event_button1() && !Fl::pushed()) {
			Fl::pushed(this);
			do_callback();
		}
		mw->update_status(this);
		redraw();
		return 1;
	case FL_LEAVE:
		mw->update_status(NULL);
		// fallthrough
	case FL_MOVE:
		redraw();
		return 1;
	case FL_PUSH:
		mw->map_editable(true);
		do_callback();
		return 1;
	case FL_RELEASE:
		mw->map_editable(false);
		return 1;
	case FL_DRAG:
		if (!Fl::event_inside(x(), y(), w(), h())) {
			Fl::pushed(NULL);
		}
		return 1;
	}
	return Fl_Box::handle(event);
}

Tile_Button::Tile_Button(int x, int y, uint16_t id) : Tile_Thing(id), Fl_Radio_Button(x, y, TILE_SIZE_2X, TILE_SIZE_2X) {
	user_data(NULL);
	box(FL_NO_BOX);
	labeltype(FL_NO_LABEL);
	when(FL_WHEN_RELEASE);
}

void Tile_Button::draw() {
	_state.draw(x(), y(), true, Config::attributes(), !!active(), !!value());
	if (Config::grid()) {
		draw_grid(x(), y());
	}
	if (value()) {
		draw_selection_border(x(), y());
	}
}

int Tile_Button::handle(int event) {
	// Don't interfere with dragging onto the parent Droppable|Workpane
	return event == FL_ENTER || event == FL_LEAVE || event == FL_DRAG ? 0 : Fl_Radio_Button::handle(event);
}
