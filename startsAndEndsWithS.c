#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

// Strategy: names starting with 's' or 'S'
bool searchNamesStartingWithS(const std::string& name) {
    return !name.empty() && (name[0] == 's' || name[0] == 'S');
}

// Strategy: names ending with 's' or 'S'
bool searchNamesEndingWithS(const std::string& name) {
    return !name.empty() && (name.back() == 's' || name.back() == 'S');
}

// Generic search function using a strategy
std::vector<std::string> searchNames(
    const std::vector<std::string>& names,
    std::function<bool(const std::string&)> searchStrategy)
{
    std::vector<std::string> result;
    for (const auto& name : names) {
        if (searchStrategy(name)) {
            result.push_back(name);
        }
    }
    return result;
}

// Print result
void printNames(const std::vector<std::string>& names) {
    for (const auto& name : names) {
        printf("%s\n", name.c_str());
    }
}

int main() {
    std::vector<std::string> names = {"Sam", "John", "Sara", "Michael", "Steve", "Alice", "susan", "Carlos"};

    // Search for names starting with 's'
    printf("Names starting with 's':\n");
    auto startMatches = searchNames(names, searchNamesStartingWithS);
    printNames(startMatches);

    // Search for names ending with 's'
    printf("\nNames ending with 's':\n");
    auto endMatches = searchNames(names, searchNamesEndingWithS);
    printNames(endMatches);

    return 0;
}
