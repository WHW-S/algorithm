#include<opencv4/opencv2/opencv.hpp>
#include <iostream>

int main(int argc,char **argv)
{
    cv::Mat m(210,210,CV_8UC1);
    m=0;
    for(int i=0;i<11;i++)
    {
        cv::Mat mask(210-20*i,210-20*i,CV_8UC1);
        mask=1;
        cv::Mat ROI(m(cv::Rect(10*i,10*i,210-20*i,210-20*i)));
        if(i<10)
            mask.rowRange(10,210-20*i-10).colRange(10,210-20*i-10)=0;
        ROI.setTo(i*20,mask);
    }
    cv::namedWindow("Example5_4",cv::WINDOW_AUTOSIZE);
    cv::imshow("Example5_4",m);
    cv::waitKey(0);
    return 0;
}
