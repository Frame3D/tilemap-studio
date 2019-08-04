#ifndef IMAGE_H
#define IMAGE_H

#pragma warning(push, 0)
#include <FL/Fl_RGB_Image.H>
#pragma warning(pop)

#define NUM_CHANNELS 3

class Image {
public:
	enum Result { IMAGE_OK, IMAGE_BAD_FILE, IMAGE_BAD_PNG };
	static Result write_image(const char *f, Fl_RGB_Image *img);
	static const char *error_message(Result result);
};

#endif