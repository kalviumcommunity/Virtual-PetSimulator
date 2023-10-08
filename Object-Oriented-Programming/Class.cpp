#include <iostream>
#include <string>

// Forward Declaration
class Food;
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

public:
    // Constructor for Pet
    Pet(std::string n, std::string t, int a, int u, std::string d, int h, int hl) : name(n), type(t), age(a), userID(u), description(d), hungerLevel(h), happinessLevel(hl) {}

    // Destructor for Pet
    ~Pet()
    {
        std::cout << "Destructor for " << name << " was called." << std::endl;
    }

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

    // Method to feed the pet
    void feed(const Food &foodItem);

    // Method to teach the pet a skill
    void teachSkill(const Skill &skillItem);

    // Method for the pet to engage in an activity
    void doActivity(const Activity &activityItem);
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

// Implement the feed method for Pet after Food class definition
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

int main()
{
    // Create instances of each class and demonstrate their usage
    Pet myPet("Fluffy", "Dragon", 5, 1, "A cute little dragon.", 50, 80);
    User myUser(1, "JohnDoe", "john.doe@example.com", "password123", "2023-09-25");
    Food dragonFood(1, "Dragon Fruit", 100);
    Skill flyingSkill(1, "Flying", "Ability to fly.");
    Activity playActivity(1, "Play", "Play with the pet.");

    std::cout << "Pet Name: " << myPet.getName() << std::endl;
    std::cout << "User Name: " << myUser.getUsername() << std::endl;
    std::cout << "Date Joined: " << myUser.getDateJoined() << std::endl;

    // Feed the pet and display the food details
    std::cout << "\nFeeding " << myPet.getName() << " with " << dragonFood.getFoodName() << " which has a nutritional value of " << dragonFood.getNutritionValue() << "." << std::endl;
    myPet.feed(dragonFood);

    // Teach the pet a skill and display the skill details
    std::cout << "\nTeaching " << myPet.getName() << " the skill: " << flyingSkill.getSkillName() << " - " << flyingSkill.getSkillDescription() << "." << std::endl;
    myPet.teachSkill(flyingSkill);

    // Have the pet engage in an activity and display the activity details
    std::cout << "\nHaving " << myPet.getName() << " engage in the activity: " << playActivity.getActivityName() << "." << std::endl;
    myPet.doActivity(playActivity);

    return 0;
}
