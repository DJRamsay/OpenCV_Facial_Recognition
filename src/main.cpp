#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
    string image_path = "1.pgm";
    
    Mat img = imread(image_path, IMREAD_COLOR);
    
    if(img.empty()) {
        cout << "Error: Could not load image at " << image_path << endl;
        cout << "Press any key to exit..." << endl;
        cin.get(); 
        return -1;
    }
    
    namedWindow("Display window", WINDOW_NORMAL);
    imshow("Display window", img);
    
    cout << "Window should be visible. Press any key in the image window to close..." << endl;
    
    int k = waitKey(0);
    
    cout << "Program ending. Press Enter to close this console..." << endl;
    cin.get(); 
    
    return 0;
}