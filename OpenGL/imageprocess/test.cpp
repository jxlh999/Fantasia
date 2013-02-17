#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <math.h>

using namespace cv;
using namespace std;

typedef unsigned char byte;

byte getValidPixel(int pixel);

void convertToGrey(IplImage *image);

void linearTransition(IplImage *image, double k, double d);

void logTransition(IplImage *image, double c);

void convertToRGB(IplImage *image);

int main(int argc, char const *argv[])
{
    IplImage* image = cvLoadImage("images/lena.jpg");
    convertToGrey(image);
    // linearTransition(image, 1, -50);
    // convertToRGB(image);
    // logTransition(image, 1);
    cvNamedWindow("Test");
    cvShowImage("Test", image);
    cvWaitKey(0);
    cvReleaseImage(&image);
    return 0;
}

byte getValidPixel(int pixel)
{
    if (pixel > 255)
    {
        pixel = 255;
    } else if (pixel < 0)
    {
        pixel = 0;
    }
    return pixel;
}

void convertToGrey(IplImage *image)
{
    cout << "image imageSize = " << image->imageSize << endl;
    cout << "image width = " << image->width << endl;
    cout << "image height = " << image->height << endl;
    int grey = 0;
    if (image)
    {
        for (int i = 0; i < image->imageSize; i += 3)
        {
            // 0.299R + 0.587G + 0.114B
            grey = (byte)image->imageData[i] * 0.114 + (byte)image->imageData[i + 1] * 0.587 + (byte)image->imageData[i + 2] * 0.299;
            // grey = image->imageData[i + 1];
            // grey = ((byte)image->imageData[i] + (byte)image->imageData[i + 1] + (byte)image->imageData[i + 2]) / 3;
            grey = getValidPixel(grey);
            image->imageData[i] = (byte)grey;
            image->imageData[i + 1] = (byte)grey;
            image->imageData[i + 2] = (byte)grey;
        }
    }
}

void linearTransition(IplImage *image, double k, double d)
{
    int grey = 0;
    if (image)
    {
        for (int i = 0; i < image->imageSize; i += 3)
        {
            grey = (byte)image->imageData[i + 0] * k + d;
            grey = getValidPixel(grey);
            image->imageData[i + 0] = (byte)grey;
            image->imageData[i + 1] = (byte)grey;
            image->imageData[i + 2] = (byte)grey;
        }
    }
}

void logTransition(IplImage *image, double c)
{
    int grey = 0;
    if (image)
    {
        for (int i = 0; i < image->imageSize; i += 3)
        {
            grey = log2(1 + image->imageData[i]) * c;
            grey = getValidPixel(grey);
            image->imageData[i + 0] = (byte)grey;
            image->imageData[i + 1] = (byte)grey;
            image->imageData[i + 2] = (byte)grey;
        }
    }
}

void convertToRGB(IplImage *image)
{
    double pixel = 0.0;
    if (image)
    {
        for (int i = 0; i < image->imageSize; i += 3)
        {
            pixel = image->imageData[i + 0] / 0.114;
            image->imageData[i + 0] = getValidPixel(pixel);
            pixel = image->imageData[i + 1] / 0.587;
            image->imageData[i + 1] = getValidPixel(pixel);
            pixel = image->imageData[i + 2] / 0.299;
            image->imageData[i + 2] = getValidPixel(pixel);
        }
    }
}
