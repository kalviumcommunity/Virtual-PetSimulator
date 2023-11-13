SELECT Pet.Name AS PetName, Food.Name AS FoodName
FROM Pet_Food
JOIN Pet ON Pet_Food.PetID = Pet.PetID
JOIN Food ON Pet_Food.FoodID = Food.FoodID;

/*Displaying which can eat which food through Join*/
