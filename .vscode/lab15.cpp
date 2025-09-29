#include <iostream>
#include <vector>
#include <fstream>
#include <array>

using namespace std;

class Movie {
    private:
        string screenWriter;
        int releaseYear;
        string title;

    public:
        // Getters and Setters
        string getScreenWriter()  { return screenWriter; }
        void setScreenWriter(string sw)  { screenWriter = sw; }

         int getReleaseYear()  { return releaseYear; }
         void getReleaseYear(int ry) { releaseYear = ry; }

         string getTitle()  { return title; }
         void setTitle(string t)  { title = t; }

         // Print method
            void print() {
            cout << setw(15) << "Screen Writer: " << screenWriter << endl;
            cout << setw(15) << "Release Year: " << releaseYear << endl;
            cout << setw(15) << "Title: " << title << endl;
}
};