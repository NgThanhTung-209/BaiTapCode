/*#include <iostream>
#include <string>
#include <vector>

using namespace std;
struct Quote {
    string author;   
    string content;  
    int likes;    
    void display() const {
        cout << "Author: " << author << endl;
        cout << "Quote: \"" << content << "\"" << endl;
        cout << "Likes: " << likes << endl;
    }
};
void addQuote(vector<Quote>& quotes, const string& author, const string& content, int likes) {
    quotes.push_back({author, content, likes});
}
void displayAllQuotes(const vector<Quote>& quotes) {
    for (const auto& quote : quotes) {
        quote.display();
        cout << "--------------------" << endl;
    }
}
int main() {
    vector<Quote> quotes;
    addQuote(quotes, "Albert Einstein", "Life is like riding a bicycle. To keep your balance, you must keep moving.", 100);
    addQuote(quotes, "Maya Angelou", "If you don't like something, change it. If you can't change it, change your attitude.", 250);
    addQuote(quotes, "Confucius", "It does not matter how slowly you go as long as you do not stop.", 300);
    displayAllQuotes(quotes);

    return 0;
}*/
