#include<opencv4/opencv2/opencv.hpp>
#include<vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

vector<cv::Mat1b> numbers;

void init_numbers()
{
    //init number
    for(int i=0;i<10;++i)
    {
        numbers.push_back(cv::Mat1b::zeros(20,10));
    }
    //0
    for(int i=2;i<8;++i)
    {
        numbers[0].at<unsigned char>(2,i)=255;
        numbers[0].at<unsigned char>(17,i)=255;
    }
    for(int i=3;i<17;++i)
    {
        numbers[0].at<unsigned char>(i,2);
        numbers[0].at<unsigned char>(i,17);
    }
    // 1:
    for(int i = 2; i < 8; i++)
    {
        numbers[1].at<unsigned char>(17, i) = 255;
    }
    for(int i = 3; i < 17; i++)
    {
        numbers[1].at<unsigned char>(i, 5) = 255;
    }
    numbers[1].at<unsigned char>(5, 2) = 255;
    numbers[1].at<unsigned char>(4, 3) = 255;
    numbers[1].at<unsigned char>(3, 4) = 255;
    numbers[1].at<unsigned char>(2, 5) = 255;

    // 2:
    for(int i = 2; i < 8; i++)
    {
        numbers[2].at<unsigned char>(2, i) = 255;
        numbers[2].at<unsigned char>(9, i) = 255;
        numbers[2].at<unsigned char>(17, i) = 255;
    }
    for(int i = 3; i < 9; i++)
    {
        numbers[2].at<unsigned char>(i, 7) = 255;
    }
    for(int i = 10; i < 17; i++)
    {
        numbers[2].at<unsigned char>(i, 2) = 255;
    }

    // 3:
    for(int i = 2; i < 8; i++)
    {
        numbers[3].at<unsigned char>(2, i) = 255;
        numbers[3].at<unsigned char>(9, i) = 255;
        numbers[3].at<unsigned char>(17, i) = 255;
    }
    for(int i = 3; i < 9; i++)
    {
        numbers[3].at<unsigned char>(i, 7) = 255;
    }
    for(int i = 10; i < 17; i++)
    {
        numbers[3].at<unsigned char>(i, 7) = 255;
    }

    // 4:
    for(int i = 2; i < 8; i++)
    {
        numbers[4].at<unsigned char>(10, i) = 255;
    }
    for(int i = 2; i < 18; i++)
    {
        numbers[4].at<unsigned char>(i, 5) = 255;
    }
    numbers[4].at<unsigned char>(4, 4) = 255;
    numbers[4].at<unsigned char>(5, 4) = 255;
    numbers[4].at<unsigned char>(6, 3) = 255;
    numbers[4].at<unsigned char>(7, 3) = 255;
    numbers[4].at<unsigned char>(8, 3) = 255;
    numbers[4].at<unsigned char>(9, 2) = 255;
    numbers[4].at<unsigned char>(10, 2) = 255;

    // 5:
    for(int i = 2; i < 8; i++)
    {
        numbers[5].at<unsigned char>(2, i) = 255;
        numbers[5].at<unsigned char>(9, i) = 255;
        numbers[5].at<unsigned char>(17, i) = 255;
    }
    for(int i = 3; i < 9; i++)
    {
        numbers[5].at<unsigned char>(i, 2) = 255;
    }
    for(int i = 10; i < 17; i++)
    {
        numbers[5].at<unsigned char>(i, 7) = 255;
    }

    // 6:
    for(int i = 2; i < 8; i++)
    {
        numbers[6].at<unsigned char>(2, i) = 255;
        numbers[6].at<unsigned char>(9, i) = 255;
        numbers[6].at<unsigned char>(17, i) = 255;
    }
    for(int i = 3; i < 17; i++)
    {
        numbers[6].at<unsigned char>(i, 2) = 255;
    }
    for(int i = 10; i < 17; i++)
    {
        numbers[6].at<unsigned char>(i, 7) = 255;
    }

    // 7:
    for(int i = 2; i < 8; i++)
    {
        numbers[7].at<unsigned char>(2, i) = 255;
    }
    for(int i = 3; i < 6; i++)
    {
        numbers[7].at<unsigned char>(i, 7) = 255;
    }
    for(int i = 6; i < 10; i++)
    {
        numbers[7].at<unsigned char>(i, 6) = 255;
    }
    for(int i = 10; i < 14; i++)
    {
        numbers[7].at<unsigned char>(i, 5) = 255;
    }
    for(int i = 14; i < 18; i++)
    {
        numbers[7].at<unsigned char>(i, 4) = 255;
    }

    // 8:
    for(int i = 2; i < 8; i++)
    {
        numbers[8].at<unsigned char>(2, i) = 255;
        numbers[8].at<unsigned char>(9, i) = 255;
        numbers[8].at<unsigned char>(17, i) = 255;
    }
    for(int i = 3; i < 17; i++)
    {
        numbers[8].at<unsigned char>(i, 2) = 255;
    }
    for(int i = 3; i < 17; i++)
    {
        numbers[8].at<unsigned char>(i, 7) = 255;
    }

    // 9:
    for(int i = 2; i < 8; i++)
    {
        numbers[9].at<unsigned char>(2, i) = 255;
        numbers[9].at<unsigned char>(9, i) = 255;
        numbers[9].at<unsigned char>(17, i) = 255;
    }
    for(int i = 3; i < 17; i++)
    {
        numbers[9].at<unsigned char>(i, 7) = 255;
    }
    for(int i = 3; i < 10; i++)
    {
        numbers[9].at<unsigned char>(i, 2) = 255;
    }
}

void help()
{
    cout<<"Input '0'-'9' to display ,and other keys will quit."<<endl;
}

const int display_height=500;
const int display_width=500;
int main(int argc,char **argv)
{
    init_numbers();
    help();
    cv::Mat1b display(display_height,display_width);
    display=0;
    unsigned count=0;

    cv::namedWindow("Typewriter",cv::WINDOW_AUTOSIZE);
    cv::imshow("Typewriter",display);

    char ch=cv::waitKey(0);
    do
    {
        if(ch<'0'||ch>'9')
        {
            CV_Error(1,"Input is not allowd.");
        }
        numbers[ch-'0'].copyTo(display.rowRange(0,20).colRange(0+10*count,10+10*count));
        cout<<ch<<endl;
        cv::imshow("Typewriter",display);
        count++;
        if(count*10>=display_width)
        {
            cout<<"Display row full."<<endl;
        }
        ch=cv::waitKey(0);
    }while(ch>='0'&&ch<='9');

    cout<<"Typewriter quit!"<<endl;

    return 0;
}

