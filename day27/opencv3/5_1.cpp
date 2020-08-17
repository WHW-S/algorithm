#include<opencv4/opencv2/opencv.hpp>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(int argc,char **argv)
{
    cv::Mat m=cv::Mat::zeros(100,100,CV_8UC3);
    cv::Point2i center(49,49);
    cv::Scalar color(255,128,128);
    cv::circle(m,center,20,color);
    cv::namedWindow("Example_5_1",cv::WINDOW_AUTOSIZE);
    cv::imshow("Example_5_1",m);
    cv::waitKey(0);
    return 0;
}

