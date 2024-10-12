/*#include <iostream>
#include <string>
#include <vector>
#include <iomanip> 

using namespace std;
struct Quote {
    string author;    
    string content;   
    int likes;       
    void displayWithPercentage(float percentage) const {
        cout << "Author: " << author << endl;
        cout << "Quote: \"" << content << "\"" << endl;
        cout << "Likes: " << likes << " (" << fixed << setprecision(2) << percentage << "% of total likes)" << endl;
        cout << "--------------------" << endl;
    }
};
bool addQuote(vector<Quote>& quotes, const string& author, const string& content, int likes) {
    if (likes < 0) {
        cout << "Error: Likes cannot be negative!" << endl;
        return false;
    }
    quotes.push_back({author, content, likes});
    return true;
}
int calculateTotalLikes(const vector<Quote>& quotes) {
    int totalLikes = 0;
    for (const auto& quote : quotes) {
        totalLikes += quote.likes;
    }
    return totalLikes;
}
float calculateAverageLikes(const vector<Quote>& quotes, int totalLikes) {
    return static_cast<float>(totalLikes) / quotes.size();
}
void displayPopularQuotes(const vector<Quote>& quotes, float averageLikes, int totalLikes) {
    cout << "Popular Quotes (More than average likes):\n";
    cout << "--------------------" << endl;
    for (const auto& quote : quotes) {
        if (quote.likes > averageLikes) {
            float percentage = (static_cast<float>(quote.likes) / totalLikes) * 100;
            quote.displayWithPercentage(percentage);
        }
    }
}
int main() {
    vector<Quote> quotes;
    addQuote(quotes, "Albert Einstein", "Life is like riding a bicycle. To keep your balance, you must keep moving.", 100);
    addQuote(quotes, "Maya Angelou", "If you don't like something, change it. If you can't change it, change your attitude.", 250);
    addQuote(quotes, "Confucius", "It does not matter how slowly you go as long as you do not stop.", 300);
    addQuote(quotes, "Anonymous", "Just keep swimming.", -50); 

    if (!quotes.empty()) {
        int totalLikes = calculateTotalLikes(quotes);
        float averageLikes = calculateAverageLikes(quotes, totalLikes);
        displayPopularQuotes(quotes, averageLikes, totalLikes);
    }

    return 0;
}*/