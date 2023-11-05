-- Query to display pet's name, skill's name, and the date the skill was learned
SELECT 
    P.Name AS PetName, 
    S.SkillName, 
    PS.DateLearned
FROM 
    PetSkills PS
JOIN 
    Pet P ON PS.PetID = P.PetID
JOIN 
    Skills S ON PS.SkillID = S.SkillID
ORDER BY 
    P.Name, PS.DateLearned;
