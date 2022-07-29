# Arma3-Vic-Spawner

Current Version: V1.0

This is to track my vehicle spawner I have created for Arma 3

Instructions for use

If you want to make changes, you are able to do so live, as long as your mission file isnt packed into a PBO yet. Just open the file in your preferred text editor and save, then open the spanwer

First off, in description.ext (sample included), make sure 

#include "Console\defines.hpp"
#include "Console\control.hpp"

Are both included at the top. These are the 'frame' of the GUI

Using the Spawner
To add the spawner to the console, remove all old spawner code and add

this addAction ["Open Spawner", "Console\openMenu.sqf"];

To the console

Making edits to the Code

Please don't touch create.sqf unless you absolutely know what you're doing. The way its set up works. I'm not 100% sure how, but it does

To edit vehicles/pads, edit openMenu.sqf

The first list is the display names for the vehicles
The second list is the classnames for the vehicles
The third list is the display names for the pads
The fourth list is the variable name for the pads

To add a vehicle, follow these steps
1. Copy this code: lbAdd [150, "Vehicle Name HERE"];
2. Place code in the list where you desire
3. Find the classname for the vehicle
4. Copy this code: lbSetData [150, 0, "Vehcile classname HERE];
5. Place the code in the same order as the vehicle name list
6. Make sure to update the 0 based off where in the list you put it
7. The list starts at 0, and increases by one. Skip one spot for the Test vehicles Header, reference the original for help. Noticed that I skipped one number where the header would be 
