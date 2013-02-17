#include "Image.h"

namespace image {

class GreyImage : public Image
{
public:
    GreyImage(const char* path);
    ~GreyImage();
};
}
