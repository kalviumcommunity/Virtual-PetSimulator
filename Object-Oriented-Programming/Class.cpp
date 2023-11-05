#include <iostream>
#include <vector>
#include <memory> // For smart pointers

class Food; // Forward Declaration
class Skill;
class Activity;

// Pet class definition
class Pet
{
private:
    std::string name;
    std::string type;
    int age;
    int userID;
    std::string description;
    int hungerLevel;
    int happinessLevel;
    static int totalPets;  // Declare static variable

public:
    // Constructor for Pet
    Pet(std::string n, std::string t, int a, int u, std::string d, int h, int hl) : name(n), type(t), age(a), userID(u), description(d), hungerLevel(h), happinessLevel(hl) {
    totalPets++;
      displayPetDetails();  // Display pet details when a pet is created
}
    // Destructor for Pet
    ~Pet()
    {
        std::cout << "Destructor for " << name << " was called." << std::endl;
        totalPets--;
    }

        // Method to display pet details
    void displayPetDetails() const {
        std::cout << "Pet Name: " << name << std::endl;
        std::cout << "Type: " << type << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "User ID: " << userID << std::endl;
        std::cout << "Description: " << description << std::endl;
        std::cout << "Hunger Level: " << hungerLevel << std::endl;
        std::cout << "Happiness Level: " << happinessLevel << std::endl;
        std::cout << "-----------------------------------" << std::endl;
    }

     virtual void performSpecialAction() = 0;

    // Getter methods for Pet
    std::string getName() const { return name; }
    std::string getType() const { return type; }
    int getAge() const { return age; }
    int getUserID() const { return userID; }
    std::string getDescription() const { return description; }
    int getHungerLevel() const { return hungerLevel; }
    int getHappinessLevel() const { return happinessLevel; }

    // Setter methods for Pet
    void setName(std::string n) { name = n; }
    void setType(std::string t) { type = t; }
    void setAge(int a) { age = a; }
    void setUserID(int u) { userID = u; }
    void setDescription(std::string d) { description = d; }
    void setHungerLevel(int h) { hungerLevel = h; }
    void setHappinessLevel(int hl) { happinessLevel = hl; }

   
    void feed(const Food &foodItem);


    void teachSkill(const Skill &skillItem);

    void doActivity(const Activity &activityItem);

    static int getTotalPets() {
        return totalPets;
    }

    
};
int Pet::totalPets = 0;

// Derived classes for different Pet types
class Dragon : public Pet {
public:
    using Pet::Pet; // Inherit constructors

    void performSpecialAction() override {
        std::cout << getName() << " breathes fire!" << std::endl;
    }
};

class Dog : public Pet {
public:
    using Pet::Pet; // Inherit constructors

    void performSpecialAction() override {
        std::cout << getName() << " wags its tail happily!" << std::endl;
    }
};

class Cat : public Pet {
public:
    using Pet::Pet; // Inherit constructors

    void performSpecialAction() override {
        std::cout << getName() << " purrs softly!" << std::endl;
    }
};

// Food class definition
class Food
{
private:
    int foodID;
    std::string foodName;
    int nutritionValue;

public:
    // Constructor for Food
    Food(int fID, std::string fName, int nValue) : foodID(fID), foodName(fName), nutritionValue(nValue) {}

    // Getter methods for Food
    int getFoodID() const { return foodID; }
    std::string getFoodName() const { return foodName; }
    int getNutritionValue() const { return nutritionValue; }

    // Setter methods for Food
    void setFoodID(int fID) { foodID = fID; }
    void setFoodName(std::string fName) { foodName = fName; }
    void setNutritionValue(int nValue) { nutritionValue = nValue; }
};


void Pet::feed(const Food &foodItem)
{
    this->hungerLevel += foodItem.getNutritionValue();
    std::cout << this->name << " was fed " << foodItem.getFoodName() << " and its hunger level is now " << this->hungerLevel << std::endl;
}

// User class definition
class User
{
private:
    int userID;
    std::string username;
    std::string email;
    std::string password;
    std::string dateJoined;

public:
    // Constructor for User
    User(int u, std::string un, std::string e, std::string p, std::string dj) : userID(u), username(un), email(e), password(p), dateJoined(dj) {}

    // Getter methods for User
    int getUserID() const { return userID; }
    std::string getUsername() const { return username; }
    std::string getEmail() const { return email; }
    std::string getPassword() const { return password; }
    std::string getDateJoined() const { return dateJoined; }

    // Setter methods for User
    void setUserID(int u) { userID = u; }
    void setUsername(std::string un) { username = un; }
    void setEmail(std::string e) { email = e; }
    void setPassword(std::string p) { password = p; }
    void setDateJoined(std::string dj) { dateJoined = dj; }
};

// Skills class definition
class Skill
{
private:
    int skillID;
    std::string skillName;
    std::string skillDescription;

public:
    // Constructor for Skill
    Skill(int sID, std::string sName, std::string sDesc) : skillID(sID), skillName(sName), skillDescription(sDesc) {}

    // Getter methods for Skill
    int getSkillID() const { return skillID; }
    std::string getSkillName() const { return skillName; }
    std::string getSkillDescription() const { return skillDescription; }

    // Setter methods for Skill
    void setSkillID(int sID) { skillID = sID; }
    void setSkillName(std::string sName) { skillName = sName; }
    void setSkillDescription(std::string sDesc) { skillDescription = sDesc; }
};

// Implement the teachSkill method for Pet after Skill class definition
void Pet::teachSkill(const Skill &skillItem)
{
    std::cout << name << " learned the skill: " << skillItem.getSkillName() << " - " << skillItem.getSkillDescription() << std::endl;
}

// Activity class definition
class Activity
{
private:
    int activityID;
    std::string activityName;
    std::string activityDescription;

public:
    // Constructor for Activity
    Activity(int aID, std::string aName, std::string aDesc) : activityID(aID), activityName(aName), activityDescription(aDesc) {}

    // Getter methods for Activity
    int getActivityID() const { return activityID; }
    std::string getActivityName() const { return activityName; }
    std::string getActivityDescription() const { return activityDescription; }

    // Setter methods for Activity
    void setActivityID(int aID) { activityID = aID; }
    void setActivityName(std::string aName) { activityName = aName; }
    void setActivityDescription(std::string aDesc) { activityDescription = aDesc; }
};

// Implement the doActivity method for Pet after Activity class definition
void Pet::doActivity(const Activity &activityItem)
{
    happinessLevel += 10; // Increase happiness level by 10 for simplicity
    std::cout << name << " did the activity: " << activityItem.getActivityName() << " and its happiness level is now " << happinessLevel << std::endl;
}

int main() {
    // Using a vector of unique_ptr for automatic memory management
    std::vector<std::unique_ptr<Pet>> pets;

    // Dynamically creating Pet instances
    pets.push_back(std::make_unique<Dragon>("Fluffy", "Dragon", 5, 1, "A cute little dragon.", 50, 80));
    pets.push_back(std::make_unique<Dog>("Buddy", "Dog", 3, 2, "A playful dog.", 40, 90));
    pets.push_back(std::make_unique<Cat>("Whiskers", "Cat", 2, 3, "A lazy cat.", 30, 70));

    // Create other objects needed for operations
    Food dragonFood(1, "Dragon Fruit", 100);
    Skill flyingSkill(1, "Flying", "Ability to fly.");
    Activity playActivity(1, "Play", "Play with the pet.");

    // Feed the pets
    for (auto& pet : pets) {
        pet->feed(dragonFood);
    }

    // Teach skills to the pets
    for (auto& pet : pets) {
        pet->teachSkill(flyingSkill);
    }

    // Have the pets engage in activities
    for (auto& pet : pets) {
        pet->doActivity(playActivity);
    }

    // Perform special actions for each pet
    for (auto& pet : pets) {
        pet->performSpecialAction();
    }

    std::cout << "Total number of pets: " << Pet::getTotalPets() << std::endl;

    // Pets are automatically deleted when the vector goes out of scope
    return 0;
}
