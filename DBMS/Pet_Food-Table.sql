CREATE TABLE Pet_Food (
    PetID INT,
    FoodID INT,
    FOREIGN KEY (PetID) REFERENCES Pet(PetID),
    FOREIGN KEY (FoodID) REFERENCES Food(FoodID),
    PRIMARY KEY (PetID, FoodID)
);
