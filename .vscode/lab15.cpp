#include <iostream>
#include <vector>
#include <fstream>
#include <array>
#include <iomanip>

using namespace std;

const int SIZE = 5;

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
         void setReleaseYear(int ry) { releaseYear = ry; }

         string getTitle()  { return title; }
         void setTitle(string t)  { title = t; }

         // Print method
            void print() {
            cout << setw(15) << "Screen Writer: " << screenWriter << endl;
            cout << setw(15) << "Release Year: " << releaseYear << endl;
            cout << setw(15) << "Title: " << title << endl;
}
};

int main() {
    //declarations (create vector and array here)
    cout << fixed << setprecision(2);
    vector<Movie> movie_v;
    array<Movie, SIZE> movie_a;
    ifstream fin ("input.txt");
    string sw;  // holds temporary screen writer
    int ry;     // holds temporary release year
    string t;  // holds temporary title
    int i = 0; // temporary index

     if (fin.good()) {
        while (getline(fin, t)) {  // Read title first
            fin >> ry;              // Read year second
            fin.ignore();
            getline(fin, sw);       // Read screenwriter third
            
            Movie tmp;
            tmp.setTitle(t);
            tmp.setReleaseYear(ry);
            tmp.setScreenWriter(sw);
            movie_v.push_back(tmp);
            movie_a[i] = tmp;
            i++;
        }
        fin.close();
    }
    else {
        cout << "Input file not found.\n";
    }

    // output vector
    for (auto val : movie_v) {
       val.print();
    }
    cout << endl;

    // output array
    for (auto val : movie_a) {
        val.print();
    }

    return 0;
}

