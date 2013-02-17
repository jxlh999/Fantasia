#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <string.h>

#include "ImageType.h"

namespace image {

class Image
{
public:
    Image(const char* path) {
        if (path)
        {
            mPath = path;
        }
        mImage = cvLoadImage(mPath);
    }
    virtual ~Image() {
        cvReleaseImage(&mImage);
    }
    virtual byte* getImageData() {
        return (byte *)mImage->imageData;
    }
    virtual int getImageWidth() {
        return mImage->width;
    }
    virtual int getImageHeight() {
        return mImage->height;
    }
    virtual int getImageSize() {
        return mImage->imageSize;
    }
    virtual int getImageDepth() {
        return mImage->depth;
    }
    virtual byte* getImageOriginalData() {
        return (byte *)mImage->imageDataOrigin;
    }
    virtual const char* getImagePath() {
        return mPath;
    }
    virtual const char* getImageChannelSeq() {
        return mImage->channelSeq;
    }
    virtual int getImageDataOrder() {
        return mImage->dataOrder;
    }
private:
    const char* mPath;
    IplImage *mImage;
};
}
