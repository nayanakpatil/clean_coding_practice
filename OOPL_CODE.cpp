#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <memory>

// Abstract Strategy Interface
class SearchStrategy {
public:
    virtual bool matches(const std::string& item) const = 0;
    virtual ~SearchStrategy() = default;
};

// Concrete Strategy: StartsWithCharacter
class StartsWithCharacterStrategy : public SearchStrategy {
private:
    char startChar;

public:
    StartsWithCharacterStrategy(char c) : startChar(std::tolower(c)) {}

    bool matches(const std::string& item) const override {
        return !item.empty() && std::tolower(item[0]) == startChar;
    }
};

// Search Engine Class
class SearchEngine {
private:
    std::vector<std::string> items;

public:
    SearchEngine(const std::vector<std::string>& data) : items(data) {}

    std::vector<std::string> search(const SearchStrategy& strategy) const {
        std::vector<std::string> result;
        for (const auto& item : items) {
            if (strategy.matches(item)) {
                result.push_back(item);
            }
        }
        return result;
    }

    static void printItems(const std::vector<std::string>& items) {
        for (const auto& item : items) {
            std::cout << item << std::endl;
        }
    }
};

// Main function
int main() {
    std::vector<std::string> names = {
        "Sam", "John", "Sara", "Michael", "Steve", "Alice", "susan", "Tom", "Travis"
    };

    SearchEngine engine(names);

    // Search names starting with 's'
    StartsWithCharacterStrategy startsWithS('s');
    auto filteredS = engine.search(startsWithS);
    std::cout << "Names starting with 's':\n";
    SearchEngine::printItems(filteredS);

    // Search names starting with 'M'
    StartsWithCharacterStrategy startsWithM('M');
    auto filteredM = engine.search(startsWithM);
    std::cout << "Names starting with 'M':\n";
    SearchEngine::printItems(filteredM);

    return 0;
}
