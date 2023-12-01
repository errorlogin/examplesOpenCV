#include<opencv2/opencv.hpp>
#include<opencv2/core/mat.hpp>
#include <opencv2/imgcodecs.hpp>
#include <iostream>
using namespace cv;
int main()

{     
    cv::Mat image1,image2; 
    image1=cv::imread("i1.jpg"); //имя файла изображения
    cv::namedWindow("image1",cv::WINDOW_AUTOSIZE); 
    cv::imshow("image1",image1); // created the window by name image1 
    cv::waitKey(0); 
    cv::destroyWindow("image1");     
    return 0; 
}