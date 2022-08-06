# COMP313 Assignment 1 
## Tarik Hasan Kurnaz

## Target Shooter

[Gameplay video](https://myvuwac-my.sharepoint.com/:v:/g/personal/kurnaztari_myvuw_ac_nz/Ed8puEYuRU5Iif05YWXk4PwBHfOSlisKTTIc9bn_8EVqlg?e=i0WRZV)

## Description

The game is first person shooter game where the player has to shoot 30 targets to win. 

### Main mechanic
Main mechanic of the game is to shoot and destory the targets present in the level with your gun. The player is spawned in the level with a gun in front of them. Targets are actors and have are squares with target practice images on them. They will try to run away from you and hide within the corners of the map. Your goal is to destroy 30 targets and complete the game.

### Development difficulties

Having a main menu and setting variables there which would be used in the first person map level was quite hard. My variables are whether sprint should be a toggle button or a button to hold down, and maximum number of targets in the level at any point. For me to pass those values from main menu level to the actual playable level, i had to utilize a game instance where i would store the values there and then reference them when they would be used, however that took me quite a while to get it working. Then I realized I should also add the score (number of targets currently destroyed) there as well, so I had to change my code and then solve some issues.

Editing animations of the player was also hard. Partly because I did not know what to do, and how to edit such a short sequence of movements. Also, when I pressed undo, it would de-select the part of the body I was working. But the majority of the difficulty came from the fact that I could only change the animation of the arms of the character as the other parts of the user is not visible. Therefore, the animations I could change were quite minor, I made it so that the arm shakes more when moving and after a jump, the arm moves down more further.

### Most interesting

As I said, the trickiest part of the game for me was to keep variables consistent between levels. Having sprinting either be a button press or hold was quite interesting however. The player now can decide which option they want to use and my code checks which is selected and acts accordingly. Adding a Dash button was also quite cool. I utilized my C++ blueprint node for that section. When the user presses "Q", the game gets user's forward vector and multiplies it by a number. This action is bounded by a "Do Once" node but it resets after half a second. However, the player would move much further if they were not touching the ground. To fix that, I added a boolean in my C++ code to launch the user by a different value depending if they were touching the ground or not. This was also quite fun to code and test. 

### Reflection on Learning

I learned how blueprint nodes work on Unreal Engine in a clear way. I did struggle with some parts as I mentioned above, but going forward, I will now think on what I struggled on and remember the solution to such problems. For example, now I know how to use a game instance to pass around stuff between levels. Then I learned while looking at tutorials that maybe I should have used characters instead of actors for my targets, so that I could make them look like humans but also have sensors on them to chase me and such. Instead, I had to code my own "run away from the user" code that checks if the target is close enough to the player than gets each of the participants coordinates to add a force on the target which is more complex than AIMoveTo provided by characters. 

I also learned how to play sounds, edit animations, have different interactions depending on the type of objects are touching (gun's projectile shooting the targets), creating a C++ blueprint node and having different levels/screens to the game.
