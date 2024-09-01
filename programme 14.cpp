#include <iostream>

#include <string>

using namespace std;
int main() {
string str = "Hi";
// Concatenation
string greeting = str + ", Friends";
cout << "Concatenation: " << greeting << endl;
// Substring
string part = greeting.substr(2, 8); // Extracts "World"
cout << "Substring: " << part << endl;
// Find
size_t pos = greeting.find("Friends");
cout << "Find: 'Friends' found at position " << pos << endl;
// Replace
string replaced = greeting;
replaced.replace(pos, 8, "you're fine");
cout << "Replace: " << replaced << endl;
// Insert
string inserted = greeting;
inserted.insert(3, "my dear");
cout << "Insert: " << inserted << endl;
// Erase
string erased = greeting;
erased.erase(4, 7); // Removes " beautiful"
cout << "Erase: " << erased << endl;
// To uppercase
string uppercase = greeting;
for (char &c : uppercase) c = toupper(c);

cout << "To Uppercase: " << uppercase << endl;

// To lowercase
string lowercase = greeting;
for (char &c : lowercase) c = tolower(c);
cout << "To Lowercase: " << lowercase << endl;
return 0;
}

