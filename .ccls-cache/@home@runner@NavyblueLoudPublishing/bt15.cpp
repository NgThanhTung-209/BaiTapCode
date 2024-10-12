/*#include <iostream>
#include <string>
using namespace std;
struct MovieData {
    string title;        
    string director;    
    int releaseYear;     
    int duration;        
    double productionCost;  
    double firstYearRevenue; 
};
void displayMovieData(const MovieData &movie) {
    cout << "===== Thông tin bộ phim =====" << endl;
    cout << "Tên phim      : " << movie.title << endl;
    cout << "Đạo diễn      : " << movie.director << endl;
    cout << "Năm phát hành : " << movie.releaseYear << endl;
    cout << "Thời lượng    : " << movie.duration << " phút" << endl;
    double profit = movie.firstYearRevenue - movie.productionCost;
    if (profit >= 0) {
        cout << "Lợi nhuận     : " << profit << " USD" << endl;
    } else {
        cout << "Thua lỗ       : " << -profit << " USD" << endl;
    }
    cout << "=============================" << endl;
}

int main() {
    MovieData movie1;
    movie1.title = "Avatar";
    movie1.director = "James Cameron";
    movie1.releaseYear = 2009;
    movie1.duration = 162;
    movie1.productionCost = 237000000;  
    movie1.firstYearRevenue = 760000000; 

    MovieData movie2;
    movie2.title = "John Carter";
    movie2.director = "Andrew Stanton";
    movie2.releaseYear = 2012;
    movie2.duration = 132;
    movie2.productionCost = 263700000; 
    movie2.firstYearRevenue = 284000000; 
    displayMovieData(movie1);
    displayMovieData(movie2);

    return 0;
}*/