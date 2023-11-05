-- Granting SELECT access to all tables
GRANT SELECT ON virtualpetsimulator.* TO user_role;

-- Granting INSERT access only to the Pet table
GRANT INSERT ON TABLE Pet TO user_role;

-- Granting UPDATE access only to specific columns in the Pet table
GRANT UPDATE (Name, Age) ON TABLE Pet TO user_role;

-- Admin Role
GRANT ALL PRIVILEGES ON virtualpetsimulator.* TO 'admin_role';
	

