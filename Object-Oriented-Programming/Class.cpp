#include <iostream>
#include <string>

class Pet {
private:
    std::string name;
    std::string type;
    int age;
    int userID;
    std::string description;
    int hungerLevel;
    int happinessLevel;

public:
    // Constructor
    Pet(std::string n, std::string t, int a, int u, std::string d, int h, int hl) : 
        name(n), type(t), age(a), userID(u), description(d), hungerLevel(h), happinessLevel(hl) {}

    // Getter methods
    std::string getName() { return name; }
    std::string getType() { return type; }
    int getAge() { return age; }
    int getUserID() { return userID; }
    std::string getDescription() { return description; }
    int getHungerLevel() { return hungerLevel; }
    int getHappinessLevel() { return happinessLevel; }

    // Setter methods
    void setName(std::string n) { name = n; }
    void setType(std::string t) { type = t; }
    void setAge(int a) { age = a; }
    void setUserID(int u) { userID = u; }
    void setDescription(std::string d) { description = d; }
    void setHungerLevel(int h) { hungerLevel = h; }
    void setHappinessLevel(int hl) { happinessLevel = hl; }
};

class User {
private:
    int userID;
    std::string username;
    std::string email;
    std::string password;
    std::string dateJoined;

public:
    // Constructor
    User(int u, std::string un, std::string e, std::string p, std::string dj) :
        userID(u), username(un), email(e), password(p), dateJoined(dj) {}

    // Getter methods
    int getUserID() { return userID; }
    std::string getUsername() { return username; }
    std::string getEmail() { return email; }
    std::string getPassword() { return password; }
    std::string getDateJoined() { return dateJoined; }

    // Setter methods
    void setUserID(int u) { userID = u; }
    void setUsername(std::string un) { username = un; }
    void setEmail(std::string e) { email = e; }
    void setPassword(std::string p) { password = p; }
    void setDateJoined(std::string dj) { dateJoined = dj; }
};

int main() {
    // Create an instance of Pet
    Pet myPet("Fluffy", "Dragon", 5, 1, "A cute little dragon.", 50, 80);

    // Create an instance of User
    User myUser(1, "JohnDoe", "john.doe@example.com", "password123", "2023-09-25");

    // Display some information
    std::cout << "Pet Name: " << myPet.getName() << std::endl;
    std::cout << "Description: " << myPet.getDescription() << std::endl;
    std::cout << "Hunger level: " << myPet.getHungerLevel() << std::endl;
    std::cout << "User Name: " << myUser.getUsername() << std::endl;
    std::cout << "Date Joined: " << myUser.getDateJoined() << std::endl;
    
    
    return 0;
}
