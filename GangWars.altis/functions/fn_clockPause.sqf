

if (isNil "unpaused") exitwith {hint"The clock isnt running to be pauseable!"};

if (unpaused) then {
	unpaused = false; 
	}
else {
	unpaused = true; 	
	[] spawn life_fnc_clockFunction;
	
};

publicVariable "unpaused";