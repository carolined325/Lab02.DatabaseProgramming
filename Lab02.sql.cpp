/*
Create a SQL script called 'lab02.sql' that accomplishes the following on a newly created database:

1. 2. Uses a database named games that you may create using pgAdmin.
Creates a table named video_games that has an auto-incrementing integer primary key called game_id, a text field called game_name, a datetimeLinks to an external site. field called release_date, and a text field called game_system.
3. Uses DML queries to populate the video_games table with the following entries:
    1. Pokemon Blue, February 27 1996, Game Boy
    2. Super Smash Bros., January 21, 1999 , Nintendo 64
    3. Halo: Combat Evolved, November 15, 2001, Xbox
    4. Final Fantasy VII, January 31, 1997, Playstation
    5. Everquest, March 16, 1999, PC
4. Creates a table named game_characters that has an auto-incrementing integer primary key called character_id, a text field called character_name, a foreign key field game_id that references the id in the video_games table.
5. Uses DML queries to populate the characters table with the following entries:
    1. Squirtle, 1
    2. Missingno, 1
    3. Pikachu, 2
    4. Yoshi, 2
    5. Luigi, 2
    6. Master Chief, 3
    7. Arbiter, 3
    8. Cloud Strife, 4
    9. Sephiroth, 4
    10. Venril Sathir, 5
*/


CREATE TABLE video_games
    (game_id SERIAL PRIMARY KEY,
    game_name text,
    release_date date,
    game_system text);
INSERT INTO video_games(game_name, release_date, game_system)VALUES
    ('Pokemon Blue', 'February 27 1996', 'Game Boy'),
    ('Super Smash Bros.', 'January 21, 1999' , 'Nintendo 64'),
    ('Halo: Combat Evolved', 'November 15, 2001', 'Xbox'),
    ('Final Fantasy VII', 'January 31, 1997', 'Playstation'),
    ('Everquest', 'March 16, 1999', 'PC');*/
CREATE TABLE game_characters
    (character_id SERIAL PRIMARY KEY,
    character_name text,
    game_id int,
FOREIGN KEY(game_id) REFERENCES video_games(game_id));
INSERT INTO game_characters(character_name, game_id) VALUES
    ('Squirtle',1),
    ('Missingo', 1),
    ('Pikachu', 2),
    ('Yoshi', 2),
    ('Luigi',2),
    ('Master Chief', 3),
    ('Arbiter', 3),
    ('Cloud Strife', 4),
    ('Sephiroth', 4),
    ('Venril Sathir', 5);
