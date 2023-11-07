SELECT U.Username, MAX(PetsTotalHappiness) AS MaxHappiness
FROM (
    SELECT UserID, SUM(HappinessLevel) AS PetsTotalHappiness
    FROM Pet
    GROUP BY UserID
) AS UserPetsHappiness
JOIN User U ON UserPetsHappiness.UserID = U.UserID;
