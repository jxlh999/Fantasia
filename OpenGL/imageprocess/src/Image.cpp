#include "Image.h"

namespace image {

template<typename T>
Image<T>::Image(const char* path) {
    this->mPath = path;
}

template<typename T>
void* Image<T>::getImageData() {
    return NULL;
}


}
