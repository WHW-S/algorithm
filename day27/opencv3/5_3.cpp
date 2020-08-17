#include<opencv4/opencv2/opencv.hpp>
#include <iostream>

int main(int argc,char **argv)
{
    cv::Mat m(100,100,CV_8UC3,cv::Scalar(0,0,0));
    for(int i=20;i<40;++i)
    {
        for(int j=5;j<20;++j)
        {
            m.ptr<cv::Vec3b>(i,j)->val[1]=255;
        }
    }
    cv::namedWindow("Example_5_3",cv::WINDOW_AUTOSIZE);
    cv::imshow("Example_5_3",m);
    cv::waitKey(0);
    return 0;
}

