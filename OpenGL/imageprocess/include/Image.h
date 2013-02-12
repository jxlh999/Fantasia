#include <iostream>
#include <string.h>

namespace image {

template<typename T>
class Image
{
public:
    Image(const char* path);
    virtual ~Image();
    virtual void* getImageData() = 0;
private:
    const char* mPath;
};
}
