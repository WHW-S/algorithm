#include<opencv4/opencv2/opencv.hpp>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(int argc,char **argv)
{
    cv::Mat m=cv::Mat::zeros(100,100,CV_8UC3);
    //cv::Scalar color(0,255,0);
    //m(cv::Range(20,41),cv::Range(5,21))=color;
    for(int i=20;i<=40;++i)
    {
        for(int j=5;j<=20;++j)
        {
            m.at<cv::Vec3b>(i,j)[1]=255;
        }
    }
    cv::namedWindow("Example_5_1",cv::WINDOW_AUTOSIZE);
    cv::imshow("Example_5_1",m);
    cv::waitKey(0);
    return 0;
}

