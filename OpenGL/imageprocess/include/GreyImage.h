
#include "Image.h"

namespace image {

template<typename T>
class GreyImage : public Image<T>
{
public:
    GreyImage(const char* path);
    ~GreyImage();

    /* data */
};
}
