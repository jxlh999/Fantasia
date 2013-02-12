#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

typedef unsigned char byte;

void convertToGrey(IplImage *image);

int main(int argc, char const *argv[])
{
    IplImage* image = cvLoadImage("images/lena.jpg");
    convertToGrey(image);
    cvNamedWindow("Test");
    cvShowImage("Test", image);
    cvWaitKey(0);
    cvReleaseImage(&image);
    return 0;
}

void convertToGrey(IplImage *image)
{
    byte grey = 0;
    if (image)
    {
        for (int i = 0; i < image->imageSize; i += 3)
        {
            // 0.299R + 0.587G + 0.114B
            grey = image->imageData[i] * 0.299 + image->imageData[i + 1] * 0.587 + image->imageData[i + 2] * 0.114;
            cout << "grey[" << i << "] = " << (int)grey << endl;
            if (grey > 255)
            {
                grey = 255;
            }
            image->imageData[i] = grey;
            image->imageData[i + 1] = grey;
            image->imageData[i + 2] = grey;
        }
    }
}
