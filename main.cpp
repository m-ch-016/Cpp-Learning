#include <iostream>
#include <string>

int countVowels(std::string s) 
{
    int result{};
    
    for (int i = 0; i < s.length(); i++) 
    {
        if (std::tolower(s[i]) == 'a' || std::tolower(s[i]) == 'e' || std::tolower(s[i]) == 'i' || std::tolower(s[i]) == 'o' || std::tolower(s[i]) == 'u') 
        {
            result += 1;
        }
    }

    return result;
}


int main() {
    std::string input{};

    std::cout << "Enter a string: ";
    std::getline(std::cin,input);

    std::cout << "The number of vowels is: " << countVowels(input);
}