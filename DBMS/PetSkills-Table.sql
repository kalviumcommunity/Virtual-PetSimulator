CREATE TABLE PetSkills (
    PetSkillID INT AUTO_INCREMENT PRIMARY KEY,
    PetID INT,
    SkillID INT,
    DateLearned timestamp NOT NULL DEFAULT current_timestamp(),
    FOREIGN KEY (PetID) REFERENCES Pet(PetID),
    FOREIGN KEY (SkillID) REFERENCES Skills(SkillID)
);
