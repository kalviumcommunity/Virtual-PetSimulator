SELECT s.SkillName, s.Description
FROM PetSkills ps
JOIN Skills s ON ps.SkillID = s.SkillID
WHERE ps.PetID = 1;
